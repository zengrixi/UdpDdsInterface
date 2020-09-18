#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ddshelper.h"
#include <QDebug>
#include <QMessageBox>
#include "app.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    OnWorker::instance();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startBtn_clicked()
{
    // 启动DDS接收线程
    if (!DdsHelper::instance().isRunning())
    {
        DdsHelper::instance().start();
    }
    OnWorker::instance().onStartUdp();
    OnWorker::instance().start();
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
    //从数据文件中读取实时数据
    enemySpeed.clear();
    entityTrackNumber.clear();
    nowEntity.clear();
    QString fileName = QString("%0/g_EntityInfoFile.txt").arg(qApp->applicationDirPath());
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
    unsigned long number[6]={0};
    for(QMap<unsigned long,ENTITYSTATE_REPORT>::Iterator it=entities.begin();
        it!=entities.end();it++)
    {
        ENTITYSTATE_REPORT entityState=it.value();
        int type=getEntityType(entityState.platId);
        if(!nowEntity.contains(entityState.platId))
        {
            nowEntity.insert(entityState.platId,entityState);
            entityType.insert(entityState.platId,type);
            if(type>-1&&type<6)
                number[type]++;
            else continue;
            entityTrackNumber.insert(entityState.platId,type*1000+number[type]);
            continue;
        }
        //计算运动速度
        ENTITYSTATE_REPORT oldState=nowEntity[entityState.platId];
        nowEntity[entityState.platId]=entityState;
        double dist=getDistance(oldState.geodeticLocationLat,oldState.geodeticLocationLon,entityState.geodeticLocationLat,entityState.geodeticLocationLon);
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
}

int MainWindow::getEntityType(unsigned short platId)
{
    if(g_SAR_nPlatID.contains(platId))
        return 0;
    if(g_UVA_nPlatID.contains(platId))return 1;
    if(g_AEW_nPlatID.contains(platId))return 2;
    if(g_Fight_nPlatID.contains(platId))return 3;
    if(g_Enemy_Ship_nPlatID.contains(platId))return 4;
    if(g_Enemy_Fighter_nPlatID.contains(platId))return 5;
    else return 6;
}

void MainWindow::sendTrack(int m_type,unsigned short platId)
{
    if(!detectRangeMap.contains(m_type))return;
    if(!entities.contains(platId))return;
    ENTITYSTATE_REPORT m_entity=nowEntity[platId];
    QMap<int,double> rangeMap=detectRangeMap[m_type];//获取本类传感器探测范围
    if(m_type==3)//战斗机只有长机发送航迹信息
        if(platId!=leaderFighterID)return;
    for(QMap<unsigned short,ENTITYSTATE_REPORT>::iterator it=nowEntity.begin();
        it!=nowEntity.end();it++)
    {
        //计算是否可见
        ENTITYSTATE_REPORT entity=it.value();
        if(entity.platId==platId)continue;
        if(!entityType.contains(entity.platId))continue;
        int type=entityType[entity.platId];
        if(!rangeMap.contains(type))continue;
        if(m_type!=3)
        {
            //非战斗机，由情报系统负责协同
            //计算是否可探测
            double range=rangeMap[type];
            double dis=getDistance(entity.geodeticLocationLat,entity.geodeticLocationLon,m_entity.geodeticLocationLat,m_entity.geodeticLocationLon);
            if(dis>range)continue;
        }
        else
        {
            bool is_find=false;
            foreach(unsigned short fighterID,g_Fight_nPlatID)
            {
                if(!nowEntity.contains(fighterID))continue;
                ENTITYSTATE_REPORT fighterState=nowEntity[fighterID];
                double range=rangeMap[type];
                double dis=getDistance(entity.geodeticLocationLat,entity.geodeticLocationLon,fighterState.geodeticLocationLat,fighterState.geodeticLocationLon);
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
        if(entityTrackNumber.contains(platId))
            trackReport.sdi_track_number_ul=entityTrackNumber[platId];
        else
            trackReport.sdi_track_number_ul=type*1000+1;
        trackReport.radar_track_number_uh=0;
        trackReport.ssr_track_number_uh=0;
        trackReport.esm_target_number_uh=0;
        trackReport.csm_target_number_uh=0;
        trackReport.ir_target_number_uh=0;
        TARGET_ATTRIBUTE_DATA tad;
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
        trackReport.target_attribute_data=tad;//探测
        memset(trackReport.spare_c,0,24);
        //dds发布航迹信息------zeng
        DataBase::instance().processRecvData(DDS_MSGTYPE_RADAR_TRACK_REPORT, &trackReport);
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
