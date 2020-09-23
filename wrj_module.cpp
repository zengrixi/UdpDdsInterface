#include "wrj_module.h"
#include "ddshelper.h"
#include "SurveyMath/surveymath.h"

QMutex mutex_queue;

// 无人机编号（暂时只有一台）
unsigned char DevId = 0x00;

//遥测数据
unsigned char DataID_YaoCe  = 0x02;
unsigned char DataLen_YaoCe = 0x13;

//派发无人机任务航线的数据
unsigned char HeadLen_Track = 0x02;
unsigned char DataID_Track  = 0x21;
unsigned char WayPoint_Size = 12;
unsigned char WayPoint_Num  = 2;
unsigned char DataLen_Track = 2 + WayPoint_Size*WayPoint_Num;
unsigned char Track_Num = 3;

//对无人机控制权限申请/释放的数据,应答包ID相同为0xF0，长度为0x01,内容为0x00或0x01
unsigned char DataID_CtrlAuthority  = 0xF0;
unsigned char DataLen_CtrlAuthority = 0x02;
unsigned char DataID_CtrlAuthority_Response  = 0xF0;
unsigned char DataLen_CtrlAuthority_Response = 0x01;

//按照现在协议 以下int的变量可换成 8字节大小存储
int positionPacketSize = 21;
int responsePacketSize = 3;

//定义以下变量，以便日后协议内容的改动，给宏定义留口
int packetHeadLength = 3 ;
int packetTailLength = 2 ;
int Length_ExceptDataFrame = packetHeadLength + packetTailLength;
unsigned char WRJ_Packet_FirstHead  = 0xAA;
unsigned char WRJ_Packet_SecondHead = 0x55;

WRJ_Module::WRJ_Module()
{
   WRJ_Init();
   WRJ_CtrlAuthorityTime=0;
   connect(this,&WRJ_Module::WRJ_Get_or_Release_ControlAuthority_Success,this,&WRJ_Module::WRJ_Track_Init);

   //定时申请控制权直到获得
   connect(&timer_requestCtrl,&QTimer::timeout,this,&WRJ_Module::WRJ_RequestGet_CtrlAuthority);
   timer_requestCtrl.start(200);
}

WRJ_Module::~WRJ_Module()
{
    if(UnicastUdpSocket != Q_NULLPTR)
        delete UnicastUdpSocket;

    if(savePosition_deque !=Q_NULLPTR){

        if(!savePosition_deque->empty()){
            WRJ_PositionQueue_AllClear();
        }

        delete savePosition_deque;
    }
}


//********************************  初始化 *************************************************//
void WRJ_Module::WRJ_Init()
{
    qDebug()<<"-------------------- WRJ_Module thread is: "<<QThread::currentThreadId();

    WRJ_PositionQueue_Init();
    sleep(1);

    WRJ_UdpSocket_Init();
    sleep(1);
    //qDebug()<<"right 2";
}

void WRJ_Module::WRJ_UdpSocket_Init()
{
    UnicastUdpSocket = new QUdpSocket;

    //配置文件待写
    LocalPort = 9100;
    DestinationIP.setAddress(_WRJ_IP);
    DestinationPort = _WRJ_PORT;

    if(!UnicastUdpSocket->bind(LocalPort)){
        qDebug()<<"fail to bind the port: "<<LocalPort;
        UnicastUdpSocket->deleteLater();
    }
    connect(UnicastUdpSocket,&QUdpSocket::readyRead,this,&WRJ_Module::WRJ_Recv_DifferentPacket);
}

void WRJ_Module::WRJ_Track_Init()
{
    //等待成功信号才发送初始航线并断开与该函数的连接
    disconnect(this,&WRJ_Module::WRJ_Get_or_Release_ControlAuthority_Success,this,&WRJ_Module::WRJ_Track_Init);

    WayPoint_Struct *wayPoints=new WayPoint_Struct[wrj_wayPointNum];

    //************************  初始航线数据 ***********************
    for(int i=0;i<wrj_wayPointNum;i++)
    {
        wayPoints[i].Lon = SurveyMath::DegreeToRadian(wrj_wayIniPoint[i].x);
        wayPoints[i].Lat = SurveyMath::DegreeToRadian(wrj_wayIniPoint[i].y);
        wayPoints[i].Alt = wrj_wayIniPoint[i].z;
    }
    WRJ_send_TrackDataPacket(wayPoints,wrj_wayPointNum);
    delete[] wayPoints;
    ///释放控制权限????shi待确认
    WRJ_release_CtrlAuthority();
}


