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

    if (!DdsHelper::instance().isRunning())
    {
        DdsHelper::instance().start();
    }

}

void MainWindow::on_stopBtn_clicked()
{
    DdsHelper::instance().stop();
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
    if(_trackSendTimer.isActive())
    {
        _trackSendTimer.stop();
        return;
    }
    //从数据文件中读取实时数据
    waitDialog *m_dia=new waitDialog(this);//,tr("提示"),tr("载入数据，请等待……"));
    m_dia->setModal(true);
    m_dia->setGeometry(100,100,200,100);
    m_dia->setStyleSheet("background-color:white");
    m_dia->show();
    trackIndex=0;
    enemySpeed.clear();
    entities.clear();
    nowEntity.clear();
    entityType.clear();
    targetList.clear();
    nowEntity.clear();
    QString fileName = QString("%0/m_EntityInfoFile.txt").arg(qApp->applicationDirPath());
    QStringList fileContents;
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::critical(this, "File error", "Could not open file " + fileName, QMessageBox::Ok);
        return;
    }
    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        fileContents << line;
    }
    file.close();
    entities = OnWorker::instance().check(fileContents);
    fileContents.clear();
    qDebug()<<"read entity information:"<<entities.count();
    for(QMap<unsigned long,LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT>::Iterator it=entities.begin();
        it!=entities.end();it++)
    {
        LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT entityState=it.value();
        int type=getEntityType(entityState.platId);
        if(!nowEntity.contains(entityState.platId))
        {
            nowEntity.insert(entityState.platId,entityState);
            entityType.insert(entityState.platId,type);
            continue;
        }
        //计算运动速度
        LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT oldState=nowEntity[entityState.platId];
        nowEntity[entityState.platId]=entityState;
        double dist=GeoCoorDinate::DistanceOfRadian(oldState.geodeticLocationLat,oldState.geodeticLocationLon,entityState.geodeticLocationLat,entityState.geodeticLocationLon);
        double step=entityState.timeOfUpdate-oldState.timeOfUpdate;
        double speed=dist*1000000/step;
        if(enemySpeed.contains(entityState.platId))
            enemySpeed[entityState.platId]=speed;
        else
            enemySpeed.insert(entityState.platId,speed);
        if(type<4&&type>-1)
        {
            //友方，发送航迹
            sendTrack(type,entityState.platId);
        }
        //Sleep(2);
    }
    m_dia->close();
    trackIndex=0;
    connect(&_trackSendTimer, SIGNAL(timeout()), this, SLOT(sendTimerSlot()));
    _trackSendTimer.start(10);
}

void MainWindow::sendTimerSlot()
{
    if(!targetList.contains(trackIndex))
    {
        _trackSendTimer.stop();
        return;
    }
    LHZS::SDI_TRACK_REPORT trackReport=targetList[trackIndex];
    //dds发布航迹信息------zeng
    DataBase::instance().processRecvData(DDS_MSGTYPE_RADAR_TRACK_REPORT, &trackReport);
    ui->textEdit->append(QString("id:%1,pos:%2,%3,%4;velocity:%5,%6,%7").arg(trackReport.sdi_track_number_ul)
                         .arg(trackReport.target_geo_position.lon_f).arg(trackReport.target_geo_position.lat_f).arg(trackReport.target_geo_position.alt_f)
                         .arg(trackReport.target_velocity.platform_vx_f).arg(trackReport.target_velocity.platform_vy_f).arg(trackReport.target_velocity.platform_vz_f));
    trackIndex++;
}

int MainWindow::getEntityType(unsigned short platId)
{
    if(g_SAR_nPlatID.contains(platId))return 0;
    if(g_UVA_nPlatID.contains(platId))return 1;
    if(g_AEW_nPlatID.contains(platId))return 2;
    if(g_Fight_nPlatID.contains(platId))return 3;
    if(g_Enemy_Ship_nPlatID.contains(platId))return 4;
    if(g_Enemy_Fighter_nPlatID.contains(platId))return 5;
    if(g_Enemy_AEW_nPlatID.contains(platId))return 6;
    if(g_Entity_nPlatID.contains(platId))return 7;
    else return -1;
}

