#include "udphelper.h"

#include <QNetworkInterface>
#include <QDataStream>
#include <QDateTime>

#define _FEIKONG_ 1
#define _ZDJ_ 1

bool g_zdj_init = false;// 因为战斗机Matlab原因必须先收到对方发过来的消息才能进行通讯,所以用个bool判断

UdpHelper::UdpHelper(): QThread()
{
    _bInit = false;
    _hostAddr.setAddress("127.0.0.1");
    _nPort = 9999;
    _pUdpSocket = Q_NULLPTR;
    _eMsgType = NoneMsgType;
    _eCommObject = None;
}

UdpHelper::~UdpHelper()
{
    stop();
    wait();
    quit();
}

void UdpHelper::stop()
{
    _stopMutex.lock();
    _bStop = true;
    _stopMutex.unlock();
}

/*****************************************************************************
 * 函 数 名  : UdpHelper.udpInit
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月19日
 * 函数功能  : 创建并初始化一个UDP Socket。
 * 输入参数  : QString addr  ip地址
               quint16 port  端口号
               int mode      通讯模式(单播、广播、组播)
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void UdpHelper::Init(QString addr, quint16 port, int mode)
{
    _hostAddr.setAddress(addr);
    _nPort = port;
    _pUdpSocket = new QUdpSocket(this);
    if (!_pUdpSocket->bind(QHostAddress::AnyIPv4, _nPort, QUdpSocket::ShareAddress))
    {
        _bInit = false;
        _pUdpSocket->deleteLater();
        qDebug() << "绑定失败！";
        return;
    }
    _bInit = true;
    
    // 通讯模式选择
    switch ( mode )
    {
        case Unicast :
        {
            break;
        }
        case Broadcast :
        {
            broadcast();
            break;
        }
        case Multicast :
        {
            joinMulticastGroup();
            break;
        }
        default:
            break;
    }

    // 通讯目标判断,用于判断后续协议解析
    if ( "224.9.9.9" == _hostAddr.toString() || 9000 == _nPort )
    {
        _eCommObject = AHeadX_Space;
    }
    else if ( "192.168.1.100" == _hostAddr.toString() || 6000 == _nPort )
    {
        _eMsgType = Send_MsgType_ZDJ_InitPosition; // 先给战斗机发送初始位置信息
        _eCommObject = ZDJ_Cluster;
    }
    // 接收数据绑定
    connect(_pUdpSocket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
}

void UdpHelper::broadcast()
{
    
}

void UdpHelper::joinMulticastGroup()
{
    _pUdpSocket->setSocketOption(QAbstractSocket::MulticastLoopbackOption, 0);
    
    // 遍历所有网卡，选取其中可以加入组播的网卡
    QList<QNetworkInterface> listInterface = QNetworkInterface::allInterfaces();
    QNetworkInterface netInterface;

    for (int i = 0; i < listInterface.size(); i++)
    {
        netInterface = listInterface[i];
        QNetworkInterface::InterfaceFlags flags = netInterface.flags();
        if ((flags & QNetworkInterface::IsRunning) && (flags & QNetworkInterface::CanMulticast))
        {
            break;
        }
    }
    _pUdpSocket->setMulticastInterface(netInterface);
    if (!_pUdpSocket->joinMulticastGroup(_hostAddr, netInterface))
    {
        _bInit = false;
        _pUdpSocket->deleteLater();
        qDebug() << "加入组播失败！";
        return;
    }
}

void UdpHelper::run()
{
    if (!_bInit)
    {
        qDebug() << "UDP收发未初始化！" << _hostAddr.toString() << " " << _nPort;
        return;
    }
    _bStop = false;

    // 进入发送消息循环
    for (; ;)
    {
        // 进程退出条件
        _stopMutex.lock();
        if (_bStop)
        {
            _stopMutex.unlock();
            break;
        }
        _stopMutex.unlock();

        // 进行数据发送实现
        switch ( _eMsgType )
        {
            case NoneMsgType :
            {
                
                break;
            }
            case Send_MsgType_Target_Position :
            {
                sendTargetPositionState();
                break;
            }
            case Send_MsgType_ZDJ_InitPosition :
            {
                if ( !g_zdj_init )
                {
                    send_ZDJ_InitPosition();
                    _eMsgType = Send_MsgType_Target_Position;
                }
                break;
            }
            default:
                break;
        }
    }
}

/*****************************************************************************
 * 函 数 名  : UdpHelper.sendTargetPositionState
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月22日
 * 函数功能  : 从实体库中提取目标实时位置后打包发送
 * 输入参数  : 无
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void UdpHelper::sendTargetPositionState()
{
    int i, count, size;
    QByteArray ba;
    QDataStream in(&ba, QIODevice::WriteOnly);// 往QByteArray中流入数据

#if 0 // 确定是否需要设置大小端
    in.setFloatingPointPrecision(QDataStream::SinglePrecision);
    in.setByteOrder(QDataStream::LittleEndian);
#endif

    QList<int> dbTargetID = DataBase::instance().getTargetIDList();
    count = dbTargetID.size();
    QList<LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *> lEntityReportList;
    
    // 从已保存的实体列表中提取出目标信息
    for (i = 0; i < count; i++)
    {
        int nPlatID = dbTargetID[i];

        LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *pEntityReport =
        DataBase::instance().getEntityReport(nPlatID);

        if ( Q_NULLPTR == pEntityReport )
        {
            continue;
        }

        lEntityReportList.append(pEntityReport);
    }
    // 得到目标总数
    count = lEntityReportList.count();

    // 计算包长度
    size = sizeof(PACKAGE_HEAD_STRU) + sizeof(UINT8) +
    sizeof(TARGET_POSITION_STATE_STRU) * count + sizeof(UINT32);
    
    in << 0xEEEEFFFF
       << 0xAA
       << size
       << count
       << QDateTime::currentDateTime().toTime_t();// 流入当前时间戳
    
    // 将提取出来的战斗机信息添加到包体中
    for (i = 0; i < count; i++)
    {
        LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *pEntityReport = lEntityReportList[i];
		in << (UINT32) pEntityReport->platId;
		in << pEntityReport->geodeticLocationLat;
		in << pEntityReport->geodeticLocationLon;
		in << (double)0.01; // 噪声强度
    }

    // 添加包尾信息
    in << 0x0A0D0A0D;

    _pUdpSocket->writeDatagram(ba, _hostAddr, _nPort);
}

void UdpHelper::send_ZDJ_InitPosition()
{
    int i, size, count;
    double dTemp;
    QByteArray ba;
    QDataStream in(&ba, QIODevice::WriteOnly);

#if 0 // 确定是否需要设置大小端
    in.setFloatingPointPrecision(QDataStream::SinglePrecision);
    in.setByteOrder(QDataStream::LittleEndian);
#endif

    count = ZDJ_COUNT;

    size = sizeof(PACKAGE_HEAD_STRU) + 1 + 
           (count*sizeof(ZDJ_POSITION_STATE_STRU)) + 4;

    in << 0xEEEEFFFF
       << 0xAA
       << size
       << count;

    /* comment by 曾日希, 2020-08-27, Mantis号:s, 原因:目前初始位置为测试值. */
    dTemp = 0;
    for (i = 0; i < count; i++)
    {
        in << i
		   << (double)2.21732
		   << (double)0.438575
           << dTemp
           << dTemp
	       << dTemp; // 总速度
    }

    in << 0x0A0D0A0D;

    _pUdpSocket->writeDatagram(ba, _hostAddr, _nPort);
}

