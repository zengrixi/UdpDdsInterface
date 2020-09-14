#include "udphelper.h"

#include <QNetworkInterface>
#include <QDataStream>
#include <QDateTime>


// 包头信息类型初始化
const static pack_type_t s_packType[] = 
{
    {ZDJ_PACK_HEAD, ZDJ_OBJECT},
    {XTTC_PACK_HEAD, XTTC_OBJECT},
    {XK_PACK_HEAD, XK_OBJECT}
};


// 初始化连接对象
const static msg_process_t s_MsgProcess[] =
{
    {
        ZDJ_OBJECT, 
        ZDJ_MSG_TYPE_REAL_TIME_LOCATION_SELF, 
        RECV_MSGTYPE_ZDJ_ENTITY_POS, 
        Recv_ZDJ_RealTimeLocation
    },
    {
        ZDJ_OBJECT, 
        ZDJ_MSG_TYPE_REAL_TIME_LOCATION_TARGET, 
        RECV_MSGTYPE_ZDJ_TRACK_REPORT, 
        Recv_ZDJ_RealTimeLocationTarget
    },
    {
        XTTC_OBJECT,
        COR_MSG_TYPE_REAL_TIME_LOCATION_TRACK,
        RECV_MSGTYPE_COR_TRACK_REPORT,
        Recv_COR_TrackReport
    },
    {
        XK_OBJECT,
        XK_MSG_TYPE_CONTROL,
        RECV_MSGTYPE_XK_WRJ_CONTROL,
        Recv_XK_WRJ_Control
    },
    {
        XK_OBJECT,
        XK_MSG_TYPE_ROUTE,
        RECV_MSGTYPE_XK_WRJ_ROUTE,
        Recv_XK_WRJ_Route
    }
};


bool g_zdj_init = true;


UdpHelper::UdpHelper(): QThread()
    , _eCommObject(None_OBJECT)
    , _bStop(true)
    , _bInit(false)
    , _nPort(9999)
    , _pUdpSocket(Q_NULLPTR)
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
void UdpHelper::Init(QString addr, uint16_t port, int mode)
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
        case UNICAST :
        {
            break;
        }
        case BROADCAST :
        {
            broadcast();
            break;
        }
        case MULTICAST :
        {
            joinMulticastGroup();
            break;
        }
        default:
            break;
    }

    // 接收数据绑定
    connect(_pUdpSocket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
}


void UdpHelper::broadcast()
{
//    foreach (QNetworkInterface interface, QNetworkInterface::allInterfaces())
//    {
//        if ( interface.flags() & QNetworkInterface::CanBroadcast )
//        {
//            foreach (QNetworkAddressEntry entry, interface.addressEntries())
//            {
//                if ( !entry.broadcast().isNull() )
//                {
//                    writeDatagram();
//                }
//            }
//        }
//    }
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
        if ( (flags & QNetworkInterface::IsRunning) &&
             (flags & QNetworkInterface::CanMulticast) )
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
        case WRJ_OBJECT :
        {
            
            break;
        }
        case ZDJ_OBJECT :
        {
            sendMsg2ZDJ();
            break;
        }
        case XTTC_OBJECT :
            sendEntityPositionState();
            break;
    }
}