void MainWindow::sendTrack(int m_type,unsigned short platId)
{
    if(!detectRangeMap.contains(m_type))return;
    if(!entities.contains(platId))return;
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT m_entity=nowEntity[platId];
    QMap<int,double> rangeMap=detectRangeMap[m_type];//获取本类传感器探测范围
    if(m_type==3)//战斗机只有长机发送航迹信息
        if(platId!=leaderFighterID)return;
    for(QMap<unsigned short,LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT>::iterator it=nowEntity.begin();
        it!=nowEntity.end();it++)
    {
        //计算是否可见
        LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT entity=it.value();
        if(entity.platId==platId)continue;
        if(!entityType.contains(entity.platId))continue;
        int type=entityType[entity.platId];
        if(!rangeMap.contains(type))continue;
        if(m_type!=3)
        {
            //非战斗机，由情报系统负责协同
            //计算是否可探测
            double range=rangeMap[type];
            double dis=GeoCoorDinate::DistanceOfRadian(entity.geodeticLocationLat,entity.geodeticLocationLon,m_entity.geodeticLocationLat,m_entity.geodeticLocationLon);
            if(dis>range)continue;
        }
        else
        {
            bool is_find=false;
            foreach(unsigned short fighterID,g_Fight_nPlatID)
            {
                if(!nowEntity.contains(fighterID))continue;
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT fighterState=nowEntity[fighterID];
                double range=rangeMap[type];
                double dis=GeoCoorDinate::DistanceOfRadian(entity.geodeticLocationLat,entity.geodeticLocationLon,fighterState.geodeticLocationLat,fighterState.geodeticLocationLon);
                if(dis<=range)
                {
                    is_find=true;
                    break;
                }
            }
            if(!is_find)continue;
        }
        //可探测，发送航迹
        LHZS::SDI_TRACK_REPORT trackReport;
        trackReport.platform_id_ul=entity.platId;
        if(m_type==2)
            trackReport.sdi_track_number_ul=1000+entity.platId;
        else if(m_type==0)
            trackReport.sdi_track_number_ul=2000+entity.platId;
        else
            trackReport.sdi_track_number_ul=3000+entity.platId;
        trackReport.radar_track_number_uh=0;
        trackReport.ssr_track_number_uh=0;
        trackReport.esm_target_number_uh=0;
        trackReport.csm_target_number_uh=0;
        trackReport.ir_target_number_uh=0;
        LHZS::TARGET_ATTRIBUTE_DATA tad;
        tad.conflict_flag_uh[0]=entity.platId;
        tad.conflict_flag_uh[1]=0;
        tad.conflict_flag_uh[2]=0;
        tad.conflict_flag_uh[3]=0;
        tad.JEM_type_e=0;
        tad.ident_confidence_f=1;
        tad.civil_military_e=1;
        tad.civil_military_conf_f=1;
        tad.target_class_e=type;
        tad.class_confidence_f=1;
        tad.target_model_e=0;
        tad.model_confidence_f=0;
        tad.target_nation_e=0;
        tad.nation_confidence_f=0;
        tad.rcs_confidence_f=0;
        switch(type)
        {
        case 0://SAR无人机
            tad.target_rcs_e=1;
            tad.target_type_e=0;
            tad.identification_e=0;
            trackReport.threat_level_e=0;
            trackReport.platform_id_ul+=2000;
            trackReport.ir_target_number_uh=trackReport.sdi_track_number_ul;
            trackReport.ssr_track_number_uh=trackReport.sdi_track_number_ul;
            break;
        case 1://雷达无人机
            tad.target_rcs_e=1;
            tad.target_type_e=0;
            tad.identification_e=0;
            trackReport.threat_level_e=0;
            trackReport.platform_id_ul+=3000;
            trackReport.radar_track_number_uh=trackReport.sdi_track_number_ul;
            break;
        case 2://预警机
            tad.target_rcs_e=3;
            tad.target_type_e=0;
            tad.identification_e=0;
            trackReport.threat_level_e=0;
            trackReport.platform_id_ul+=1000;
            break;
        case 3://我方战机
            tad.target_rcs_e=2;
            tad.target_type_e=0;
            tad.identification_e=0;
            trackReport.threat_level_e=0;
            trackReport.platform_id_ul+=4000;
            break;
        case 4://敌方海上目标
            tad.target_rcs_e=3;
            tad.target_type_e=1;
            tad.identification_e=1;
            trackReport.threat_level_e=1;
            trackReport.platform_id_ul+=5000;
            break;
        case 5://敌方战机
            tad.target_rcs_e=2;
            tad.target_type_e=0;
            tad.identification_e=1;
            trackReport.threat_level_e=2;
            trackReport.platform_id_ul+=4000;
            break;
        case 6://敌方预警机
            tad.target_rcs_e=3;
            tad.target_type_e=0;
            tad.identification_e=1;
            trackReport.threat_level_e=3;
            trackReport.platform_id_ul+=1000;
            break;
        }
        trackReport.icao_addr_ul=0;
        trackReport.ais_mmsi_ul=0;
        memset(trackReport.call_sign_c,0,16);
        trackReport.net_obj_addr_uh=0;
        trackReport.track_status_e=0;
        trackReport.track_quality_uh=1;
        trackReport.track_source_e=0;
        trackReport.target_geo_position.alt_f=entity.geodeticLocationAlt;
        trackReport.target_geo_position.lat_f=entity.geodeticLocationLat;
        trackReport.target_geo_position.lon_f=entity.geodeticLocationLon;
        trackReport.target_velocity.platform_vx_f=entity.topographicVelocityX;
        trackReport.target_velocity.platform_vy_f=entity.topographicVelocityY;
        trackReport.target_velocity.platform_vz_f=entity.topographicVelocityZ;
        if(enemySpeed.contains(entity.platId))
            trackReport.speed_f=enemySpeed[entity.platId];
        else
            trackReport.speed_f=0;
        trackReport.heading_f=entity.topographicPhi;
        trackReport.mission_type_e=0;//探测
        trackReport.formation_size_uh=1;//探测
        trackReport.maneuver_indicator_e=0;//探测
        QTime tt=QDateTime::currentDateTime().time();
        trackReport.time_of_update_ul=(tt.hour()*3600+tt.minute()*60+tt.second())*1000+tt.msec();//按照情报方定义的当天经过的毫秒数
//        trackReport.target_attribute_data=tad;//探测
        memset(trackReport.spare_c,0,24);
        targetList.insert(trackIndex,trackReport);
        trackIndex++;
    }
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
    WRJStationCtrlID=settings.value("id","41").toInt();
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
