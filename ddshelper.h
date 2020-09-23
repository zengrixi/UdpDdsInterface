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

#include <QObject>

#include "MDS/AbstractComponent.h"
#include "commondef.h"

using namespace MDS;

// 创建绑定某一消息结构体的自定义接收监听类
// 参数1为创建的监听类类名
// 参数2为消息结构体名
CustomLis_Create(EntityListener, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST);
CustomLis_Create(TargetListener, LHZS::SDI_TRACK_REPORT);


class DdsHelper : public QObject, public AbstractComponent
{
    Q_OBJECT
public:
    DdsHelper(QObject *parent = Q_NULLPTR);
    ~DdsHelper();
    void processMsg(my_msg_t stMyMsg);
    bool onSendEntityData(LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST *pInstance);
    bool onSendCommand(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *pInstance);
    bool onSendMessageData(LHZS::SDI_TRACK_REPORT *pInstance);
protected:
    void initialization();
    int initEntityStateReportList();
    int initTrackReport();
    int initPathChange();
    int initUAVentityStateList();
private:
    // 创建发布/订阅通信器类对象，将某一消息结构体与消息主题进行绑定
    // Ps: 通信器本身即支持发送，也支持接收，支持自发自收
    PSCommunicator<PSComm_StructName(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST)> *_pEntityRecvCom;
    PSCommunicator<PSComm_StructName(LHZS::SDI_TRACK_REPORT)> *_pTrackRecvCom;
    PSCommunicator<PSComm_StructName(LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST)> *_pUAV_Entity_StateList;
    PSCommunicator<PSComm_StructName(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ)> *_pCommand_PathChangeReq;
};

#endif // DDSHELPER_H
