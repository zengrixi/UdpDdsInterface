#ifndef TCPSOCKET_H
#define TCPSOCKET_H

using namespace std;

#include <QObject>
#include <QHostAddress>
#include <QTcpSocket>
#include <QTcpServer>
#include <QProcess>
#include <QMutex>
#include <QThread>
#include <QTime>
#include <QTimer>
#include <fstream>
#include <string>
#include <iostream>
#include <QSettings>
#include "commondef.h"

class TCPSocket : public QObject
{
    Q_OBJECT
public:
    explicit TCPSocket(QString ipAddress, int port, bool bClient, int type);
    ~TCPSocket();
    bool ini();
    void stop();

private:
    QTcpSocket *_pTcpSocket;
    QTcpServer *_pTcpServer;
    QTimer _setTimer, _timeoutTimer;
    QHostAddress *_pServerIP;
    bool _bNetworkStatus;
    QString _sSendTargetIP, _sRecTargetIP;
    int _nSendPort, _nRecPort;
    bool _bClient;
    QByteArray _readBuf; //数据接收缓存

    int _nTestType;   //0:SAR无人机平台信息发送测试；1：SAR无人机目标航迹发送测试
    int _bUavSimStep; //无人机平台测试步长
    bool _bUavDir;    //无人机平台航路方向
    float _fIniLat, _fIniLon, _fIniAlt, _fIniRole, _fIniYAngle, _IniZAngle; //无人机位置信息

    int _nTargetSimStep; //无人机目标航迹测试步长
    bool _bTargetDir;    //无人机目标航迹方向
    struct SARTARGETINFO //SAR目标航迹
    {
        qint16 patchID;                                          //航迹批号
        unsigned char patchState;                                //航迹状态
        float speed;                                             //径向速度
        float distance;                                          //距离
        float azimuth;                                           //方位
        unsigned short year;                                     //年
        unsigned char month, day;                                //月日
        unsigned int time;                                       //毫秒
        double uavLontitude, uavLatitude, uavHeight;             //载机经度/载机纬度/高度
        float downHeight;                                        //机下点高度
        float uavPhaseAngle, uavPitchAngle, uavRoleAngle;        //载机航向角,俯仰角,横滚角
        float uavEastSpeed, uavNorthSpeed, uavUpSpeed, uavSpeed; //载机东向速度,北向速度,天向速度,地速
        float targetPitchAngle;                                  //目标仰角
        float targetLontitude, targetLatitude, targetHeight;     //目标经度,纬度,海拔高度
        char backup[33];
    };

    QByteArray makeData();
public slots:
    void dataReceived();
    void DestroyConnection();
    void slotDisconnected();
    void slotConnected();
    void sendTimerSlot();
    void clientTimerSlot();
    void slotNewConnected();

signals:
};

#endif // TCPSOCKET_H
