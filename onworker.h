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

#include <QObject>

#include "savelog.h"
#include "singleton.h"
#include "udphelper.h"

class OnWorker : public QObject
{
    Q_OBJECT
    SINGLETON(OnWorker)
public:
    explicit OnWorker(QObject *parent = nullptr);
    ~OnWorker();

private:
    UdpHelper *_pWRJ_Udp;
    UdpHelper *_pZDJ_Udp;

signals:

public slots:
    void onStartUdp();
    void onConnectSql();
};

#endif // ONWORKER_H
