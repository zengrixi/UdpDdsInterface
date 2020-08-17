
#include "tcpsocket.h"
#include <QtMath>
#include <QDateTime>
#include <QDataStream>
#define DATAUPDATEFRES 100
#define QT_READBUFSIZE 100000
TCPSocket::TCPSocket(QString ipAddress, int port, bool is_client, int type): QObject(nullptr), _nTestType(type),
_bClient(is_client)
{
    _bNetworkStatus = false;
    _pServerIP = NULL;
    _pTcpSocket = NULL;
    switch (_nTestType)
    {
        case TESTTYPE::sendSARUAV:
        case TESTTYPE::sendSARTarget:
        case TESTTYPE::sendRadarUAV:
        case TESTTYPE::sendRadarTarget:
        case TESTTYPE::sendFighter:
        case TESTTYPE::sendFighterTarget:
            _sSendTargetIP = ipAddress;
            _nSendPort = port;
            break;

        default:
            _sRecTargetIP = ipAddress;
            _nRecPort = port;
            break;
    }

    connect(&_setTimer, SIGNAL(timeout()), this, SLOT(sendTimerSlot()));
}

TCPSocket::~TCPSocket()
{
    if (_pTcpSocket != NULL)
    {
        delete _pTcpSocket;
        _pTcpSocket = NULL;
    }
    if (_pServerIP != NULL)
    {
        delete _pServerIP;
        _pServerIP = NULL;
    }
}

bool TCPSocket::ini()
{
    _bNetworkStatus = false;
    _bUavSimStep = 0;
    _fIniLat = 0;
    _fIniLon = 0;
    _fIniAlt = 0;
    _fIniRole = 0;
    _fIniYAngle = 0;
    _IniZAngle = 0;
    _bUavDir = false;
    if (_bClient)
    {
        //假设对方为服务器
        switch (_nTestType)
        {
            //发送型测试
            case TESTTYPE::sendSARUAV:
            case TESTTYPE::sendSARTarget:
            case TESTTYPE::sendRadarUAV:
            case TESTTYPE::sendRadarTarget:
            case TESTTYPE::sendFighter:
            case TESTTYPE::sendFighterTarget:
                if (_pTcpSocket != NULL)
                {
                    delete _pTcpSocket;
                    _pTcpSocket = NULL;
                }
                _pTcpSocket = new QTcpSocket();
                _pTcpSocket->setReadBufferSize(QT_READBUFSIZE);
                if (_pServerIP != NULL)
                {
                    delete _pServerIP;
                    _pServerIP = NULL;
                }
                _pServerIP = new QHostAddress();
                _pServerIP->setAddress(_sSendTargetIP);
                connect(_pTcpSocket, SIGNAL(connected()), this, SLOT(slotConnected()));
                connect(_pTcpSocket, SIGNAL(disconnected()), this, SLOT(slotDisconnected()));
                connect(_pTcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(DestroyConnection()));
                _pTcpSocket->connectToHost(*_pServerIP, _nSendPort);
                _setTimer.start();
                break;

            default: //接收型测试
                if (_bClient)
                {
                    _pServerIP = new QHostAddress();
                    _pServerIP->setAddress(_sRecTargetIP);
                    connect(_pTcpSocket, SIGNAL(connected()), this, SLOT(slotConnected()));
                    connect(_pTcpSocket, SIGNAL(readyRead()), this, SLOT(dataReceived()), Qt::DirectConnection);
                    connect(_pTcpSocket, SIGNAL(disconnected()), this, SLOT(slotDisconnected()));
                    connect(_pTcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this,
                        SLOT(DestroyConnection()));
                    _pTcpSocket->connectToHost(*_pServerIP, _nRecPort);
                }
                _setTimer.stop();
                break;
        }
    }
    else
    {
        if (_pTcpServer != NULL)
        {
            delete _pTcpServer;
            _pTcpServer = NULL;
        }
        _pTcpServer = new QTcpServer();
        _pTcpServer->listen(QHostAddress::Any, _nSendPort);
        connect(_pTcpServer, SIGNAL(newConnection()), this, SLOT(slotNewConnected()));
        connect(&_timeoutTimer, SIGNAL(timeout()), this, SLOT(clientTimerSlot())); ///<客户端连接超时
        _timeoutTimer.start(5000);
    }
    return true;
}

void TCPSocket::clientTimerSlot()
{
    if (_bNetworkStatus)
    {
        _timeoutTimer.stop();
    }
    else
    {
        _pTcpServer->close();
    }
}

