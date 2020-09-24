#include "ddshelper.h"

#include <QDebug>

#include "database.h"


DdsHelper::DdsHelper(QObject *parent)
    : QObject(parent)
    , AbstractComponent()
    , _pEntityRecvCom(Q_NULLPTR)
    , _pTrackRecvCom(Q_NULLPTR)
    , _pUAV_Entity_StateList(Q_NULLPTR)
    , _pCommand_PathChangeReq(Q_NULLPTR)
{
	initialization();
}


DdsHelper::~DdsHelper()
{
	
}


void DdsHelper::initialization()
{
    initEntityStateReportList();
    initTrackReport();
    initPathChange();
    initUAVentityStateList();
}


int DdsHelper::initEntityStateReportList()
{
    // 创建发布/订阅通信器类对象，将某一消息结构体与消息主题进行绑定
    // 参数可以使用根目录下的组件配置文件名 softwareBlueprint.xml 中定义
    // 也可以自行传入参数 domainID, topic等
    unsigned int id = 0;
    QString topic = LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST_TOPIC;

    _pEntityRecvCom =
    new PSCommunicator<PSComm_StructName(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST)> 
    (id, topic.toStdString(), true);
    
    if ( Q_NULLPTR == _pEntityRecvCom )
    {
        return -1;
    }

    // 调用订阅消息函数接口开始订阅消息
    _pEntityRecvCom->subscribeMsg(&_entityMsg);

    return 0;
}


int DdsHelper::initTrackReport()
{
    unsigned int id = 1;
    QString topic = "SDI_TRACK_REPORT";

    _pTrackRecvCom = 
    new PSCommunicator<PSComm_StructName(LHZS::SDI_TRACK_REPORT)>
    (id, topic.toStdString());
    
    if ( Q_NULLPTR == _pTrackRecvCom )
    {
        return -1;
    }

    _pTrackRecvCom->subscribeMsg(&_targetMsg);

    return 0;
}


int DdsHelper::initUAVentityStateList()
{
    unsigned int id = 0;
    QString topic = LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST_TOPIC;
    
    _pUAV_Entity_StateList =
    new PSCommunicator<PSComm_StructName(LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST)>
    (id, topic.toStdString());

    if ( Q_NULLPTR == _pUAV_Entity_StateList )
    {
        return -1;
    }

    return 0;
}


int DdsHelper::initPathChange()
{
    unsigned int id = 0;
    QString topic = LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ_TOPIC;
    
    _pCommand_PathChangeReq = 
    new PSCommunicator<PSComm_StructName(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ)>
    (id, topic.toStdString());

    if ( Q_NULLPTR == _pCommand_PathChangeReq )
    {
        return -1;
    }

    return 0;
}


/*****************************************************************************
 * 函 数 名  : DdsHelper.processMsg
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月17日
 * 函数功能  : 根据消息类型处理消息
 * 输入参数  : my_msg_t stMyMsg  消息结构
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void DdsHelper::processMsg(my_msg_t stMyMsg)
{
	switch (stMyMsg.eType)
	{
		case NET_MSGTYPE_PATH_CHANGE_REQ:
		{
			LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *pPathChangeReq =
			(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *) (stMyMsg.pBuf);
			if ( pPathChangeReq )
			{
                if ( !onSendCommand(pPathChangeReq) )
                {
                    qDebug() << "PATH_CHANGE_REQ 发送失败！";
                }
                LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQTypeSupport::delete_data(pPathChangeReq);
			}
			break;
		}
        case NET_MSGTYPE_TRACK_REPORT :
        {
            LHZS::SDI_TRACK_REPORT *pTrackReport =
            (LHZS::SDI_TRACK_REPORT *) (stMyMsg.pBuf);
            if ( pTrackReport )
            {
                if ( !onSendMessageData(pTrackReport) )
                {
                    qDebug() << "TARGET_INDICATE 发送失败！";
                }
                LHZS::SDI_TRACK_REPORTTypeSupport::delete_data(pTrackReport);
            }
            break;
        }

		default:
		{
			break;
		}
	}
}


bool DdsHelper::onSendEntityData(LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST *pInstance)
{
    // 调用发布消息函数接口发布消息
    // 函数返回true为发送成功，返回false为发送失败
    // 该函数在消息实例参数的后面实有三个带有默认值的参数
    // 分别为要求网络中存在的消息接收端个数以触发发送网络报文，默认为1，即只有在网络中探测到有接收端订阅该消息时，本函数才真正发送消息
    // 第三个参数为探测接收端的超时时间，单位为秒，默认为2秒
    // 第四个参数为轮循探测接收端的周期，单位为微秒，默认为10微秒
    // 如不想等待有无接收端就发送消息则第二个参数为0
    return _pUAV_Entity_StateList->publishMsg(pInstance, 0);
}


bool DdsHelper::onSendCommand(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *pInstance)
{
    return _pCommand_PathChangeReq->publishMsg(pInstance, 0);
}


bool DdsHelper::onSendMessageData(LHZS::SDI_TRACK_REPORT *pInstance)
{
    TestInfo(pInstance);
    return _pTrackRecvCom->publishMsg(pInstance, 0);
}


// 实现监听类对象的数据处理虚函数，该函数的内部实现功能将在接收到消息实例后执行。
void EntityListener::processData(const LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST &report)
{
    for (int i = 0; i < report.entityList.length(); i++)
    {
        LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT e = report.entityList[i];
        if ( 0 == e.platId )
        {
            continue;
        }

        // 存储接收到的实体数据
        DataBase::instance()->recordEntity(&e);
    }
}


void TargetListener::processData(const LHZS::SDI_TRACK_REPORT &report)
{
    LHZS::SDI_TRACK_REPORT lcTrackReport = report;
    //DataBase::instance()->processRecvData(DDS_MSGTYPE_RADAR_TRACK_REPORT, &lcTrackReport);
}

