#include "onworker.h"

#include <QApplication>
#include <QSettings>

#include "wrj_module.h"
#include "wrj_function_variable.h"
#include "app.h"
#include "config/config.h"
#include "waitdialog.h"

OnWorker::OnWorker(QObject *parent)
    : QThread(parent)
    , _dataWork(new QThread())
    , _dataBase(DataBase::instance())
    , _pDdsHelper(new DdsHelper())
{
    WRJ_Module::instance();

    _dataBase->moveToThread(_dataWork);
    connect(_dataWork, &QThread::finished, _dataBase, &QObject::deleteLater);
    _dataWork->start();

    onReadFighterData();
}

OnWorker::~OnWorker()
{
    stop();
    WRJ_Module::instance()->deleteLater();
    _pCOR_Udp->deleteLater();
    _pWRJ_Udp->deleteLater();
    _pXK_Udp->deleteLater();
    _pZDJ_Udp->deleteLater();
    _pDdsHelper->deleteLater();
    _dataWork->quit();
    _dataWork->wait();
    _dataWork->deleteLater();
}


void OnWorker::stop()
{
    _stopMutex.lock();
    _bStop = true;
    _stopMutex.unlock();
}


void OnWorker::run()
{
    int result;
    
    result = WRJ_Module::instance()->WRJ_get_CtrlAuthority();

    _bStop = false;

    while ( result )
    {
        // 进程退出条件
        _stopMutex.lock();
        if (_bStop)
        {
            _stopMutex.unlock();
            break;
        }
        _stopMutex.unlock();
        
        onStartWRJRecv();
        _pDdsHelper->processMsg(DataBase::instance()->getMyMsg());
    }

    WRJ_Module::instance()->WRJ_release_CtrlAuthority();
}


void OnWorker::onStartUdp()
{
    _pWRJ_Udp = new UdpHelper;
    _pWRJ_Udp->Init(App::_WRJ_IP, App::_WRJ_PORT);

    _pZDJ_Udp = new UdpHelper;
    _pZDJ_Udp->Init(App::_ZDJ_IP, App::_ZDJ_PORT);
    _pZDJ_Udp->start();

    _pCOR_Udp = new UdpHelper;
    _pCOR_Udp->Init(App::_COR_IP, App::_COR_PORT);
    _pCOR_Udp->start();

    _pXK_Udp = new UdpHelper;
    _pXK_Udp->Init(App::_PXK_IP, App::_PXK_PORT, 2);
}


void OnWorker::onStartWRJRecv()
{
    WRJ_POSITIONSTATE_STRU *p;

    p = WRJ_Module::instance()->WRJ_TakePosition();

    if ( p )
    {
        DataBase::instance()->processRecvData(RECV_MSGTYPE_WRJ_ENTITY_POS, p);

        free(p);
    }
}


void OnWorker::onStartWRJSend()
{
#if 0
    int id;
    WayPoint_Struct way;
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *pEntityReport;

    id = 41;
    pEntityReport = DataBase::instance()->getEntityReport(id);
    if ( pEntityReport )
    {
        way.Lon = pEntityReport->geodeticLocationLon;
        way.Lat = pEntityReport->geodeticLocationLon;
        way.Lon = pEntityReport->geodeticLocationLon;

        WRJ_Module::instance()->WRJ_send_TrackDataPacket(&way, 1);
    }
#endif
}


void OnWorker::onReadFighterData()
{
    // 获取战斗机位置信息
    auto json = Config::instance()->readJson("fighter2me.json");
    QMap<QString, QList<vec2_t>> fighter2me = Config::instance()->getFighterAirRoute(json);

    json = Config::instance()->readJson("fighter2enemy.json");
    QMap<QString, QList<vec2_t>> fighter2enemy = Config::instance()->getFighterAirRoute(json);

    json = Config::instance()->readJson("error.json");
    QMap<QString, QList<double>> distanceError = Config::instance()->getDistanceErr(json);

    // 发送战斗机航路
    LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *pPathChangeReq;
    QMap<QString, QList<vec2_t>>::const_iterator it = fighter2me.constBegin();
    while ( it != fighter2me.constEnd() )
    {
        QList<vec2_t> pos = it.value();
        pPathChangeReq = LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQTypeSupport::create_data();
        pPathChangeReq->platId = it.key().toInt();
        
        DataBase::instance()->recordPathChangeReq(pPathChangeReq, pos);

        QTimer::singleShot(10*60*1000, [=] {
            onSendFighterRoute(pPathChangeReq);
        });
        
        it++;
    }

    it = fighter2enemy.constBegin();
    while ( it != fighter2enemy.constEnd() )
    {
        QList<vec2_t> pos = it.value();
        pPathChangeReq = LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQTypeSupport::create_data();
        pPathChangeReq->platId = it.key().toInt();
        
        DataBase::instance()->recordPathChangeReq(pPathChangeReq, pos);

        QTimer::singleShot(10*60*1000, [=] {
            onSendFighterRoute(pPathChangeReq);
        });
        
        it++;
    }
}