//*******************************  接包 、 解包 、向内部存数据  ******************************//

void WRJ_Module::WRJ_Recv_DifferentPacket()
{
    while (UnicastUdpSocket->hasPendingDatagrams())
    {
        int packetSize =  UnicastUdpSocket->pendingDatagramSize();
        QByteArray packet(packetSize,0);
        UnicastUdpSocket->readDatagram(packet.data(),packetSize);
        if( 0 == packetSize){
            continue ;
        }

        QByteArray dataFrame(WRJ_Analyze_Packet(packet));
        if(!dataFrame.size()){
           continue ;
        }

        mutex_queue.lock();
        WRJ_Analyze_DataFrame( &dataFrame );
        qDebug()<<"get Postions ";
        mutex_queue.unlock();
    }

}

QByteArray WRJ_Module::WRJ_Analyze_Packet(QByteArray packet)
{
        int packetSize = packet.size();

        /* 由于应答数据帧和位置数据帧 会糅合在一个包里发送过来
         * 所以处理该包的数据帧部分，主要识别是 位置数据帧 还是 应答数据帧
         * 因为只会认可两种包 -- 数据帧均为位置数据的包 以及 夹杂了应答数据或者纯应答的包（关于含有应答的数据统一处理）
         * 所以对于：数据帧部分的长度 = 21 *n  还是 数据帧部分的长度 = 3 + 21*n （n为位置数据包的个数）
         * 以此就可以大致分清是纯位置数据包还是夹杂了应答数据的包，当然还有错误的包
        */

        /**************** 对包的预处理如下（交给本函数处理） ****************/
        //一、取出包的包头、包尾，根据协议判断
        // 1、取出包头3个字节，根据协议判断，若不符合，则丢弃
        // 2、对包头以及数据帧使用CRC进行校验，然后与包尾 2 个字节组成的数进行比较，若不相等，则丢弃

        /**************** 对包的数据帧处理如下（交给WRJ_Module类中的处理函数处理 ****************/
        //二、取出包的数据帧部分）根据数据帧长度大致判断属于哪种包（纯位置数据包、夹杂应答或纯应答包、错误包）
        // 1、对于一个纯位置数据包的数据帧而言，该帧含有 n 个位置包，每个位置包大小为 21，数据帧长度 % 21 =0
        // 2、对于一个夹杂了或者只有应答数据的包的数据帧而言，该帧中应答数据为： 0xf0 0x01 0x00/0x01 ,总共 3个字节，而其总长度
        //   为 3 + 21*n 个字节（ n可能为0 ）个字节
        // 3、因此数据帧长度不符合上述两点的包，应该属于错误包，丢弃

        //若帧头不对，不再处理该包
        unsigned char firstHead = packet[0];
        unsigned char secondHead = packet[1];
        if( !((firstHead == WRJ_Packet_FirstHead) && (secondHead == WRJ_Packet_SecondHead)) ){
            return NULL;
        }

        //获得校验和，并与该包的最后两个字节进行比较
        unsigned char *buf = (unsigned char *)packet.data();
        unsigned short CRC_16_Encode =  CRC16Encode(buf,(unsigned short)(packetSize-2));

        //因为是小端接收，所以如下(******** 若未来协议增加校验位，则需要修改 ***********)
        unsigned char firstCheckBit = (unsigned char)buf[packetSize-2];
        unsigned short secondCheckBit = (unsigned short)buf[packetSize-1];
        unsigned short CheckSum = (secondCheckBit << 8) + firstCheckBit;
        //校验不对，不再处理该包
        if(CRC_16_Encode != CheckSum){
            return NULL;
        }

        //取出包的数据帧（包的前3后2都不要）
        int dataFrameLength = packetSize - Length_ExceptDataFrame;
        QByteArray dataFrame;
        dataFrame.append((const char*)(buf + packetHeadLength),dataFrameLength);

        // 因为反正在该函数中调用处理函数，最后需要处理函数返回，该函数的栈才会被清调，所以直接传地址过去，将最后的处理结果加入位置队列即可
        // 直接使用函数调用，会使得该函数等待 processRecvData 函数的返回
        // 优化：
        //      1、考虑用信号发出 ？
        //      2、考虑处理函数放入线程，使用共享内存传递数据 ？
   //     WRJ_Analyze_DataFrame(&dataFrame);
        return dataFrame;
}

