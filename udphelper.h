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


// 包体类型
#define ZDJ_PACK_HEAD                                   (UINT32) 0xEEEEFFFF
#define XTTC_PACK_HEAD                                  (UINT32) 0xAAAAFFFF
#define ZDJ_PACK_TAIL                                   (UINT32) 0x0A0D0A0D


// 战斗机消息类型
#define ZDJ_MSG_TYPE_REAL_TIME_LOCATION_SELF            (UINT32) 0x00000001
#define ZDJ_MSG_TYPE_REAL_TIME_LOCATION_TARGET          (UINT32) 0x00000002


typedef void (*fcDataTypeProcess_t)(UINT32, QDataStream &);


typedef struct _PACK_TYPE
{
    UINT32 type;     
    COMMAND_OBJECT_ENUM commobj;
}PACK_TYPE_STRU;


typedef struct _MSG_PROCESS
{
    COMMAND_OBJECT_ENUM commobj;            // 连接对象(不同单位)
    UINT32 msgType;                         // 不同连接对象接收消息类型
    MSG_TYPE_ALL_ENUM allType;              // 用于消息处理的消息类型标识
    fcDataTypeProcess_t processData;        // 消息处理函数
}MSG_PROCESS_STRU;


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
    
    // 协议解析状态机
    typedef enum _RESOLVER_STATE
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
    int sendTargetPositionState();
    int send_ZDJ_InitPosition();
protected:
    virtual void run() Q_DECL_OVERRIDE;
    void parsePackage(QByteArray byteArray);
    int parseCommObject(PACKAGE_HEAD_STRU *pHead);
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
    COMMAND_OBJECT_ENUM _eCommObject;
};

#endif // UDPHELPER_H