void OnWorker::onSendFighterRoute(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *p)
{
    my_msg_t msg;
    msg.eType = NET_MSGTYPE_PATH_CHANGE_REQ;
    msg.pBuf = p;
    _pDdsHelper->processMsg(msg);
}


/*****************************************************************************
 * 函 数 名  : OnWorker.onConnectSql
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月18日
 * 函数功能  : 连接KingBase数据库
 * 输入参数  : 无
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void OnWorker::onConnectSql()
{
    
}

QMap<unsigned long,LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT> OnWorker::check(QStringList listToCheck)
{
    QString format_time="timeOfUpdate : (\\w*)";
    QString format_lon="geodeticLocationLon : (-?([1-9]\\d*\\.\\d*|0\\.\\d*[1-9]\\d*|0?\\.0+|0))";
    QString format_lat="geodeticLocationLat : (-?([1-9]\\d*\\.\\d*|0\\.\\d*[1-9]\\d*|0?\\.0+|0))";
    QString format_alt="geodeticLocationAlt : (-?([1-9]\\d*\\.\\d*|0\\.\\d*[1-9]\\d*|0?\\.0+|0))";
    QString format_vx="topographicVelocityX : (-?([1-9]\\d*\\.\\d*|0\\.\\d*[1-9]\\d*|0?\\.0+|0))";
    QString format_vy="topographicVelocityY : (-?([1-9]\\d*\\.\\d*|0\\.\\d*[1-9]\\d*|0?\\.0+|0))";
    QString format_vz="topographicVelocityZ : (-?([1-9]\\d*\\.\\d*|0\\.\\d*[1-9]\\d*|0?\\.0+|0))";
    QString format_platid="platId : (\\w*)";
    QRegExp timeInFile(format_time);
    QRegExp lonInFile(format_lon);
    QRegExp latInFile(format_lat);
    QRegExp altInFile(format_alt);
    QRegExp vxInFile(format_vx);
    QRegExp vyInFile(format_vy);
    QRegExp vzInFile(format_vz);
    QRegExp platIDInFile(format_platid);
    QString currentWord;//=listToCheck.join("\n");
    QMap<unsigned long,LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT> fileDataMap;
    unsigned long index=0;
    foreach(currentWord,listToCheck)
    {
        if (timeInFile.indexIn(currentWord, 0) != -1)
        {
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT entity;
            entity.timeOfUpdate=timeInFile.cap(1).toLong();
            fileDataMap.insert(index,entity);
            index++;            // 上一个匹配的字符串的长度
        }
    }
    index=0;
    foreach(currentWord,listToCheck)
    {
        if (lonInFile.indexIn(currentWord, 0) != -1)
        {
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT entity=fileDataMap[index];
            entity.geodeticLocationLon=lonInFile.cap(1).toDouble();
            fileDataMap[index]=entity;
            index++;
        }
    }

    index=0;

    foreach(currentWord,listToCheck)
    {
        if (latInFile.indexIn(currentWord, 0) != -1)
        {
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT entity=fileDataMap[index];
            entity.geodeticLocationLat=latInFile.cap(1).toDouble();
            fileDataMap[index]=entity;
            index++;
        }
    }

    index=0;

    foreach(currentWord,listToCheck)
    {
        if ( altInFile.indexIn(currentWord, 0) != -1)
        {
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT entity=fileDataMap[index];
            entity.geodeticLocationAlt=altInFile.cap(1).toDouble();
            fileDataMap[index]=entity;
            index++;
        }
    }

    index=0;

    foreach(currentWord,listToCheck)
    {
        if (vxInFile.indexIn(currentWord, 0) != -1)
        {
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT entity=fileDataMap[index];
            entity.topographicVelocityX=vxInFile.cap(1).toDouble();
            fileDataMap[index]=entity;
            index++;
        }
    }

    index=0;

    foreach(currentWord,listToCheck)
    {
        if (vyInFile.indexIn(currentWord, 0) != -1)
        {
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT entity=fileDataMap[index];
            entity.topographicVelocityY=vyInFile.cap(1).toDouble();
            fileDataMap[index]=entity;
            index++;
        }
    }

    index=0;

    foreach(currentWord,listToCheck)
    {
        if (vzInFile.indexIn(currentWord, 0) != -1)
        {
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT entity=fileDataMap[index];
            entity.topographicVelocityZ=vzInFile.cap(1).toDouble();
            fileDataMap[index]=entity;
            index++;
        }
    }

    index=0;

    foreach(currentWord,listToCheck)
    {
        if ( platIDInFile.indexIn(currentWord, 0) != -1)
        {
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT entity=fileDataMap[index];
            entity.platId=platIDInFile.cap(1).toUShort();
            fileDataMap[index]=entity;
            index++;
        }
    }
    return fileDataMap;
}
