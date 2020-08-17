
#include "udphelper.h"
#include <QNetworkInterface>

#define _FEIKONG_ 1
#define _ZDJ_ 1

UdpHelper::UdpHelper(): QThread()
{
    _bInit = false;
    _sAddr = "127.0.0.1";
    _nPort = 9999;
    _pUdpSocket = Q_NULLPTR;
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

void UdpHelper::udpInit(QString addr, quint16 port)
{
    _sAddr = addr;
    _nPort = port;
    _pUdpSocket = new QUdpSocket(this);
    if (!_pUdpSocket->bind(QHostAddress::AnyIPv4, _nPort, QUdpSocket::ShareAddress))
    {
        _pUdpSocket->deleteLater();
        qDebug() << "绑定失败！";
        return;
    }

    _bInit = true;
}

void UdpHelper::joinMulticastGroup()
{
    if ( !_bInit )
    {
        qDebug() << "UdpHelper未初始化！";
        return;
    }
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
    if (!_pUdpSocket->joinMulticastGroup(QHostAddress(_sAddr), netInterface))
    {
        _pUdpSocket->deleteLater();
        qDebug() << "加入组播失败！";
        return;
    }
    
    connect(_pUdpSocket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
}

void UdpHelper::run()
{
    if (!_bInit)
    {
        qDebug() << "UDP收发未初始化！" << _sAddr << " " << _nPort;
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

        ///@todo 进行数据发送实现
//		_pUdpSocket->writeDatagram(QByteArray("sss", 3), QHostAddress(_sAddr), _nPort);
    }
}

void UdpHelper::onReadyRead()
{
    while (_pUdpSocket->hasPendingDatagrams())
    {
        QByteArray datagram;

        datagram.resize(_pUdpSocket->pendingDatagramSize());
        _pUdpSocket->readDatagram(datagram.data(), datagram.size());
        if ( datagram.isEmpty() )
        {
            continue;
        }

        char *dt = datagram.data();

        ///@todo 根据组播地址和端口判断数据来源和数据类型并处理
#if _FEIKONG_
        // 1，将接收到的数据转换成对应发出的数据
        if ("224.9.9.9" == _sAddr || 9000 == _nPort)
        {
            WRJ_POSITIONSTATE_STRU wrjPosState;

            // 进行数据大小判断，是否是有效数据
            if ( datagram.size() < sizeof(WRJ_POSITIONSTATE_STRU) )
            {
                return;
            }
            memcpy(&wrjPosState, dt, sizeof(WRJ_POSITIONSTATE_STRU));
            
            // 2，将要发出的数据类型和数据指针发出
            DataBase::instance().processRecvData(Sock_MsgType_WRJ_Entity_Pos, &wrjPosState);
        }
#endif /* #if _FEIKONG_ */

#if _ZDJ_
        if ( "233.9.9.9" == _sAddr || 6000 == _nPort )
        {
            ZDJ_POSITIONSTATE_LIST_STRU zdjPosStateList;

            MEM_CPY(&zdjPosStateList.packHead, dt, sizeof(zdjPosStateList.packHead));
            MEM_CPY(&zdjPosStateList.msgType, dt, sizeof(zdjPosStateList.msgType));
            MEM_CPY(&zdjPosStateList.packSize, dt, sizeof(zdjPosStateList.packSize));
            MEM_CPY(&zdjPosStateList.timestamp, dt, sizeof(zdjPosStateList.timestamp));
            MEM_CPY(&zdjPosStateList.count, dt, sizeof(zdjPosStateList.count));
            zdjPosStateList.pEntity = Q_NULLPTR;
            int nCount = zdjPosStateList.count;
            if ( nCount > 0 )
            {
                zdjPosStateList.pEntity = 
                (ZDJ_POSITIONSTATE_STRU *)malloc(sizeof(ZDJ_POSITIONSTATE_STRU)*nCount);
                MEM_CPY(zdjPosStateList.pEntity, dt, sizeof(ZDJ_POSITIONSTATE_STRU)*nCount);
            }
            MEM_CPY(&zdjPosStateList.packTail, dt, sizeof(zdjPosStateList.packTail));

            DataBase::instance().processRecvData(Sock_MsgType_ZDJ_Entity_Pos_List, &zdjPosStateList);
            // 在处理消息后直接释放内存
            if ( Q_NULLPTR != zdjPosStateList.pEntity )
            {
                free(zdjPosStateList.pEntity);
            }
        }
#endif

        dt = Q_NULLPTR;
    }
}

