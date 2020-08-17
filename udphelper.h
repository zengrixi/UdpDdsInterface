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
    UdpHelper();
    ~UdpHelper();
    void stop();
    void udpInit(QString addr, quint16 port);
    void joinMulticastGroup();
protected:
    virtual void run() Q_DECL_OVERRIDE;
private slots:
    void onReadyRead();
private:
    QUdpSocket *_pUdpSocket;
    QMutex _stopMutex;
    bool _bStop;
    bool _bInit;
    QString _sAddr;
    quint16 _nPort;
};

#endif // UDPHELPER_H
