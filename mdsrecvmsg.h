///////////////////////////////////////////////////////////////////////////////
//
// 版权声明： Copyright (c) 2020 曾日希. All rights reserved.
// 文件名称： mdsrecvmsg.h
// 文件摘要： DDS接收功能实现
// 创建作者： 曾日希
// 创建时间： 2020-8-17
//
///////////////////////////////////////////////////////////////////////////////

#ifndef MDSRECVMSG_H
#define MDSRECVMSG_H

#include <QThread>
#include <QMutex>

#include "MDS/AbstractComponent.h"
#include "singleton.h"
#include "database.h"

using namespace MDS;

// 创建绑定某一消息结构体的自定义接收监听类
// 参数1为创建的监听类类名
// 参数2为消息结构体名
CustomLis_Create(EntityListener, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST);

class MdsRecvMsg : public QThread, public AbstractComponent
{
    Q_OBJECT
    SINGLETON(MdsRecvMsg)
public:
    void stop();

protected:
    virtual void run() Q_DECL_OVERRIDE;

private:
    MdsRecvMsg();
    ~MdsRecvMsg();

    QMutex _stopMutex;

    bool _bStop;
};

#endif // MDSRECVMSG_H