void WRJ_Module::WRJ_Analyze_DataFrame(QByteArray *dataFrame)
{
    int dataFrameLength = dataFrame->size();

    //判断是哪一种数据包
    //其实可以进行统一处理，但是若是纯位置数据包的话，不必寻找应答数据部分
    if(  ( dataFrameLength % positionPacketSize ) == 0 ){
        WRJ_Only_PositionPacket(dataFrame);
    }
    else if( ((dataFrameLength - responsePacketSize) % positionPacketSize) == 0 )
    {
        WRJ_Include_ResponsePacket(dataFrame);
    }
    else{
        qDebug()<<"receive one wrong packet!";

    }

    return ;

}

void WRJ_Module::WRJ_Only_PositionPacket(QByteArray *dataFrame)
{
    printf("*** start to parse AheadX space dataFrame\n ****");

    int dataFrameSize = dataFrame->size();
    int positionPacketNum = dataFrameSize / positionPacketSize;

    QDataStream dataFrameStream(dataFrame,QIODevice::ReadWrite);
    dataFrameStream.setByteOrder(QDataStream::LittleEndian);

    //作为从数据帧取出的每一个位置包的临时变量，一共21字节
    unsigned char DataID_Temp = 0;
    unsigned char DataLen_Temp = 0;
    unsigned char DevId_Temp = 0;
    int Lat_Temp = 0;
    int Lon_Temp = 0;
    int Alt_Temp = 0;
    short Euler_Temp[3] = {0};

    WRJ_POSITIONSTATE_STRU *WRJ_PositonState;

    int i=0;
    for(i=0;i<positionPacketNum && (!dataFrameStream.atEnd());i++) {

             WRJ_PositonState = (WRJ_POSITIONSTATE_STRU *)malloc(sizeof(WRJ_POSITIONSTATE_STRU));

             dataFrameStream >> DataID_Temp;
             dataFrameStream >> DataLen_Temp;

             //如果数据ID和数据长度不符合协议，不再对数据帧后续的字节处理
             if( (DataID_YaoCe != DataID_Temp) || ( DataLen_YaoCe != DataLen_Temp )  ){
                  WRJ_notHandleFollowContentFlag = true;
                  break;
             }

             //若位置队列已满，则清除一些
             if(lastElementIndex >= queueMaxIndex){
                 WRJ_PositionQueue_Full_PartClear();
             }

            dataFrameStream >> DevId_Temp;
            dataFrameStream >> Lat_Temp;
            dataFrameStream >> Lon_Temp;
            dataFrameStream >> Alt_Temp;
            for(int j=0;j<3;j++){
                dataFrameStream >> Euler_Temp[j];
            }

            //若有需要 -- 不必进行转换得到真实数据，而是直接转发出去给其他模块，设置控制开关并创建一个成员均为int类型的结构体，然后抛出去
            if(WRJ_PitchPositionStruct_Int){ //默认fasle
                //成员变量均为Int的结构体未定义
                continue;
            }

            WRJ_PositonState->id = WRJStationCtrlID;//DevId_Temp;shi改 需要确认

            //**************  幂的次数考虑用全局变量，以便协议改变 **************//
            WRJ_PositonState->Lat = (double)Lat_Temp/pow(10,7);
            WRJ_PositonState->Lon = (double)Lon_Temp/pow(10,7);
            WRJ_PositonState->Alt = (double)Alt_Temp/pow(10,2);

            for(int k=0;k<3;k++){
                WRJ_PositonState->Euler[k] = (double)Euler_Temp[k]/pow(10,1);
            }

            //若有必需要整个位置信息，可以设置控制开关抛出该结构体，然后抛出
            if(WRJ_PitchPositionStruct_Double){
                continue;
            }

            savePosition_deque->push_back(WRJ_PositonState);
            lastElementIndex++;


    }

    if( i == positionPacketNum ){
        return;
    }

    //把经过本次解析得到的位置清除
    qDebug()<<"clear positions getted during this time!";

    while(i--){
        free(savePosition_deque->at(lastElementIndex--));

        savePosition_deque->pop_back();
    }

}

