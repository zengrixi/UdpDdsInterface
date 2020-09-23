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
    App::ReadConfig();
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
