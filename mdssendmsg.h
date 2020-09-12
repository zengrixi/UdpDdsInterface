///////////////////////////////////////////////////////////////////////////////
//
// 版权声明： Copyright (c) 2020 曾日希. All rights reserved.
// 文件名称： mdssendmsg.h
// 文件摘要： DDS发送功能实现
// 创建作者： 曾日希
// 创建时间： 2020-8-17
//
///////////////////////////////////////////////////////////////////////////////

#ifndef MDSSENDMSG_H
#define MDSSENDMSG_H

#include <QString>
#include <QMutex>

#include "MDS/AbstractComponent.h"
#include "singleton.h"
#include "commondef.h"

using namespace MDS;

class MdsSendMsg : public AbstractComponent
{
    SINGLETON(MdsSendMsg)

public:
    // 通信对象初始化
    void ddsInit();

    // 数据的发送处理
    // -----------------------------
    // 发送实体数据
    bool onSendEntityData(LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST *pInstance);

    // 发送指挥引导命令
    bool onSendCommand(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *pInstance);

    bool onSendMessageData(LHZS::SDI_TRACK_REPORT *pInstance);

    // -----------------------------

private:
    MdsSendMsg();
    ~MdsSendMsg();

    // 创建发布/订阅通信器类对象，将某一消息结构体与消息主题进行绑定
    // Ps: 通信器本身即支持发送，也支持接收，支持自发自收
    // -----------------------------
    // 无人机编队
    PSCommunicator<PSComm_StructName(LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST)> *_pUAV_Entity_StateList;

    // 指挥引导
    PSCommunicator<PSComm_StructName(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ)> *_pCommand_PathChangeReq;

    // 目标指示
    PSCommunicator<PSComm_StructName(LHZS::SDI_TRACK_REPORT)> *_pMessage_TrackReport;

    // -----------------------------

    QMutex _mutex;
};

#endif // MDSSENDMSG_H
