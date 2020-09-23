///////////////////////////////////////////////////////////////////////////////
//
// 版权声明： Copyright (c) 2019 湖南苍树航天科技有限公司. All rights reserved.
// 文件名称： app.cpp
// 文件摘要：
// 创建作者： 施晓红
// 创建时间： 2020-03-06
//
///////////////////////////////////////////////////////////////////////////////

#include "app.h"

#include "myhelper.h"

QString App::AppName = "dataCollect";
QString App::AppPath = ".";
int App::DeskWidth = 1366;
int App::DeskHeight = 768;

int App::IcoMain = 0xf17b;
int App::IcoMenu = 0xf0d7;
int App::IcoMin = 0xf068;
int App::IcoMax = 0xf079;
int App::IcoNormal = 0xf0b2;
int App::IcoClose = 0xf00d;

bool App::UseTray = false;
bool App::SaveLog = true;
int App::logType = 0;
bool App::UseStyle = true;
QString App::lastOpenDir = "";
QString App::StyleName = "";
int App::FontSize = 9;
QString App::FontName = "Microsoft YaHei";

QList<unsigned short> App::Entity_nPlatID = QList<unsigned short>();
QList<unsigned short> App::SAR_nPlatID = QList<unsigned short>();
QList<unsigned short> App::UVA_nPlatID = QList<unsigned short>();
QList<unsigned short> App::AEW_nPlatID = QList<unsigned short>();
QList<unsigned short> App::Enemy_Ship_nPlatID = QList<unsigned short>();
QList<unsigned short> App::Enemy_Fighter_nPlatID = QList<unsigned short>();
QList<unsigned short> App::Enemy_AEW_nPlatID = QList<unsigned short>();
QList<unsigned short> App::Fight_nPlatID = QList<unsigned short>();

QMap<int,QMap<int,double>> App::detectRangeMap = QMap<int,QMap<int,double>>();
unsigned short App::leaderFighterID = 0;
unsigned short App::WRJStationCtrlID = 0;

quint16 App::wrj_wayPointNum = 0;
QList<vec3_t> App::wrj_wayIniPoint = QList<vec3_t>();

QString App::_ZDJ_IP = "",App::_WRJ_IP = "",App::_COR_IP = "",App::_PXK_IP = "";
uint16_t App::_ZDJ_PORT = 0,App::_WRJ_PORT = 0,App::_COR_PORT = 0,App::_PXK_PORT = 0;


void App::ReadConfig()
{
    Entity_nPlatID.clear();//所有实体ID（有形实体）
    SAR_nPlatID.clear();// SAR无人机PlatID
    UVA_nPlatID.clear();// 雷达无人机PlatID
    AEW_nPlatID.clear();// 预警机PlatID(敌我）
    Fight_nPlatID.clear();// 我方战斗机平台ID
    Enemy_Ship_nPlatID.clear();// 海上目标PlatID（敌方船只）
    Enemy_Fighter_nPlatID.clear();// 战斗机目标PlatID（敌方？）
    Enemy_AEW_nPlatID.clear();

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
    settings.beginGroup("WRJINITPOS");
    wrj_wayPointNum=settings.value("count", "0").toInt();
    for(int i=0;i<wrj_wayPointNum;i++)
    {
        vec3_t pos;
        pos.x=settings.value(QString("pos%1_lon").arg(i),"").toDouble();
        pos.y=settings.value(QString("pos%1_lat").arg(i),"").toDouble();
        pos.z=settings.value(QString("pos%1_alt").arg(i),"").toDouble();
        wrj_wayIniPoint.append(pos);
    }
    settings.endGroup();

    //从配置文件中读取各类传感器的探测范围
    settings.beginGroup("SARDetectRange");
    double SAR_Sea_Range=settings.value("SEA", "200").toDouble();
    double SAR_Air_Range=settings.value("AIR", "100").toDouble();
    WRJStationCtrlID=settings.value("id","42").toInt();
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
    detectRangeMap.insert(2,tempRange);
    settings.endGroup();

    settings.beginGroup("NetworkSet");
    _WRJ_IP=settings.value("_WRJ_IP", "192.168.1.160").toString();
    _WRJ_PORT=settings.value("_WRJ_PORT", "9000").toInt();
    _ZDJ_IP=settings.value("_ZDJ_IP", "192.168.1.100").toString();
    _ZDJ_PORT=settings.value("_ZDJ_PORT", "8085").toInt();
    _COR_IP=settings.value("_COR_IP", "192.168.1.100").toString();
    _COR_PORT=settings.value("_COR_PORT", "8085").toInt();
    _PXK_IP=settings.value("_PXK_IP", "224.3.3.3").toString();
    _PXK_PORT=settings.value("_PXK_PORT", "9999").toInt();
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
            SAR_nPlatID.append(ID.toInt());
            Entity_nPlatID.append(ID.toInt());
            break;
        case 1://雷达无人机
            UVA_nPlatID.append(ID.toInt());
            Entity_nPlatID.append(ID.toInt());
            break;
        case 2://我方预警机
            AEW_nPlatID.append(ID.toInt());
            Entity_nPlatID.append(ID.toInt());
            break;
        case 3://我方战机
            Fight_nPlatID.append(ID.toInt());
            Entity_nPlatID.append(ID.toInt());
            break;
        case 4://敌方海上目标
            Enemy_Ship_nPlatID.append(ID.toInt());
            Entity_nPlatID.append(ID.toInt());
            break;
        case 5://敌方战机
            Enemy_Fighter_nPlatID.append(ID.toInt());
            Entity_nPlatID.append(ID.toInt());
            break;
        case 6://敌方预警机
            Enemy_AEW_nPlatID.append(ID.toInt());
            Entity_nPlatID.append(ID.toInt());
            break;
        }
    }
    settings.endGroup();
}

void App::WriteConfig()
{
    QString fileName = QString("%1/%2_Config.ini").arg(App::AppPath).arg(App::AppName);
    QSettings set(fileName, QSettings::IniFormat);

    set.beginGroup("AppConfig");
    set.setValue("UseTray", App::UseTray);
    set.setValue("SaveLog", App::SaveLog);
    set.setValue("LogType", App::logType);
    set.setValue("UseStyle", App::UseStyle);
    set.setValue("StyleName", App::StyleName);
    set.setValue("FontSize", App::FontSize);
    set.setValue("FontName", App::FontName);
    set.setValue("lastOpenDir", App::lastOpenDir);
    set.endGroup();
}