/*****************************************************************************
 * 函 数 名  : UdpHelper.parsePackage
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月26日
 * 函数功能  : 解包流程
 * 输入参数  : QByteArray byteArray  接收到的数据流
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void UdpHelper::parsePackage(QByteArray ba)
{
    int size, result;
    UINT32 tail;
    PACKAGE_HEAD_STRU packageHead;

    // 提取出包尾信息并截断
    size = sizeof(tail);
    QByteArray byteTail = ba.right(size);
    memcpy(&tail, byteTail.data(), size);
    ba.truncate(ba.size() - size);

    QDataStream out(ba);
    
#if 0 // 确定是否需要设置大小端
    out.setFloatingPointPrecision(QDataStream::SinglePrecision);
    out.setByteOrder(QDataStream::LittleEndian);
#endif

    RESOLVER_STATE_ENUM eResolverState = PackageHead;

    while ( out.atEnd() )
    {
        switch ( eResolverState )
        {
            // 解析包头,过滤掉不需要的数据
            case PackageHead :
            {
                // 不同的包头代表不同的单位
                out >> packageHead.packHead;
                if ( packageHead.packHead != 0xEEEEFFFF )
                {
                    // 可能是空消息,用于获取对方端口
                    g_zdj_init = true;
                    return;
                }
                
                out >> packageHead.msgType;
                if ( (packageHead.msgType != 0x01) &&
                     (packageHead.msgType != 0x02) )
                {
                    return;
                }
                     
                out >> packageHead.packSize;
                if ( 0x0 == packageHead.packSize )
                {
                    return;
                }
                
                eResolverState = PackageTail;
                break;
            }
            // 根据包头的消息类型解析包体
            case PackageBody :
            {
                result = parsePackageBody(packageHead.msgType, out);
                if ( -1 == result )
                {
                    // 包处理错误
                    return;
                }

                eResolverState = End;
                break;
            }
            // 处理了包头消息后先验证包尾
            case PackageTail :
            {
                out >> tail;
                if ( tail != 0x0A0D0A0D )
                {
                    qDebug()<<"文件:"<<__FILE__<<"行:"  <<__LINE__<<"包尾验证错误.";
                    return;
                }
                eResolverState = PackageBody;
                break;
            }
            default:
            {
                qDebug()<<"文件:"<<__FILE__<<"行:"  <<__LINE__<<"解包错误.";                
                return;
            }
        }
    }   
}

/*****************************************************************************
 * 函 数 名  : UdpHelper.parsePackageBody
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月26日
 * 函数功能  : 根据数据类型对数据流进行解析
 * 输入参数  : UINT32 type              数据类型
               QDataStream &dataStream  数据流
 * 输出参数  : 无
 * 返 回 值  : int
*****************************************************************************/
int UdpHelper::parsePackageBody(UINT32 type, QDataStream &out)
{
    int i, count;
    
    switch ( type )
    {
        case Recv_MsgType_ZDJ_Entity_Pos_List :
        {
            ZDJ_POSITION_STATE_LIST_STRU instance;

            out >> instance.timestamp;
            out >> count;
            instance.count = count;

            instance.pPositionState = Q_NULLPTR;
            if ( count > 0 )
            {
                instance.pPositionState = 
                (ZDJ_POSITION_STATE_STRU *)malloc(sizeof(ZDJ_POSITION_STATE_STRU)*count);
            }

            for (i = 0; i < count; i++)
            {
                out >> instance.pPositionState[i].id;
                out >> instance.pPositionState[i].pos.lon_f;
                out >> instance.pPositionState[i].pos.lat_f;
                out >> instance.pPositionState[i].velocity.vel_x_f;
                out >> instance.pPositionState[i].velocity.vel_y_f;
                out >> instance.pPositionState[i].course_f;
            }

            DataBase::instance().processRecvData(type, &instance);
            // 在处理消息后直接释放内存
            if ( Q_NULLPTR != instance.pPositionState )
            {
                free(instance.pPositionState);
            }
            break;
        }
        case Recv_MsgType_ZDJ_TrackReport :
        {
            ZDJ_TARGET_TRACK_LIST_STRU instance;

            out >> instance.timestamp;
            out >> instance.targetID;
            out >> count;
            instance.count = count;

            instance.pTrackReport = Q_NULLPTR;
            if ( count > 0 )
            {
                instance.pTrackReport = 
                (ZDJ_TARGET_POS_STRU *)malloc(sizeof(ZDJ_TARGET_POS_STRU)*count);
            }

            for (i = 0; i < count; i++)
            {
                out >> instance.pTrackReport[i].trackNum;
                out >> instance.pTrackReport[i].pos.lon_f;
                out >> instance.pTrackReport[i].pos.lat_f;
                out >> instance.pTrackReport[i].err;
            }

            DataBase::instance().processRecvData(type, &instance);
            if ( Q_NULLPTR != instance.pTrackReport )
            {
                free(instance.pTrackReport);
            }
            break;
        }
        default:
        {
            qDebug()<<"文件:"<<__FILE__<<"行:"  << __LINE__<<"未知消息.";
            break;
        }
    }
}