void UdpHelper::sendMsg2ZDJ()
{
    int result;
    
    if ( g_zdj_init )
    {
        if ( sendFlightPositionState() == 0 )
        {
            g_zdj_init = false;
        }
    }

    result = sendTargetPositionState();
    if ( -1 == result )
    {
        qDebug()<<"文件:"<<__FILE__<<"行:"  <<__LINE__<<"没有探测到目标信息.";
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

    count = ARRAY_SIZE(g_ZDJ_TargetPlatID);

    // 计算包长度
    size = sizeof(package_head_t) + sizeof(uint8_t) +
    sizeof(target_position_state_list_t) * count + sizeof(uint32_t);

    in << ZDJ_PACK_HEAD
       << (uint32_t) 0xAA
       << size
       << QDateTime::currentDateTime().toTime_t()// 流入当前时间戳
       << count;

    // 将提取出来的战斗机信息添加到包体中
    for (i = 0; i < count; i++)
    {
        id = g_ZDJ_TargetPlatID[i];

        pEntityReport = DataBase::instance().getEntityReport(id);

        if ( !pEntityReport )
        {
            count--;
            continue;
        }

        in << (uint32_t) pEntityReport->platId
           << pEntityReport->geodeticLocationLat
           << pEntityReport->geodeticLocationLon
           << (double) 0.01; // 噪声强度
    }

    if ( !count )
    {
        return -1;
    }

    // 添加包尾信息
    in << ZDJ_PACK_TAIL;

    _pUdpSocket->writeDatagram(ba, _hostAddr, _nPort);

    return 0;
}

/*****************************************************************************
 * 函 数 名  : UdpHelper.sendFighterPositionState
 * 负 责 人  : 曾日希 施晓红修改
 * 创建日期  : 2020年9月7日
 * 函数功能  : 从实体库中提取战斗机实时位置后打包发送
 * 输入参数  : 无
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
int UdpHelper::sendFlightPositionState()
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

    count = ARRAY_SIZE(g_ZDJ_nPlatID);

    // 计算包长度
    size = sizeof(package_head_t) + sizeof(uint8_t) +
    sizeof(zdj_position_state_t) * count + sizeof(uint32_t);

    in << ZDJ_PACK_HEAD
       << (uint32_t) 0xAA
       << size
       << QDateTime::currentDateTime().toTime_t()// 流入当前时间戳
       << count;

    // 将提取出来的战斗机信息添加到包体中
    for (i = 0; i < count; i++)
    {
        id = g_ZDJ_TargetPlatID[i];

        pEntityReport = DataBase::instance().getEntityReport(id);

        if ( !pEntityReport )
        {
            count--;
            continue;
        }

        in << (uint32_t) pEntityReport->platId
           << pEntityReport->geodeticLocationLat
           << pEntityReport->geodeticLocationLon
           << pEntityReport->topographicVelocityX
           << pEntityReport->topographicVelocityY; // 噪声强度
    }

    if ( !count )
    {
        return -1;
    }

    // 添加包尾信息
    in << ZDJ_PACK_TAIL;

    _pUdpSocket->writeDatagram(ba, _hostAddr, _nPort);

    return 0;
}

/*****************************************************************************
 * 函 数 名  : UdpHelper.sendTargetPositionState
 * 负 责 人  : 曾日希 施晓红修改
 * 创建日期  : 2020年9月7日
 * 函数功能  : 向战斗机发送控制权信息
 * 输入参数  : 无
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
int UdpHelper::sendFlightControlState(bool is_controlled)
{
    uint32_t size;
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *pEntityReport;
    QByteArray ba;
    QDataStream in(&ba, QIODevice::WriteOnly);// 往QByteArray中流入数据

#if 0 // 确定是否需要设置大小端
    in.setFloatingPointPrecision(QDataStream::SinglePrecision);
    in.setByteOrder(QDataStream::LittleEndian);
#endif

    // 计算包长度
    size = sizeof(package_head_t) + sizeof(uint8_t) +
    sizeof(uint8_t) + sizeof(uint32_t);

    in << ZDJ_PACK_HEAD
       << (uint32_t) 0xAA
       << size
       << QDateTime::currentDateTime().toTime_t()// 流入当前时间戳
       << (uint8_t)is_controlled;

    // 添加包尾信息
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
    uint32_t type;
    
    package_head_t packageHead;
    MEMZERO(&packageHead, sizeof(packageHead));

    // 包尾验证
    packSize = ba.size();
    tailSize = sizeof(uint32_t);
    
    QByteArray byteTail = ba.right(tailSize);

    result = parseTail((u_char *) byteTail.data());
    if ( -1 == result )
    {
        qDebug()<<"文件:"<<__FILE__<<"行:"  <<__LINE__<<"包尾验证错误.";
        return;
    }

    ba.truncate(packSize - tailSize);

    QDataStream out(ba);

    if ( 1 == result || 2 == result )
    {
        out.setFloatingPointPrecision(QDataStream::SinglePrecision);
        out.setByteOrder(QDataStream::LittleEndian);
    }

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

    type = packageHead.msgType;

    n = ARRAY_SIZE(s_MsgProcess);

    // 根据包头和包体的消息类型选择相应的处理函数
    for (i = 0; i < n; i++)
    {
        if ( s_MsgProcess[i].commobj == _eCommObject &&
             s_MsgProcess[i].msgType == type)
        {
            s_MsgProcess[i].processData(s_MsgProcess[i].allType, out);
            
            break;
        }
    }

    if ( !out.atEnd() )
    {
        qDebug()<<"文件:"<<__FILE__<<"行:"  <<__LINE__<<"消息流处理错误,存在未处理消息.";
        return;
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
    uint32_t tail;

    memcpy(&tail, p, sizeof(tail));

    if ( tail == ZDJ_PACK_TAIL )
    {
        return 0;
    }

    if ( htonl(tail) == ZDJ_PACK_TAIL )
    {
        return 1;
    }

    if ( htonl(tail) == ENTITY_PACK_TAIL )
    {
        return 2;
    }
    return -1;
}


/*****************************************************************************
 * 函 数 名  : UdpHelper.parseCommObject
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年9月1日
 * 函数功能  : 处理包头信息
 * 输入参数  : package_head_t *pHead  包头
 * 输出参数  : 无
 * 返 回 值  : int
*****************************************************************************/
int UdpHelper::parseHead(QDataStream &out, package_head_t *pHead)
{
    int i, n;

    out >> pHead->packHead;

    // 判断单位
    n = ARRAY_SIZE(s_packType);
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


/*****************************************************************************
 * 函 数 名  : UdpHelper.sendEntityPositionState
 * 负 责 人  : 曾日希 施晓红改
 * 创建日期  : 2020年9月7日
 * 函数功能  : 从实体库中提取所有实体信息后打包发送给协同探测端
 * 输入参数  : 无
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
int UdpHelper::sendEntityPositionState()
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

    count = ARRAY_SIZE(g_Entity_nPlatID);

    // 计算包长度
    size = sizeof(package_head_t) + sizeof(uint8_t) +
    sizeof(entity_state_t) * count + sizeof(uint32_t);

    uint32_t _timeStamp=0;
    QTime tt=QDateTime::currentDateTime().time();
    _timeStamp=(tt.hour()*3600+tt.minute()*60+tt.second())*1000+tt.msec();//按照情报方定义的当天经过的毫秒数

    in << ENTITY_PACK_HEAD
       << COR_MSG_TYPE_REAL_TIME_LOCATION_ENTITY
       << size
       << _timeStamp// 流入当前时间戳
       << count;

    // 将提取出来的战斗机信息添加到包体中
    for (i = 0; i < count; i++)
    {
        id = g_Entity_nPlatID[i];

        pEntityReport = DataBase::instance().getEntityReport(id);

        if ( !pEntityReport )
        {
            count--;
            continue;
        }

        in << (uint32_t) pEntityReport->platId;
        if(g_Enemy_Ship_nPlatID.contains(pEntityReport->platId))//空海标识
            in<<(uint32_t)1;
        else
            in<<(uint16_t)0;
        if(g_Enemy_Ship_nPlatID.contains(pEntityReport->platId)||g_Enemy_Fighter_nPlatID.contains(pEntityReport->platId))//敌我标识
            in<<(uint32_t)0;
        else
            in<<(uint16_t)1;
        in << pEntityReport->geodeticLocationLat
           << pEntityReport->geodeticLocationLon
           << pEntityReport->geodeticLocationAlt
           << pEntityReport->topographicPhi
           << pEntityReport->topographicPsi
           << pEntityReport->topographicTheta;
    }

    if ( !count )
    {
        return -1;
    }

    // 添加包尾信息
    in << ENTITY_PACK_TAIL;

    _pUdpSocket->writeDatagram(ba, _hostAddr, _nPort);

    return 0;
}
