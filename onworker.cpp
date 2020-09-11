#include "onworker.h"

#include <QApplication>
#include <QSettings>

OnWorker::OnWorker(QObject *parent) : QObject(parent)
{
    SaveLog::instance().start();
    readConfig();
}

OnWorker::~OnWorker()
{
    SaveLog::instance().stop();
    SaveLog::instance().deleteLater();
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

    QSettings settings(strIniFile, QSettings::IniFormat);
    settings.beginGroup("SystemSet");
    logType = settings.value("logType", "debug").toString();
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