void WRJ_Module::WRJ_Include_ResponsePacket(QByteArray *dataFrame)
{
    qDebug()<<" --- start to analayze Response packet ---";

    int dataFrameSize = dataFrame->size();
    //计算出该数据帧包含了几个包
    int packetNum = (dataFrameSize - responsePacketSize) / positionPacketSize + 1;

    QDataStream dataFrameStream(dataFrame,QIODevice::ReadWrite);
    dataFrameStream.setByteOrder(QDataStream::LittleEndian);


    //位置包数据格式： 0x02、0x13、数据（19字节）
    //应答包数据格式： 0xF0、0x01、数据（1字节）

    //临时变量---用来暂时存储流中的数据
    unsigned char DataID_Temp = 0;
    unsigned char DataLen_Temp = 0;

    //暂存位置包（遥测）数据
    unsigned char DevId_Temp = 0;
    int Lat_Temp = 0;
    int Lon_Temp = 0;
    int Alt_Temp = 0;
    short Euler_Temp[3] = {0};

    //暂存应答包数据
    unsigned char ResponseFlag = 0;

    WRJ_POSITIONSTATE_STRU *WRJ_PositonState;

    int i=0;
    for( i=0;i<packetNum && (!dataFrameStream.atEnd());i++){

        dataFrameStream >> DataID_Temp;
        dataFrameStream >> DataLen_Temp;

        //按照协议，位置包头为0x02,0x13;
        if( (DataID_Temp == DataID_YaoCe) && (DataLen_Temp == DataLen_YaoCe)){

            //若位置队列已满，则清除一些
            if(lastElementIndex >= queueMaxIndex){
                WRJ_PositionQueue_Full_PartClear();
            }

            WRJ_PositonState = (WRJ_POSITIONSTATE_STRU *)malloc(sizeof(WRJ_POSITIONSTATE_STRU));

            dataFrameStream >> DevId_Temp;
            dataFrameStream >> Lat_Temp;
            dataFrameStream >> Lon_Temp;
            dataFrameStream >> Alt_Temp;
            for(int j=0;j<3;j++){
                dataFrameStream >> Euler_Temp[j];
            }


            WRJ_PositonState->id = DevId_Temp;
            WRJ_PositonState->Lat = Lat_Temp/pow(10,7);
            WRJ_PositonState->Lon = Lon_Temp/pow(10,7);
            WRJ_PositonState->Alt = Alt_Temp/pow(10,2);

            for(int j=0;j<3;j++){
                WRJ_PositonState->Euler[j] = Euler_Temp[j]/pow(10,1);
            }



            savePosition_deque->push_back(WRJ_PositonState);

            lastElementIndex++;

            continue;
        }

        //应答包头为0xF0,0x01
        if( (DataID_Temp == DataID_CtrlAuthority_Response) && (DataLen_Temp == DataLen_CtrlAuthority_Response) ){

            dataFrameStream >> ResponseFlag;

            if(0 == ResponseFlag){
                qDebug()<<" WRJ Get_or_Release_ControlAuthority_Success";
                emit WRJ_Get_or_Release_ControlAuthority_Success();
                WRJ_Get_or_Release_ControlAuthority_Flag = true;
            }
            else{
                emit WRJ_Get_or_Release_ControlAuthority_Failure();
                WRJ_Get_or_Release_ControlAuthority_Flag = false;
            }
            continue;
        }

        //不属于以上的任何两种包，则对后续内容不做处理
        break;
    }

    //如果不相等，则必然是中途 遇到某个不符合数据协议的遥测数据，故之前存入的位置也考虑删除
    if( i == packetNum ){
        return;
    }

    //把经过本次解析得到的位置清除
    qDebug()<<"clear positions getted during this time!";

    while(i--){
        free(savePosition_deque->at(lastElementIndex--));

        savePosition_deque->pop_back();
    }
    qDebug()<<"finish clearing!";

}



