///////////////////////////////////////////////////////////////////////////////
//
// 版权声明： Copyright (c) 2020 曾日希. All rights reserved.
// 文件名称： ddshelper.h
// 文件摘要： DDS功能
// 创建作者： 曾日希
// 创建时间： 2020-8-17
//
///////////////////////////////////////////////////////////////////////////////

#ifndef DDSHELPER_H
#define DDSHELPER_H

#include <QThread>

#include "mdsrecvmsg.h"
#include "mdssendmsg.h"
#include "commondef.h"

class DdsHelper : public QThread
{
    Q_OBJECT
    SINGLETON(DdsHelper)
public:
    void stop();

protected:
    virtual void run() Q_DECL_OVERRIDE;
    void processMsg(MY_MSG_STRU stMyMsg);

private:
    DdsHelper();
    ~DdsHelper();

    QMutex _stopMutex;
    bool _bStop;
};

#endif // DDSHELPER_H
