#include "udphelper.h"

#include <QNetworkInterface>
#include <QDataStream>
#include <QDateTime>


const static PACK_TYPE_STRU s_packType[] = 
{
    {ZDJ_PACK_HEAD, ZDJ_Object},
    {XTTC_PACK_HEAD, XTTC_Object}
};


// 初始化连接对象
const static MSG_PROCESS_STRU s_MsgProcess[] =
{
    {
        ZDJ_Object, 
        ZDJ_MSG_TYPE_REAL_TIME_LOCATION_SELF, 
        Recv_MsgType_ZDJ_Entity_Pos, 
        Recv_ZDJ_RealTimeLocation
    },
    {
        ZDJ_Object, 
        ZDJ_MSG_TYPE_REAL_TIME_LOCATION_TARGET, 
        Recv_MsgType_ZDJ_TrackReport, 
        Recv_ZDJ_RealTimeLocationTarget
    }
};


bool g_zdj_init = true;


UdpHelper::UdpHelper(): QThread()
    , _eCommObject(None_Object)
    , _bStop(true)
    , _bInit(false)
    , _nPort(9999)
    , _pUdpSocket(Q_NULLPTR)
    , _eMsgType(None_MsgType)
{  
    _hostAddr.setAddress("127.0.0.1"); 
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

    if ( "192.168.1.100" == _hostAddr.toString() && 8085 == _nPort )
    {
        _eMsgType = Send_MsgType_ZDJ_InitPosition; // 先给战斗机发送初始位置信息
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
        qDebug()<<"文件:"<<__FILE__<<"行:"  <<__LINE__<<"加入组播失败.";
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

        sendMsg();
    }
}


void UdpHelper::sendMsg()
{
    switch ( _eCommObject )
    {
        case WRJ_Object :
        {
            
            break;
        }
        case ZDJ_Object :
        {
            sendMsg2ZDJ();
            break;
        }
        default:
    }
}


