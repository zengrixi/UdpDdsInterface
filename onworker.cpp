#include "onworker.h"

#include <QApplication>
#include <QSettings>

#include "wrj_module.h"
#include "wrj_function_variable.h"

OnWorker::OnWorker(QObject *parent) : QThread(parent)
{
    WRJ_Module::instance();
    SaveLog::instance().start();
    readConfig();
}

OnWorker::~OnWorker()
{
    SaveLog::instance().stop();
    SaveLog::instance().deleteLater();
}


void OnWorker::run()
{
    bool result;

    result = WRJ_Module::instance().WRJ_get_CtrlAuthority();

    while ( result )
    {
        onStartWRJRecv();
    }

    WRJ_Module::instance().WRJ_release_CtrlAuthority();
}


void OnWorker::onStartUdp()
{
    _pWRJ_Udp = new UdpHelper;
    _pWRJ_Udp->Init(_WRJ_IP, _WRJ_PORT);

    _pZDJ_Udp = new UdpHelper;
    _pZDJ_Udp->Init(_ZDJ_IP, _ZDJ_PORT);
    _pZDJ_Udp->start();

    _pCOR_Udp = new UdpHelper;
    _pCOR_Udp->Init(_COR_IP,_COR_PORT);
    _pCOR_Udp->start();

    _pXK_Udp = new UdpHelper;
    _pXK_Udp->Init("224.3.3.3", 9999, 2);
}


