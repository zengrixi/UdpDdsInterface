///////////////////////////////////////////////////////////////////////////////
//
// 版权声明： Copyright (c) 2020 曾日希. All rights reserved.
// 文件名称： udphelper.h
// 文件摘要： udp收发功能实现
// 创建作者： 曾日希
// 创建时间： 2020-8-17
//
///////////////////////////////////////////////////////////////////////////////

#ifndef UDPHELPER_H
#define UDPHELPER_H

#include <QThread>
#include <QMutex>
#include <QUdpSocket>

#include "database.h"

class UdpHelper : public QThread
{
    Q_OBJECT

public:
    // UDP通讯模式(单播、广播、组播)
    typedef enum COMM_MODE
    {
        Unicast,
        Broadcast,
        Multicast
    }COMM_MODE_ENUM;
    
    // UDP连接对象(根据不同的IP/端口判断)
    typedef enum UDP_COMMUNICATION_OBJECT
    {
        None,
        AHeadX_Space,// 飞控软件
        ZDJ_Cluster// 战斗机集群 
    }UDP_COMMUNICATION_OBJECT_ENUM;
    
    // 协议解析状态机
    typedef enum RESOLVER_STATE
    {
        PackageHead,
        PackageBody,
        PackageTail,
        End
    }RESOLVER_STATE_ENUM;

    UdpHelper();
    ~UdpHelper();
    void stop();
    void Init(QString addr, quint16 port, int mode = Unicast);
private:
    void broadcast();
    void joinMulticastGroup();
    void sendTargetPositionState();
    void send_ZDJ_InitPosition();
protected:
    virtual void run() Q_DECL_OVERRIDE;
    void parsePackage(QByteArray byteArray);
    int parsePackageBody(UINT32 type, QDataStream &dataStream);
    void parseAHeadXSpace(QByteArray byteArray);
private slots:
    void onReadyRead();
private:
    QUdpSocket *_pUdpSocket;
    QMutex _stopMutex;
    bool _bStop;
    bool _bInit;
    QHostAddress _hostAddr;
    quint16 _nPort;
    SOCK_SEND_MSGTYPE_ENUM _eMsgType;
    UDP_COMMUNICATION_OBJECT_ENUM _eCommObject;
};

#endif // UDPHELPER_H