void UdpHelper::sendMsg2ZDJ()
{
    if ( g_zdj_init )
    {
        if ( send_ZDJ_InitPosition() == 0 )
        {
            g_zdj_init = false;
        }
    }

    sendTargetPositionState();
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
int UdpHelper::sendTargetPositionState()
{
    int i, size, id;
    u_char count;
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *pEntityReport;
    QByteArray ba;
    QDataStream in(&ba, QIODevice::WriteOnly);// 往QByteArray中流入数据

#if 0 // 确定是否需要设置大小端
    in.setFloatingPointPrecision(QDataStream::SinglePrecision);
    in.setByteOrder(QDataStream::LittleEndian);
#endif

    count = ZDJ_TARGET_COUNT;

    // 计算包长度
    size = sizeof(PACKAGE_HEAD_STRU) + sizeof(UINT8) +
    sizeof(TARGET_POSITION_STATE_STRU) * count + sizeof(UINT32);
    
    in << ZDJ_PACK_HEAD
       << 0xAA
       << size
       << QDateTime::currentDateTime().toTime_t()// 流入当前时间戳
       << count;
    
    // 将提取出来的战斗机信息添加到包体中
    for (i = 0; i < count; i++)
    {
        id = g_ZDJ_TargetPlatID[i];
        
        pEntityReport = DataBase::instance().getEntityReport(id);

        if ( Q_NULLPTR == pEntityReport )
        {
            count--;
            continue;
        }
        
		in << (UINT32) pEntityReport->platId
		   << pEntityReport->geodeticLocationLat
		   << pEntityReport->geodeticLocationLon
		   << (double) 0.01; // 噪声强度
    }

    if ( 0 == count )
    {
        return -1;
    }

    // 添加包尾信息
    in << ZDJ_PACK_TAIL;

    _pUdpSocket->writeDatagram(ba, _hostAddr, _nPort);

    return 0;
}


int UdpHelper::send_ZDJ_InitPosition()
{
    int i, size, id;
    u_char count;
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *pEntityReport;
    
    QByteArray ba;
    QDataStream in(&ba, QIODevice::WriteOnly);

#if 0 // 确定是否需要设置大小端
    in.setFloatingPointPrecision(QDataStream::SinglePrecision);
    in.setByteOrder(QDataStream::LittleEndian);
#endif

    count = ZDJ_COUNT;

    size = sizeof(PACKAGE_HEAD_STRU) + 4 + 1 + 
           (count*sizeof(ZDJ_POSITION_STATE_STRU)) + 4;

    in << ZDJ_PACK_HEAD
       << 0xF1
       << size
       << count;

    for (i = 0; i < count; i++)
    {
        id = g_ZDJ_nPlatID[i];

        pEntityReport = DataBase::instance().getEntityReport(id);

        if ( Q_NULLPTR == pEntityReport )
        {
            return -1;
        }
        
        in << (UINT32) pEntityReport->platId
		   << pEntityReport->geodeticLocationLon
		   << pEntityReport->geodeticLocationLat
           << pEntityReport->topographicVelocityX
           << pEntityReport->topographicVelocityY
	       << pEntityReport->topographicVelocityZ // 总速度
	       << (double) 0.0;// 航向信息
    }

    in << ZDJ_PACK_TAIL;

    _pUdpSocket->writeDatagram(ba, _hostAddr, _nPort);

    return 0;
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
    int i, n, tailSize, packSize, result;
    UINT32 type;
    
    PACKAGE_HEAD_STRU packageHead;
    MEMZERO(&packageHead, sizeof(packageHead));

    // 包尾验证
    packSize = ba.size();
    tailSize = sizeof(UINT32);
    
    QByteArray byteTail = ba.right(tailSize);

    result = parseTail((u_char *) byteTail.data());
    if ( -1 == result )
    {
        qDebug()<<"文件:"<<__FILE__<<"行:"  <<__LINE__<<"包尾验证错误.";
        return;
    }

    ba.truncate(packSize - tailSize);
    
    if ( 1 == result )
    {
        out.setFloatingPointPrecision(QDataStream::SinglePrecision);
        out.setByteOrder(QDataStream::LittleEndian);
    }

    QDataStream out(ba);

    // 解析包头
    result = parseHead(out, &packageHead);
    if ( !result )
    {
        qDebug()<<"文件:"<<__FILE__<<"行:"  <<__LINE__<<"包头单位类型解析错误.";
        return;
    }
    
    if ( packSize != packageHead.packSize )
    {
        qDebug()<<"文件:"<<__FILE__<<"行:"  <<__LINE__<<"包大小验证错误.";
        return;
    }

    while ( !out.atEnd() )
    {
        n = sizeof(s_MsgProcess) / sizeof(s_MsgProcess[0]);
        for (i = 0; i < n; i++)
        {
            if ( s_MsgProcess[i].commobj == _eCommObject &&
                 s_MsgProcess[i].msgType == type)
            {
                s_MsgProcess[i].processData(s_MsgProcess[i].allType, out);
                
                break;
            }
        }
    }   
}


/*****************************************************************************
 * 函 数 名  : UdpHelper.parseTail
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月31日
 * 函数功能  : 验证包尾信息是否正确并判断大小端
 * 输入参数  : u_char *p  四个字节包尾信息
 * 输出参数  : 无
 * 返 回 值  : int 0 默认 1 大端 -1 错误
*****************************************************************************/
int UdpHelper::parseTail(u_char *p)
{
    UINT32 tail;

    memcpy(&tail, p, sizeof(tail));

    if ( tail == (UINT32) 0x0A0D0A0D )
    {
        return 0;
    }

    if ( htonl(tail) == (UINT32) 0x0A0D0A0D )
    {
        return 1;
    }

    return -1;
}


/*****************************************************************************
 * 函 数 名  : UdpHelper.parseCommObject
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年9月1日
 * 函数功能  : 处理包头信息
 * 输入参数  : PACKAGE_HEAD_STRU *pHead  包头
 * 输出参数  : 无
 * 返 回 值  : int
*****************************************************************************/
int UdpHelper::parseHead(QDataStream &out, PACKAGE_HEAD_STRU *pHead)
{
    int i, n;

    out >> pHead->packHead;

    // 判断单位
    n = sizeof(s_packType) / sizeof(s_packType[0]);
    for (i = 0; i < n; i++)
    {
        if ( s_packType[i].type == pHead->packHead )
        {
            _eCommObject = s_packType[i].commobj;

            out >> pHead->msgType;
            out >> pHead->packSize;
            
            return 0;
        } 
    }

    return -1;
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

        parsePackage(ba);
    }
}

