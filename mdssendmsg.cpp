#include "mdssendmsg.h"

MdsSendMsg::MdsSendMsg(): AbstractComponent()
{
    _pUAV_Entity_StateList = Q_NULLPTR;
    _pCommand_PathChangeReq = Q_NULLPTR;
    _pMessage_TrackReport = Q_NULLPTR;
    ddsInit();
}

MdsSendMsg::~MdsSendMsg()
{
}

void MdsSendMsg::ddsInit()
{
    // 创建发布/订阅通信器类对象，将某一消息结构体与消息主题进行绑定
    // 参数可以使用根目录下的组件配置文件名 softwareBlueprint.xml 中定义
    // 也可以自行传入参数 domainID, topic等
    _pUAV_Entity_StateList =
    new PSCommunicator<PSComm_StructName(LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST)> (0,
    LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST_TOPIC);
    
    _pCommand_PathChangeReq = 
    new PSCommunicator<PSComm_StructName(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ)> (0,
    LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ_TOPIC);
    
    _pMessage_TrackReport = 
    new PSCommunicator<PSComm_StructName(LHZS::SDI_TRACK_REPORT)> (1,
    "LHZS::SDI_TRACK_REPORT");
}

bool MdsSendMsg::onSendEntityData(LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST *pInstance)
{
    QMutexLocker mutexLocker(&_mutex);

    // 调用发布消息函数接口发布消息
    // 函数返回true为发送成功，返回false为发送失败
    // 该函数在消息实例参数的后面实有三个带有默认值的参数
    // 分别为要求网络中存在的消息接收端个数以触发发送网络报文，默认为1，即只有在网络中探测到有接收端订阅该消息时，本函数才真正发送消息
    // 第三个参数为探测接收端的超时时间，单位为秒，默认为2秒
    // 第四个参数为轮循探测接收端的周期，单位为微秒，默认为10微秒
    // 如不想等待有无接收端就发送消息则第二个参数为0
    return _pUAV_Entity_StateList->publishMsg(pInstance, 0);
}

bool MdsSendMsg::onSendCommand(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *pInstance)
{
    QMutexLocker mutexLocker(&_mutex);

    return _pCommand_PathChangeReq->publishMsg(pInstance, 0);
}

bool MdsSendMsg::onSendMessageData(LHZS::SDI_TRACK_REPORT *pInstance)
{
    QMutexLocker mutexLocker(&_mutex);

    return _pMessage_TrackReport->publishMsg(pInstance, 0);
}
