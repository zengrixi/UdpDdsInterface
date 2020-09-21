#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

#include "database.h"
#include "tcpsocket.h"
#include "onworker.h"

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_startBtn_clicked();

    void on_stopBtn_clicked();

    void on_SARUAVposTestBtn_clicked();

    void on_SARSimulatorTestBtn_clicked();

    void on_SARRecTestBtn_clicked();

    void on_SentryTestBtn_clicked();

    void on_SentryRadarTestBtn_clicked();

    void on_UAVposTestBtn_clicked();

    void on_UAVRadarTestBtn_clicked();

    void on_InformationTestBtn_clicked();

    void on_OWSTestBtn_clicked();

    void on_RoutePlanTestBtn_clicked();

    void sendTimerSlot();
private:
    Ui::MainWindow *ui;
    TCPSocket *_tcpSARPos, *_tcpSARTrack;
    QMap<int,LHZS::SDI_TRACK_REPORT> targetList;

    QMap<unsigned short,double> enemySpeed;//运动速度，key：platId
    QMap<unsigned short,int> entityType;//实体类型，key：platId
    QMap<unsigned long,LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT> entities;//原始数据信息，key：时间
    QMap<unsigned short,LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT> nowEntity;//实体当前状态，key：platId
    void sendTrack(int m_type,unsigned short platId);
    int trackIndex;
    QTimer _trackSendTimer;
    int getEntityType(unsigned short platId);
    void readConfig();
};

#endif // MAINWINDOW_H
