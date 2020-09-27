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

#include "udphelper.h"
#include "ddshelper.h"

class OnWorker : public QThread
{
    Q_OBJECT
        
public:
    explicit OnWorker(QObject *parent = nullptr);
    ~OnWorker();
    void stop();

    QMap<unsigned long,LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT> check(QStringList);
private:
    QThread *_dataWork;
    DataBase *_dataBase;
    UdpHelper *_pWRJ_Udp;
    UdpHelper *_pZDJ_Udp;
    UdpHelper *_pCOR_Udp;
    UdpHelper *_pXK_Udp;
    DdsHelper *_pDdsHelper;
    QMutex _stopMutex;
    bool _bStop;
protected:
    virtual void run() Q_DECL_OVERRIDE;
public slots:
    void onStartUdp();
    void onConnectSql();
    void onStartWRJRecv();
    void onStartWRJSend();
    void onReadFighterData();
    void onSendFighterRoute(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ * p);
};

#endif // ONWORKER_H