void UdpHelper::onReadyRead()
{
    while (_pUdpSocket->hasPendingDatagrams())
    {
        QByteArray ba;

        ba.resize(_pUdpSocket->pendingDatagramSize());
        _pUdpSocket->readDatagram(ba.data(), ba.size(), &_hostAddr, &_nPort);
        if ( ba.isEmpty() )
        {
            continue;
        }

        switch ( _eCommObject )
        {
            case AHeadX_Space :
            {
                parseAHeadXSpace(ba);
                break;
            }
            case ZDJ_Cluster :
            {
                parsePackage(ba);
                break;
            }
            default:
                break;
        }
    }
}

/*****************************************************************************
 * 函 数 名  : UdpHelper.parseAHeadXSpace
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月26日
 * 函数功能  : 地面站和指控接口协议解析
 * 输入参数  : QByteArray byteArray  接收到的数据包
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void UdpHelper::parseAHeadXSpace(QByteArray byteArray)
{
    INT8 chSize;
    int i, nCount;
    
    QDataStream dataStream(byteArray);
    dataStream.setFloatingPointPrecision(QDataStream::SinglePrecision);
    dataStream.setByteOrder(QDataStream::LittleEndian);
    WRJ_POSITION_STATE_STRU wrj_positionState;
    RESOLVER_STATE_ENUM eResolverState = PackageHead;

    while ( !dataStream.atEnd() )
    {
        switch ( eResolverState )
        {
            case PackageHead :
            {
                dataStream >> wrj_positionState.frameHead.first;
                dataStream >> wrj_positionState.frameHead.second;
                if ( (0xAA == wrj_positionState.frameHead.first) && 
                     (0x55 == wrj_positionState.frameHead.second) )
                {
                    eResolverState = PackageBody;
                    break;
                }
                // 帧头不对直接丢弃
                return;
            }
            case PackageBody :
            {
                dataStream >> chSize;
                if ( (chSize-2) % 21 )
                {
                    // 中间数据帧如果不是21的整数倍则代表不是遥测数据, 直接丢弃
                    return;
                }
                wrj_positionState.packgeLen = chSize;
                nCount = (chSize - 2) / 21;
                wrj_positionState.pDataFrame = 
                (DATA_FRAME_STRU *)malloc(sizeof(DATA_FRAME_STRU)*nCount);
                for (i = 0; i < nCount; i++)
                {
                    dataStream >> wrj_positionState.pDataFrame[i].dataID;
                    dataStream >> wrj_positionState.pDataFrame[i].dataLength;

                    // 如果不是遥测数据则前面已经丢弃，但是在此处还是做一下判断
                    if ( 0x02 == wrj_positionState.pDataFrame[i].dataID &&
                         0x13 == wrj_positionState.pDataFrame[i].dataLength)
                    {
                        // 飞机位置信息
                        dataStream >> wrj_positionState.pDataFrame[i].id;
                        dataStream >> wrj_positionState.pDataFrame[i].pos.lat;
                        dataStream >> wrj_positionState.pDataFrame[i].pos.lon;
                        dataStream >> wrj_positionState.pDataFrame[i].pos.alt;
                        dataStream >> wrj_positionState.pDataFrame[i].attitude.pitch;
                        dataStream >> wrj_positionState.pDataFrame[i].attitude.roll;
                        dataStream >> wrj_positionState.pDataFrame[i].attitude.yaw;
                    }
                }
                
                eResolverState = PackageTail;
                break;
            }
            case PackageTail :
            {
                /* comment by 曾日希, 2020-08-25, Mantis号:s, 原因:数据校验. */
                dataStream >> wrj_positionState.checkBit.first;
                dataStream >> wrj_positionState.checkBit.second;
                eResolverState = End;
                break;
            }
            default:
            /* comment by 曾日希, 2020-08-26, Mantis号:s, 原因:错误处理. */
                return;
        }
    }

    // 将接收到的数据加入消息队列后释放内存
    DataBase::instance().processRecvData(Recv_MsgType_WRJ_Entity_Pos, &wrj_positionState);
    free(wrj_positionState.pDataFrame);
}