void TCPSocket::stop()
{
    _setTimer.stop();
    _timeoutTimer.stop();
    if (_bNetworkStatus)
    {
        if (_bClient)
        {
            _pTcpSocket->disconnectFromHost();
        }
        else
        {
            _pTcpSocket->disconnected();
            _pTcpServer->close();
        }
    }

    //qDebug() << "right";
    if (_pTcpSocket != NULL)
    {
        delete _pTcpSocket;
        _pTcpSocket = NULL;
    }
    if (_pServerIP != NULL)
    {
        delete _pServerIP;
        _pServerIP = NULL;
    }
    if (_pTcpServer != NULL)
    {
        delete _pTcpServer;
        _pTcpServer = NULL;
    }
    _bNetworkStatus = false;
}

void TCPSocket::DestroyConnection()
{
    if (_pTcpSocket != NULL && _bNetworkStatus)
    {
        _readBuf.clear();
    }
}

// TCP连接成功
void TCPSocket::slotNewConnected()
{
    QTcpSocket * tcpSocket0 = _pTcpServer->nextPendingConnection();

    if (tcpSocket0->peerAddress().toString() == _nSendPort)
    {
        if (_pTcpSocket != NULL)
        {
            delete _pTcpSocket;
            _pTcpSocket = NULL;
        }
        _pTcpSocket = tcpSocket0;
        connect(_pTcpSocket, SIGNAL(disconnected()), this, SLOT(slotDisconnected()));
        connect(_pTcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(DestroyConnection()));
        _bNetworkStatus = true;
    }
    else return;

    switch (_nTestType)
    {
        //发送型测试
        case TESTTYPE::sendSARUAV:
        case TESTTYPE::sendSARTarget:
        case TESTTYPE::sendRadarUAV:
        case TESTTYPE::sendRadarTarget:
        case TESTTYPE::sendFighter:
        case TESTTYPE::sendFighterTarget:
            _setTimer.start(DATAUPDATEFRES);
            break;

        default:
            connect(_pTcpSocket, SIGNAL(readyRead()), this, SLOT(dataReceived()), Qt::DirectConnection);
            break;
    }
}

/// TCP连接成功
void TCPSocket::slotConnected()
{
    _bNetworkStatus = true;
    if (_pTcpSocket != NULL && _bNetworkStatus)
    {
        _setTimer.start(DATAUPDATEFRES);
    }
}

/// TCP连接成功后,发送数据请求
void TCPSocket::slotDisconnected()
{
    _setTimer.stop();
    if (_bClient)
    {
        _pTcpSocket->disconnectFromHost();
    }
    else _pTcpSocket->disconnected();
    _bNetworkStatus = false;
}

