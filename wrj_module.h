//////////////////////////////////////////////////////////////////////
//
//版权声明：Copyright（c）2020 湖南苍树航天科技有限公司. All rights reserved
//文件名称：无人机模块（wrj_module.h/cpp）
//文件摘要：实现与Space的通信，即：接包、解包、向位置队列存数据；调用两个API从内部得到航线数据及飞机控制权数据、封包、发包
//创建作者：蒋沛峰
//创建时间：2020.8.31
//
/////////////////////////////////////////////////////////////////////

#ifndef WRJ_MODULE_H
#define WRJ_MODULE_H
#include <QDebug>
#include <QUdpSocket>
#include <QString>
#include <QDataStream>
#include <QHostAddress>
#include <math.h>
#include <vector>
#include <deque>
#include <QMutex>
#include <QTimer>
#include <QThread>
#include "wrj_function_variable.h"

using namespace std;


/*完善及待完善的问题
 * 1、对于出错的包（已通过包头包尾校验的），在某一次分析数据帧取位置数据时，前面正常接收，但后面出错的，采取不接收本次数据帧得到的所有位置数据  -- 解决
 * 2、根据现有协议，可对内存开销减少，但之后协议改变需调整  -- 待定
 * 3、若有多个应答包参杂着数据传送过来，根据现有判断不可靠，待进一步处理。还是规定一定时间内只能发送一次控制包 -- 待定
 * 4、程序接受流程： 从 接收 -》解析包-》向内部提供数据。 接到的数据放到哪里或者以什么形式提供给内部？  -- 解决
 * 5、程序发送流程： 从 从内部获得数据 -》调用发送函数 -》封装包。 发送的数据形式是怎么样的？ -- 解决
 * 6、多个航线一起发送时，Space只能接到一组航线，待进一步测试，是不是space的解析问题？  --待定
 * 7、需不需要设置缓存区，将多个数据帧结构放在一个包中发送出去？？  -- 待定
*/


class WRJ_Module:public QObject
{
    Q_OBJECT
public:
    WRJ_Module();
    ~WRJ_Module();
    static WRJ_Module *instance();

    void WRJ_UdpSocket_Init();
    void WRJ_Track_Init();

    //**************************** 对外接口 **********************
    WRJ_POSITIONSTATE_STRU* WRJ_TakePosition();
    int WRJ_send_TrackDataPacket(WayPoint_Struct *wayPoints,quint8 wayPointNum);
    int WRJ_send_TrackDataPacket(double (*wayPoints)[3],quint8 wayPointNum);
    void WRJ_send_CtrlAuthorityPacket(unsigned char);
    bool WRJ_get_CtrlAuthority();
    bool WRJ_release_CtrlAuthority();

public slots:
    void WRJ_Recv_DifferentPacket();
    void WRJ_Init();

protected:
    /****** 解析包的函数 ********/
    // 以下4个函数功能：
    //     1、分析数据帧，根据长度类型，判断属于哪种包
    //     2、处理只有位置数据包的数据帧
    //     3、处理含有应答包的数据帧
    //     4、解析 Space 发来的包，验证包头、校验包尾，若通过则取出数据帧交给第一个函数
    void WRJ_Analyze_DataFrame(QByteArray *dataFrame);
    void WRJ_Only_PositionPacket(QByteArray *dataFrame);
    void WRJ_Include_ResponsePacket(QByteArray *dataFrame);
    QByteArray WRJ_Analyze_Packet(QByteArray packet);

    /****** 封装包的函数 ********/
    // 以下3个函数功能：
    //     1、产生一个航线数据包；实际上是产生数据帧，然后调用第3个函数产生真正的包; 参数待定,未知什么形式的参数 ？？故其处理有待进一步适配
    //     2、产生一个控制权限包；实际上是产生数据帧，然后调用第3个函数产生真正的包; 参数待做个枚举??按照协议 0 表示申请控制权，1 表示释放控制权
    //     3、前面两个函数可以共用的代码，用来封装最大的包
    QByteArray WRJ_Produce_TrackPackt(WayPoint_Struct *wayPoints,quint8 wayPointNum);
    QByteArray WRJ_Produce_TrackPackt(double (*WayPoints)[3], quint8 WayPointNum);

    QByteArray WRJ_Produce_CtrlAuthorityPackt(unsigned char CtrlFlag);
    QByteArray WRJ_Produce_Packet(QByteArray &dataFrame,unsigned char dataFrameLen);

    void WRJ_RequestGet_CtrlAuthority();
    void WRJ_RequestRelease_CtrlAuthority();

    int WRJ_CtrlAuthorityTime;
public:
    //*****************************  位置队列  *********************************************//
    void WRJ_PositionQueue_Init();   //队列初始化
    void WRJ_PositionQueue_AllClear();   //将元素全部清除
    void WRJ_PositionQueue_Positions_AllClear(); //清除队列中每个元素指向的内存
    void WRJ_PositionQueue_Full_PartClear();     //队列满的时候，清除部分元素指向的内存

signals:
    //无人机模块信号，先作保留，因为其他模块需要申请或释放无人机控制时，space返回一个应答包
    void WRJ_Get_or_Release_ControlAuthority_Success();
    void WRJ_Get_or_Release_ControlAuthority_Failure();

private:
    // 无人机模块变量，为以后要处理 解析数据函数中的中间数据，作保留
    bool WRJ_PitchPositionStruct_Int = false;       //待作保留
    bool WRJ_PitchPositionStruct_Double = false;    //待作保留
    bool WRJ_notHandleFollowContentFlag = false;     //不再处理后续内容

    bool WRJ_Get_or_Release_ControlAuthority_Flag = false ; //实际获得或释放控制权的标志
    bool WRJ_Get_Ctrl_Flag = false ;                        //对外部的获得或释放控制权的标志

    // UDP单播相关变量
    QUdpSocket *UnicastUdpSocket = Q_NULLPTR;
    QHostAddress DestinationIP;
    quint16 DestinationPort;
    quint16 LocalPort;

    // 位置队列相关变量
    deque<WRJ_POSITIONSTATE_STRU *> *savePosition_deque = Q_NULLPTR;
    qint16 lastElementIndex = -1;   //最后一个元素下标，队列为空则为-1
    qint16 queueMaxIndex = 99;    //暂设队列最大容量为 queueMaxIndex + 1 = 100
    qint16 clearNum = 10;

    QTimer timer_requestCtrl;
    QTimer timer_requestRelease;


};

#endif // WRJ_MODULE_H
