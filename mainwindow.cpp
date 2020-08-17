#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ddshelper.h"
#include <QDebug>
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
}

void MainWindow::on_OWSTestBtn_clicked()
{
    //显控命令测试
}

void MainWindow::on_RoutePlanTestBtn_clicked()
{
    //有人无人协同路径规划测试
}
