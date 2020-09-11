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
#define ZDJ_PACK_HEAD                                   (uint32_t) 0xEEEEFFFF
#define XTTC_PACK_HEAD                                  (uint32_t) 0xAAAAFFFF
#define ZDJ_PACK_TAIL                                   (uint32_t) 0x0A0D0A0D
#define ENTITY_PACK_HEAD                                (uint32_t) 0x0000FFFF
#define ENTITY_PACK_TAIL                                (uint32_t) 0xEEEE0000


// 战斗机消息类型
#define ZDJ_MSG_TYPE_REAL_TIME_LOCATION_SELF            (uint32_t) 0x00000001
#define ZDJ_MSG_TYPE_REAL_TIME_LOCATION_TARGET          (uint32_t) 0x00000002

// 协同探测消息类型
#define COR_MSG_TYPE_REAL_TIME_LOCATION_ENTITY          (uint32_t) 0x00000001
#define COR_MSG_TYPE_REAL_TIME_LOCATION_TRACK           (uint32_t) 0x00000002

typedef void (*fcDataTypeProcess_t)(uint32_t, QDataStream &);


typedef struct
{
    uint32_t type;     
    CommandObject commobj;
}pack_type_t;


typedef struct
{
    CommandObject commobj;                  // 连接对象(不同单位)
    uint32_t msgType;                       // 不同连接对象接收消息类型
    MsgTypeAll allType;                     // 用于消息处理的消息类型标识
    fcDataTypeProcess_t processData;        // 消息处理函数
}msg_process_t;


class UdpHelper : public QThread
{
    Q_OBJECT

public:
    // UDP通讯模式(单播、广播、组播)
    typedef enum
    {
        UNICAST,
        BROADCAST,
        MULTICAST
    }CommMode;

    UdpHelper();
    ~UdpHelper();
    void stop();
    void Init(QString addr, uint16_t port, int mode = UNICAST);
private:
    void broadcast();
    void joinMulticastGroup();
    int sendFlightPositionState();
    int sendTargetPositionState();
    int sendFlightControlState(bool is_controlled);
    int sendEntityPositionState();
protected:
    virtual void run() Q_DECL_OVERRIDE;
    void sendMsg();
    void sendMsg2ZDJ();
    void parsePackage(QByteArray byteArray);
    int parseTail(u_char *p);
    int parseHead(QDataStream &out, package_head_t *pHead);
    int parseCommObject(package_head_t *pHead);
private slots:
    void onReadyRead();
private:
    QUdpSocket *_pUdpSocket;
    QMutex _stopMutex;
    bool _bStop;
    bool _bInit;
    QHostAddress _hostAddr;
    quint16 _nPort;
    CommandObject _eCommObject;
};

#endif // UDPHELPER_H