//*****************************   从内部取数据 、封包 、发包   ********************************//

QByteArray WRJ_Module::WRJ_Produce_CtrlAuthorityPackt(unsigned char CtrlFlag)   //飞机设备ID，待留
{
    unsigned char dataFrameLen = 2 + DataLen_CtrlAuthority;
    //虽然只有一架无人机，但还是留个口子
    unsigned char DevId_Temp = DevId ;
    unsigned char CtrlFlag_Temp = CtrlFlag;

    QByteArray dataFrame(dataFrameLen,0);
    QDataStream dataFrameStream(&dataFrame,QIODevice::ReadWrite);
    dataFrameStream.setByteOrder(QDataStream::LittleEndian);
    dataFrameStream << DataID_CtrlAuthority;
    dataFrameStream << DataLen_CtrlAuthority;
    dataFrameStream << DevId_Temp;
    dataFrameStream << CtrlFlag_Temp;

    return WRJ_Produce_Packet(dataFrame,dataFrameLen);
}

QByteArray WRJ_Module::WRJ_Produce_TrackPackt(WayPoint_Struct *wayPoints,quint8 wayPointNum)
{

    QByteArray dataFrame;

    unsigned char DataID = DataID_Track;
//    WayPoint_Num = wayPointNum ;
    DataLen_Track = 2 + WayPoint_Size * wayPointNum;

    unsigned char DataLength = DataLen_Track;
    unsigned char DevId_Temp = DevId;

    QByteArray oneTrack(DataLength+2,0);
    QDataStream oneTrackStream(&oneTrack,QIODevice::ReadWrite);
    oneTrackStream.setByteOrder(QDataStream::LittleEndian);

    oneTrackStream << DataID;
    oneTrackStream << DataLength;
    oneTrackStream << DevId_Temp;
    oneTrackStream << wayPointNum;

    for(int i=0;i<wayPointNum;i++){
        oneTrackStream << (float)(wayPoints[i].Lat * pow(10,7)) ;
        oneTrackStream << (float)(wayPoints[i].Lon * pow(10,7)) ;
        oneTrackStream << (float)(wayPoints[i].Alt * pow(10,1)) ;
    }

    dataFrame.append(oneTrack);

    unsigned char dataFrameLen = (HeadLen_Track +  ( 2 + WayPoint_Size * wayPointNum) );

    return WRJ_Produce_Packet(dataFrame,dataFrameLen);
}

QByteArray WRJ_Module::WRJ_Produce_TrackPackt(double (*wayPoints)[3], quint8 wayPointNum)
{
    //WayPoints指向的每一个一维数组数据为：经度、纬度、高度；而按照协议先传纬度、经度、高度
    QByteArray dataFrame;
    unsigned char DataID = DataID_Track;
    // WayPoint_Num = wayPointNum ;
    DataLen_Track = 2 + WayPoint_Size * wayPointNum;

    unsigned char DataLength = DataLen_Track;
    unsigned char DevId_Temp = DevId;

    QByteArray oneTrack(DataLength+2,0);
    QDataStream oneTrackStream(&oneTrack,QIODevice::ReadWrite);
    oneTrackStream.setByteOrder(QDataStream::LittleEndian);

    oneTrackStream << DataID;
    oneTrackStream << DataLength;
    oneTrackStream << DevId_Temp;
    oneTrackStream << wayPointNum;

    for(int i=0;i<wayPointNum;i++){
        oneTrackStream << (int)( *(*(wayPoints+i)+1) * pow(10,7) ) ; //纬度
        oneTrackStream << (int)( *(*(wayPoints+i)+0) * pow(10,7) ) ; //经度
        oneTrackStream << (int)( *(*(wayPoints+i)+2) * pow(10,1)) ; //高度
    }

    dataFrame.append(oneTrack);

    unsigned char dataFrameLen = (HeadLen_Track +  ( 2 + WayPoint_Size*wayPointNum) );

    return WRJ_Produce_Packet(dataFrame,dataFrameLen);

}

