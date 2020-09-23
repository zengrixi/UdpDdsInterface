#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

#include "database.h"
#include "tcpsocket.h"
#include "onworker.h"
#include "ui_mainwindow.h"

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

    void sendTrackTimerSlot();
private:
    Ui::MainWindow *ui;
    TCPSocket *_tcpSARPos, *_tcpSARTrack;

    QTimer _trackSendTimer;
    void readConfig();
};

#endif // MAINWINDOW_H