QByteArray TCPSocket::makeData()
{
    int tempData = 0;
    int count = 2, i = 0, j = 0;
    QByteArray sendData, tem;
    SARTARGETINFO targetTrack;
    QDateTime datetime = QDateTime::currentDateTime(); //获取系统现在的时间
    QTime time = datetime.time();

    //根据发送对象生成发送报文
    switch (_nTestType)
    {
        case sendSARUAV: //发送飞机位置
            if (_bUavSimStep > 100 || _bUavSimStep < 1)
            {
                _bUavDir = !_bUavDir;
            }
            if (_bUavDir)
            {
                _bUavSimStep ++;
            }
            else _bUavSimStep --;
            tempData = 0x3652A11F;
            tem.resize(4);
            memcpy(tem.data(), &tempData, 4);
            sendData.append(tem);
            tempData = 44;
            tem.clear();
            memcpy(tem.data(), &tempData, 4);
            sendData.append(tem);
            sendData.append((char) 0x0D);
            sendData.append((char) 0x01);
            tem.clear();
            memcpy(tem.data(), &_fIniLon, 4);
            sendData.append(tem);
            memcpy(tem.data(), &_fIniLat, 4);
            sendData.append(tem);
            memcpy(tem.data(), &_fIniAlt, 4);
            sendData.append(tem);
            memcpy(tem.data(), &_fIniRole, 4);
            sendData.append(tem);
            memcpy(tem.data(), &_fIniYAngle, 4);
            sendData.append(tem);
            memcpy(tem.data(), &_IniZAngle, 4);
            sendData.append(tem);
            sendData.append((char) 0);
            sendData.append((char) 0);
            sendData.append((char) 0);
            sendData.append((char) 0);
            tempData = 0xabcdef89;
            tem.clear();
            memcpy(tem.data(), &tempData, 4);
            sendData.append(tem);
            break;

        case sendSARTarget: //发送航迹
            tempData = 0x3652A11F;
            memcpy(tem.data(), &tempData, 4);
            sendData.append(tem);
            tempData = count * 128 + 492;
            tem.clear();
            memcpy(tem.data(), &tempData, 4);
            sendData.append(tem);
            sendData.append((char) 0x07);
            sendData.append((char) 0x06);
            tem.clear();
            for (i = 0; i < 10; i++)
            {
                sendData.append((char) 0);
            }

            //定义航迹结构体
            for (i = 0; i < count; i++)
            {
                targetTrack.day = datetime.date().day();
                targetTrack.year = datetime.date().year();
                targetTrack.month = datetime.date().month();
                targetTrack.time = (time.hour() * 3600 + time.minute() * 60 + time.second()) * 1000 + time.msec();
                targetTrack.targetHeight = 0;
                targetTrack.targetLontitude = 0;
                targetTrack.targetLatitude = 0;
                targetTrack.targetPitchAngle = 0;
                targetTrack.azimuth = 0;
                for (j = 0; j < 33; j++)
                {
                    targetTrack.backup[j] = 0;
                }
                targetTrack.distance = 0;
                targetTrack.patchID = 5000 + i;
                targetTrack.patchState = 0;
                targetTrack.speed = 0;
                targetTrack.uavEastSpeed = 0;
                targetTrack.uavHeight = 0;
                targetTrack.downHeight = targetTrack.uavHeight;
                targetTrack.uavLatitude = 0;
                targetTrack.uavLontitude = 0;
                targetTrack.uavNorthSpeed = 0;
                targetTrack.uavPhaseAngle = 0;
                targetTrack.uavPitchAngle = 0;
                targetTrack.uavRoleAngle = 0;
                targetTrack.uavSpeed = 0;
                targetTrack.uavUpSpeed = 0;
                tem.clear();
                memcpy(tem.data(), &targetTrack, 128);
                sendData.append(tem);
            }
            for (i = 0; i < 472; i++)
            {
                sendData.append((char) 0);
            }
            tempData = 0x55aa55aa;
            tem.clear();
            memcpy(tem.data(), &tempData, 4);
            sendData.append(tem);
            tempData = 0xabcdef89;
            tem.clear();
            memcpy(tem.data(), &tempData, 4);
            sendData.append(tem);
            break;

        case 2: //
            break;
    }

    return sendData;
}

void TCPSocket::sendTimerSlot()
{
    //根据ip和端口按照配置文件读取发送协议
    QByteArray sendData = makeData();

    _pTcpSocket->write(sendData);
    _pTcpSocket->waitForBytesWritten();
}

void TCPSocket::dataReceived()
{
    _bNetworkStatus = true;
    if (_pTcpSocket != NULL && _bNetworkStatus)
    {
        qint64 bufsize = 1000;

        if (_pTcpSocket->bytesAvailable() > bufsize) //接收缓存区数据大于200以上后
        {
            if (_pTcpSocket->peerAddress().toString() == _sRecTargetIP)
            {
                QByteArray datagram = _pTcpSocket->readAll();

                _readBuf.append(datagram);
                datagram.clear();
                while (_readBuf.size() > 0)
                {
                    QDataStream msg1(_readBuf);

                    msg1.setFloatingPointPrecision(QDataStream::SinglePrecision);
                    msg1.setByteOrder(QDataStream::LittleEndian);
                    uchar head[2];

                    msg1 >> head[0] >> head[1];
                    if (head[0] == 0xAA && head[1] == 0x55)
                    {
                        QByteArray msg;
                        quint32 length = 0;

                        msg.resize(length);
                        msg1.readRawData(msg.data(), length);
                        msg1 >> head[0] >> head[1];
                        QDataStream ds(msg);

                        ds.setFloatingPointPrecision(QDataStream::SinglePrecision);
                        ds.setByteOrder(QDataStream::LittleEndian);
                        QByteArray temp;

                        /// 判断是否满足帧尾条件
                        if (head[0] == 0x55 && head[1] == 0xAA)
                        {
                        }
                        _readBuf = _readBuf.mid(length + 8);
                        msg.clear();
                        temp.clear();
                    }
                    else _readBuf = _readBuf.mid(1);
                }
            }
        }
    }
}