QByteArray WRJ_Module::WRJ_Produce_Packet(QByteArray &dataFrame,unsigned char dataFrameLen)
{
    //生成数据包 --- 帧头（1、2） + 长度 + 数据帧 + 校验位（1、2）
    unsigned char firstHead = WRJ_Packet_FirstHead;
    unsigned char secondHead = WRJ_Packet_SecondHead;

    //这个 2 是校验位的长度
    unsigned char Length_of_DataFrame_and_CheckBits = dataFrameLen + 2 ;

    QByteArray packet(3,0);

    //加包头
    QDataStream packetStream(&packet,QIODevice::ReadWrite);
    packetStream.setByteOrder(QDataStream::LittleEndian);
    packetStream << firstHead;
    packetStream << secondHead;
    packetStream << Length_of_DataFrame_and_CheckBits;

    //加数据帧
    packet.append(dataFrame);   //替换成函数 ？？


    //加校验位（此段待优化）
    QByteArray checkBits(2,0);
    QDataStream checkBitsStream(&checkBits,QIODevice::ReadWrite);
    checkBitsStream.setByteOrder(QDataStream::LittleEndian);
    unsigned char *buf = (unsigned char*)packet.data();
    unsigned short checkCode = CRC16Encode(buf,(unsigned short)(Length_of_DataFrame_and_CheckBits+1));
    checkBitsStream << checkCode;

    packet.append(checkBits);

    //返回一个完整包
    return packet;
}

int WRJ_Module::WRJ_send_TrackDataPacket(WayPoint_Struct *wayPoints,quint8 wayPointNum)
{ 
   if(!WRJ_Get_Ctrl_Flag) return -1;

   QByteArray TrackDataPacket(WRJ_Produce_TrackPackt(wayPoints,wayPointNum));
   qint64 sendSize =  UnicastUdpSocket->writeDatagram(TrackDataPacket,DestinationIP,DestinationPort);
   qDebug()<<"send Track Data size is :"<<sendSize;

   return sendSize;
}

int WRJ_Module::WRJ_send_TrackDataPacket(double (*wayPoints)[3], quint8 wayPointNum)
{
    if(!WRJ_Get_Ctrl_Flag) return -1;

    QByteArray TrackDataPacket(WRJ_Produce_TrackPackt(wayPoints,wayPointNum));
    qint64 sendSize =  UnicastUdpSocket->writeDatagram(TrackDataPacket,DestinationIP,DestinationPort);
    qDebug()<<"send Track Data size is :"<<sendSize;

    return sendSize;
}

void WRJ_Module::WRJ_send_CtrlAuthorityPacket(unsigned char flag )
{
    QByteArray CtrlAuthorityPacket(WRJ_Produce_CtrlAuthorityPackt(flag));
    qint64 sendSize =  UnicastUdpSocket->writeDatagram(CtrlAuthorityPacket,DestinationIP,DestinationPort);
    qDebug()<<"send CtrlAuthority Data size is :"<<sendSize;
}


void WRJ_Module::WRJ_RequestGet_CtrlAuthority()
{
    if(WRJ_Get_or_Release_ControlAuthority_Flag){   //申请控制成功，标志置false，断开连接，并关闭定时器
        WRJ_Get_or_Release_ControlAuthority_Flag = false;
        timer_requestCtrl.stop();
        WRJ_Get_Ctrl_Flag=true;
        disconnect(&timer_requestCtrl,&QTimer::timeout,this,&WRJ_Module::WRJ_RequestGet_CtrlAuthority);
        return ;
    }
    else
    {
        WRJ_CtrlAuthorityTime++;
        if(WRJ_CtrlAuthorityTime>20)
        {
            timer_requestCtrl.stop();
            WRJ_CtrlAuthorityTime=0;
            WRJ_Get_Ctrl_Flag=false;
            qDebug()<<"request ctrlAuthority failed.";
            emit WRJ_Get_or_Release_ControlAuthority_Failure();
            disconnect(&timer_requestCtrl,&QTimer::timeout,this,&WRJ_Module::WRJ_RequestGet_CtrlAuthority);
            return ;
        }
        WRJ_send_CtrlAuthorityPacket(WRJ_Request_Ctrl);
    }
}

