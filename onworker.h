///////////////////////////////////////////////////////////////////////////////
//
// 版权声明： Copyright (c) 2020 曾日希. All rights reserved.
// 文件名称： onworker.h
// 文件摘要： 工作逻辑实现
// 创建作者： 曾日希
// 创建时间： 2020-8-17
//
///////////////////////////////////////////////////////////////////////////////

#ifndef ONWORKER_H
#define ONWORKER_H

#include <QThread>

#include "savelog.h"
#include "singleton.h"
#include "udphelper.h"

class OnWorker : public QThread
{
    Q_OBJECT
    SINGLETON(OnWorker)
public:
    explicit OnWorker(QObject *parent = nullptr);
    ~OnWorker();

private:
    UdpHelper *_pWRJ_Udp;
    UdpHelper *_pZDJ_Udp;
    UdpHelper *_pCOR_Udp;

    QString _ZDJ_IP,_WRJ_IP,_COR_IP;
    uint16_t _ZDJ_PORT,_WRJ_PORT,_COR_PORT;
    void readConfig();
protected:
    virtual void run() Q_DECL_OVERRIDE;
public slots:
    void onStartUdp();
    void onConnectSql();
    void onStartWRJRecv();
};

#endif // ONWORKER_H
