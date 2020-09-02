#include "mdsrecvmsg.h"
#include <QDebug>

MdsRecvMsg::MdsRecvMsg(): QThread(), AbstractComponent()
{
}

MdsRecvMsg::~MdsRecvMsg()
{
    stop();
    wait();
    quit();
}

void MdsRecvMsg::stop()
{
    _stopMutex.lock();
    _bStop = true;
    _stopMutex.unlock();
}

void MdsRecvMsg::run()
{
    _bStop = false;

    // 创建发布/订阅通信器类对象，将某一消息结构体与消息主题进行绑定
    // Ps: 通信器本身即支持发送，也支持接收，支持自发自收
    PSCommunicator<PSComm_StructName(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST)> *pEntityRecvCom = nullptr;
    PSCommunicator<PSComm_StructName(LHZS::SDI_TRACK_REPORT)> *pTrackRecvCom = nullptr;

    // 创建自定义接收监听类对象
    EntityListener entityMsg;
    TargetListener targetMsg;

    // 创建发布/订阅通信器类对象，将某一消息结构体与消息主题进行绑定
    // 参数可以使用根目录下的组件配置文件名 softwareBlueprint.xml 中定义
    // 也可以自行传入参数 domainID, topic等
    unsigned int uiDomainID = 0;
    QString sTopicName = LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST_TOPIC;

    pEntityRecvCom = 
    new PSCommunicator<PSComm_StructName(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST)> 
    (uiDomainID, sTopicName.toStdString(), true);
    if (!pEntityRecvCom)
    {
        return;
    }

    pTrackRecvCom = 
    new PSCommunicator<PSComm_StructName(LHZS::SDI_TRACK_REPORT)>
    (uiDomainID, "LHZS::SDI_TRACK_REPORT");
    if ( !pTrackRecvCom )
    {
        return;
    }

    // 调用订阅消息函数接口开始订阅消息
    pEntityRecvCom->subscribeMsg(&entityMsg);
    pTrackRecvCom->subscribeMsg(&targetMsg);

    // 死循环保证线程不退出
    for (; ; )
    {
        // 进程退出条件
        _stopMutex.lock();
        if (_bStop)
        {
            _stopMutex.unlock();
            break;
        }
        _stopMutex.unlock();
        sleep(1);
    }

    // 线程退出前进行清理工作
    delete pEntityRecvCom;
}

// 实现监听类对象的数据处理虚函数，该函数的内部实现功能将在接收到消息实例后执行。
void EntityListener::processData(const LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST &report)
{
    for (int i = 0; i < report.entityList.length(); i++)
    {
        LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT e = report.entityList[i];
        if (!e.platId)
        {
            continue;
        }

        // 存储接收到的实体数据
        DataBase::instance().recordEntity(&e);
    }
}

void TargetListener::processData(const LHZS::SDI_TRACK_REPORT &report)
{
    LHZS::SDI_TRACK_REPORT lcTrackReport = report;
    DataBase::instance().processRecvData(DDS_MSGTYPE_RADAR_TRACK_REPORT, &lcTrackReport);
}