void WRJ_Module::WRJ_RequestRelease_CtrlAuthority()
{
    if(WRJ_Get_or_Release_ControlAuthority_Flag){   //申请释放成功，标志置false，断开连接，并关闭定时器
        WRJ_Get_or_Release_ControlAuthority_Flag = false;
        timer_requestCtrl.stop();
        WRJ_Get_Ctrl_Flag =true;
        disconnect(&timer_requestRelease,&QTimer::timeout,this,&WRJ_Module::WRJ_RequestRelease_CtrlAuthority);
        return ;
    }
    else
    {
        WRJ_CtrlAuthorityTime++;
        if(WRJ_CtrlAuthorityTime>20)
        {
            timer_requestCtrl.stop();
            WRJ_CtrlAuthorityTime=0;            
            WRJ_Get_Ctrl_Flag=false;
            qDebug()<<"request ctrlAuthority failed.";
            emit WRJ_Get_or_Release_ControlAuthority_Failure();
            disconnect(&timer_requestCtrl,&QTimer::timeout,this,&WRJ_Module::WRJ_RequestGet_CtrlAuthority);
            return ;
        }
        WRJ_send_CtrlAuthorityPacket(WRJ_Request_Release);
    }
}

bool WRJ_Module::WRJ_get_CtrlAuthority()
{
    //测试：1、初始化时已获得控制权，外部一直请求获取控制权，直接返回
    //     2、外部释放了一次控制权，想要再次获得申请（此时为异步，外部想要立即发数据可能会失败）

    if(WRJ_Get_Ctrl_Flag){
        return true;
    }
    if(!timer_requestCtrl.isActive()){
        connect(&timer_requestCtrl,&QTimer::timeout,this,&WRJ_Module::WRJ_RequestGet_CtrlAuthority);
        WRJ_CtrlAuthorityTime=0;
        timer_requestCtrl.start(200);
    }
    return true ;
}

bool WRJ_Module::WRJ_release_CtrlAuthority()
{
    //测试：1、没有获得控制权，却释放，直接返回
    //     2、拥有控制权，然后释放（异步处理）

    if(!WRJ_Get_Ctrl_Flag){
        return true;
    }
    if(!timer_requestRelease.isActive())
    {
        connect(&timer_requestRelease,&QTimer::timeout,this,&WRJ_Module::WRJ_RequestRelease_CtrlAuthority);
        WRJ_CtrlAuthorityTime=0;
        timer_requestRelease.start(200);
    }

    return true;
}

//*****************************  位置队列存储  *********************************************//
void WRJ_Module::WRJ_PositionQueue_Init()
{
    //待进一步做一个循环队列
    savePosition_deque = new deque<WRJ_POSITIONSTATE_STRU *>;
}

void WRJ_Module::WRJ_PositionQueue_AllClear()
{
    //释放队列元素指向 堆内存储位置数据 的内存
    WRJ_PositionQueue_Positions_AllClear();
    //清空队列
    savePosition_deque->clear();
    //最后一个元素下标置-1
    lastElementIndex= -1;
}

void WRJ_Module::WRJ_PositionQueue_Positions_AllClear()
{

    if(savePosition_deque->empty()){
        return;
    }

    auto first = savePosition_deque->begin();

    auto end = savePosition_deque->end();

    while(first < end){
        free(*first);
        ++first;
    }
}

void WRJ_Module::WRJ_PositionQueue_Full_PartClear()
{
    qDebug()<<"--- Queue is full ! Clear part position!";

    deque<WRJ_POSITIONSTATE_STRU *>::iterator one_iterator = savePosition_deque->begin();

    //暂时先清除首部 clearNum 个，考虑之后相间删除
    for(quint8 i=0; i<clearNum ;i++){
        free(savePosition_deque->at(0));
        savePosition_deque->pop_front();
        lastElementIndex--;
    }

}

WRJ_POSITIONSTATE_STRU* WRJ_Module::WRJ_TakePosition()
{
    if(savePosition_deque->empty()){
        return Q_NULLPTR;
    }

    mutex_queue.lock();
    WRJ_POSITIONSTATE_STRU *temp = savePosition_deque->at(0);
    savePosition_deque->pop_front();
    lastElementIndex--;
    mutex_queue.unlock();

    return temp;
}