void OnWorker::onStartWRJRecv()
{
    WRJ_POSITIONSTATE_STRU *p;

    p = WRJ_Module::instance().WRJ_TakePosition();

    if ( p )
    {
        DataBase::instance().processRecvData(RECV_MSGTYPE_WRJ_ENTITY_POS, p);

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
    pEntityReport = DataBase::instance().getEntityReport(id);
    if ( pEntityReport )
    {
        way.Lon = pEntityReport->geodeticLocationLon;
        way.Lat = pEntityReport->geodeticLocationLon;
        way.Lon = pEntityReport->geodeticLocationLon;

        WRJ_Module::instance().WRJ_send_TrackDataPacket(&way, 1);
    }
#endif
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

void OnWorker::readConfig()
{
    g_Entity_nPlatID.clear();//所有实体ID（有形实体）
    g_SAR_nPlatID.clear();// SAR无人机PlatID
    g_UVA_nPlatID.clear();// 雷达无人机PlatID
    g_AEW_nPlatID.clear();// 预警机PlatID(敌我）
    g_Fight_nPlatID.clear();// 我方战斗机平台ID
    g_Enemy_Ship_nPlatID.clear();// 海上目标PlatID（敌方船只）
    g_Enemy_Fighter_nPlatID.clear();// 战斗机目标PlatID（敌方？）

    QString strIniFile = QString("%0/config.ini").arg(qApp->applicationDirPath());
    QFile iniFile(strIniFile);
    QString logType;
    if (!iniFile.exists())
    {
        //软件首次运行
        QSettings *settings = new QSettings(strIniFile, QSettings::IniFormat);
        settings->beginGroup("SystemSet");
        settings->setValue("logType", "debug");
        settings->endGroup();
        settings->beginGroup("NetworkSet");
        settings->setValue("_WRJ_IP", "192.168.1.160");
        settings->setValue("_WRJ_PORT", "9000");
        settings->setValue("_ZDJ_IP", "192.168.1.100");
        settings->setValue("_ZDJ_PORT", "8085");
        settings->setValue("_COR_IP", "192.168.1.100");
        settings->setValue("_COR_PORT", "8085");
        settings->endGroup();
        settings->beginGroup("entityID");
        settings->setValue("count", "6");
        int count=6;
        for(int i=0;i<count;i++)
        {
            settings->setValue(QString("entity%1").arg(i),QString::number(i+1));
            settings->setValue(QString("type%1").arg(i),QString::number(i));//要修改
        }
        settings->endGroup();
        delete settings;
    }
    leaderFighterID=0;

    QSettings settings(strIniFile, QSettings::IniFormat);
    settings.beginGroup("SystemSet");
    logType = settings.value("logType", "debug").toString();
    settings.endGroup();

    //从配置文件中读取各类传感器的探测范围
    settings.beginGroup("SARDetectRange");
    double SAR_Sea_Range=settings.value("SEA", "200").toDouble();
    double SAR_Air_Range=settings.value("AIR", "100").toDouble();
    QMap<int,double> tempRange;
    tempRange.insert(0,SAR_Air_Range);
    tempRange.insert(1,SAR_Air_Range);
    tempRange.insert(2,SAR_Air_Range);
    tempRange.insert(3,SAR_Air_Range);
    tempRange.insert(4,SAR_Sea_Range);
    tempRange.insert(5,SAR_Air_Range);
    tempRange.insert(6,SAR_Air_Range);
    detectRangeMap.insert(0,tempRange);
    settings.endGroup();

    settings.beginGroup("FighterDetectRange");
    double fighter_UVA_Range=settings.value("UVA", "200").toDouble();
    double fighter_Fighter_Range=settings.value("Fighter", "250").toDouble();
    double fighter_AEW_Range=settings.value("AEW", "350").toDouble();
    double fighter_Ship_Range=settings.value("Ship", "350").toDouble();
    leaderFighterID=settings.value("leader","112").toInt();
    tempRange.clear();
    tempRange.insert(0,fighter_UVA_Range);
    tempRange.insert(1,fighter_UVA_Range);
    tempRange.insert(2,fighter_AEW_Range);
    tempRange.insert(3,fighter_Fighter_Range);
    tempRange.insert(4,fighter_Ship_Range);
    tempRange.insert(5,fighter_Fighter_Range);
    tempRange.insert(6,fighter_AEW_Range);
    detectRangeMap.insert(3,tempRange);
    settings.endGroup();

    settings.beginGroup("RadarDetectRange");
    double radar_UVA_Range=settings.value("UVA", "200").toDouble();
    double radar_Fighter_Range=settings.value("Fighter", "250").toDouble();
    double radar_AEW_Range=settings.value("AEW", "350").toDouble();
    double radar_Ship_Range=settings.value("Ship", "350").toDouble();
    tempRange.clear();
    tempRange.insert(0,radar_UVA_Range);
    tempRange.insert(1,radar_UVA_Range);
    tempRange.insert(2,radar_AEW_Range);
    tempRange.insert(3,radar_Fighter_Range);
    tempRange.insert(4,radar_Ship_Range);
    tempRange.insert(5,radar_Fighter_Range);
    tempRange.insert(6,radar_AEW_Range);
    detectRangeMap.insert(1,tempRange);
    settings.endGroup();

    settings.beginGroup("AEWDetectRange");
    double AEW_UVA_Range=settings.value("UVA", "200").toDouble();
    double AEW_Fighter_Range=settings.value("Fighter", "250").toDouble();
    double AEW_AEW_Range=settings.value("AEW", "350").toDouble();
    double AEW_Ship_Range=settings.value("Ship", "350").toDouble();
    tempRange.clear();
    tempRange.insert(0,AEW_UVA_Range);
    tempRange.insert(1,AEW_UVA_Range);
    tempRange.insert(2,AEW_AEW_Range);
    tempRange.insert(3,AEW_Fighter_Range);
    tempRange.insert(4,AEW_Ship_Range);
    tempRange.insert(5,AEW_Fighter_Range);
    tempRange.insert(6,AEW_AEW_Range);
    detectRangeMap.insert(1,tempRange);
    settings.endGroup();

    settings.beginGroup("NetworkSet");
    _WRJ_IP=settings.value("_WRJ_IP", "192.168.1.160").toString();
    _WRJ_PORT=settings.value("_WRJ_PORT", "9000").toInt();
    _ZDJ_IP=settings.value("_ZDJ_IP", "192.168.1.100").toString();
    _ZDJ_PORT=settings.value("_ZDJ_PORT", "8085").toInt();
    _COR_IP=settings.value("_COR_IP", "192.168.1.100").toString();
    _COR_PORT=settings.value("_COR_PORT", "8085").toInt();
    settings.endGroup();

    settings.beginGroup("entityID");
    int count=settings.value("count", "0").toInt();
    for(int i=0;i<count;i++)
    {
        QString ID=settings.value(QString("entity%1").arg(i),"").toString();
        int type=settings.value(QString("type%1").arg(i),"-1").toInt();
        if(ID=="")continue;
        switch(type)
        {
        case 0://SAR无人机
            g_SAR_nPlatID.append(ID.toInt());
            g_Entity_nPlatID.append(ID.toInt());
            break;
        case 1://雷达无人机
            g_UVA_nPlatID.append(ID.toInt());
            g_Entity_nPlatID.append(ID.toInt());
            break;
        case 2://预警机
            g_AEW_nPlatID.append(ID.toInt());
            g_Entity_nPlatID.append(ID.toInt());
            break;
        case 3://我方战机
            g_Fight_nPlatID.append(ID.toInt());
            g_Entity_nPlatID.append(ID.toInt());
            break;
        case 4://敌方海上目标
            g_Enemy_Ship_nPlatID.append(ID.toInt());
            g_Entity_nPlatID.append(ID.toInt());
            break;
        case 5://敌方战机
            g_Enemy_Fighter_nPlatID.append(ID.toInt());
            g_Entity_nPlatID.append(ID.toInt());
            break;
        }
    }
    settings.endGroup();
}

QMap<unsigned long,ENTITYSTATE_REPORT> OnWorker::check(QStringList listToCheck)
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
    QStringList listOfnumber;
    QString currentWord;//=listToCheck.join("\n");
    QMap<unsigned long,ENTITYSTATE_REPORT> fileDataMap;
    unsigned long index=0;
    foreach(currentWord,listToCheck)
    {
        if (timeInFile.indexIn(currentWord, 0) != -1)
        {
            ENTITYSTATE_REPORT entity;
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
            ENTITYSTATE_REPORT entity=fileDataMap[index];
            QString xy=lonInFile.cap(1);
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
            ENTITYSTATE_REPORT entity=fileDataMap[index];
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
            ENTITYSTATE_REPORT entity=fileDataMap[index];
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
            ENTITYSTATE_REPORT entity=fileDataMap[index];
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
            ENTITYSTATE_REPORT entity=fileDataMap[index];
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
            ENTITYSTATE_REPORT entity=fileDataMap[index];
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
            ENTITYSTATE_REPORT entity=fileDataMap[index];
            entity.platId=platIDInFile.cap(1).toUShort();
            fileDataMap[index]=entity;
            index++;
        }
    }
    return fileDataMap;
}
