#include "mainwindow.h"

#include <QDebug>
#include <QMessageBox>

#include "ddshelper.h"
#include "app.h"
#include "waitdialog.h"
#include "SurveyMath/geocoordinate.h"


using namespace SurveyMath;


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    readConfig();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startBtn_clicked()
{
    // 启动DDS接收线程
    OnWorker::instance().onStartUdp();
    OnWorker::instance().start();
    DataBase::instance().setStartTime(0);

    connect(&_trackSendTimer, SIGNAL(timeout()), this, SLOT(sendTrackTimerSlot()));
    _trackSendTimer.start(3000);
}

void MainWindow::on_stopBtn_clicked()
{
//    ui->textEdit->clear();
//    for(QMap<int,LHZS::SDI_TRACK_REPORT>::iterator it=targetList.begin();it!=targetList.end();it++)
//    {
//        LHZS::SDI_TRACK_REPORT trackReport=it.value();
//        if(trackReport.platform_id_ul!=40)continue;
//        //dds发布航迹信息------zeng
//        ui->textEdit->append(QString("platid:%0;    sidid:%1;   time:%2").arg(trackReport.platform_id_ul).arg(trackReport.sdi_track_number_ul).arg(trackReport.time_of_update_ul));
//    }
}

void MainWindow::on_SARUAVposTestBtn_clicked()
{
    //SAR无人机平台测试
    _tcpSARPos = new TCPSocket("127.0.0.1", 6000, true, sendSARUAV); //作为客户端测试SAR无人机平台发送
    if (!_tcpSARPos->ini())
    {
        _tcpSARPos->stop();
    }
}

void MainWindow::on_SARSimulatorTestBtn_clicked()
{
    //SAR雷达模拟器测试
}

void MainWindow::on_SARRecTestBtn_clicked()
{
    //SAR目标识别测试
    _tcpSARTrack = new TCPSocket("127.0.0.1", 6000, true, sendSARTarget); //作为客户端测试SAR目标航迹发送
    if (!_tcpSARTrack->ini())
    {
        _tcpSARTrack->stop();
    }
}

void MainWindow::on_SentryTestBtn_clicked()
{
    //预警机平台测试
}

void MainWindow::on_SentryRadarTestBtn_clicked()
{
    //预警机雷达测试
}

void MainWindow::on_UAVposTestBtn_clicked()
{
    //雷达无人机平平台测试
}

void MainWindow::on_UAVRadarTestBtn_clicked()
{
    //雷达无人机点迹测试
}

void MainWindow::on_InformationTestBtn_clicked()
{
    //情报信息测试
}

void MainWindow::sendTrackTimerSlot()
{
    DataBase::instance().createTrack(0);//预警机，情报联调用，实际由预警机雷达模拟器给出
    DataBase::instance().createTrack(1);//SAR无人机，情报联调用，实际由SAR模拟器给出
    DataBase::instance().createTrack(2);//雷达无人机,如果38所不能给出，则由此处给出
    DataBase::instance().createTrack(3);//战斗机，情报联调用，实际由空工大给出
}

void MainWindow::on_OWSTestBtn_clicked()
{
    //显控命令测试
}

void MainWindow::on_RoutePlanTestBtn_clicked()
{
    //有人无人协同路径规划测试
}

void MainWindow::readConfig()
{
    g_Entity_nPlatID.clear();//所有实体ID（有形实体）
    g_SAR_nPlatID.clear();// SAR无人机PlatID
    g_UVA_nPlatID.clear();// 雷达无人机PlatID
    g_AEW_nPlatID.clear();// 预警机PlatID(敌我）
    g_Fight_nPlatID.clear();// 我方战斗机平台ID
    g_Enemy_Ship_nPlatID.clear();// 海上目标PlatID（敌方船只）
    g_Enemy_Fighter_nPlatID.clear();// 战斗机目标PlatID（敌方？）
    g_Enemy_AEW_nPlatID.clear();

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
            g_SAR_nPlatID.append(ID.toInt());
            g_Entity_nPlatID.append(ID.toInt());
            break;
        case 1://雷达无人机
            g_UVA_nPlatID.append(ID.toInt());
            g_Entity_nPlatID.append(ID.toInt());
            break;
        case 2://我方预警机
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
        case 6://敌方预警机
            g_Enemy_AEW_nPlatID.append(ID.toInt());
            g_Entity_nPlatID.append(ID.toInt());
            break;
        }
    }
    settings.endGroup();
}
