#ifndef COMMONDEF_H
#define COMMONDEF_H

#include "Entity/lhzs-vrforce-entity.h"
#include "Entity/lhzs-vrforce-entitySupport.h"
#include "Command/lhzs-vrforce-command..h"
#include "Command/lhzs-vrforce-command.Support.h"

#include <QDebug>
#include <QList>

#define MEM_CPY(dst, src, n) (((char *) memcpy(dst, src, n)), (src += n))

/*======================================================
 @Name:NET_MSG_e
 @归属:GFWorkhelper
 @备注:消息类型
========================================================*/
enum NET_MSG_e
{
    NET_MsgType_UavCreteEntity = 10000, //创建无人机

    NET_MsgType_LaunchMissile, //发射导弹

    NET_MsgType_PathChangeReq, //指挥引导  1:7

    NET_MsgType_MissileFireReq, //远程制导  4:3

    NET_MsgType_TarGetIndication, //目标指示  1:33

    NET_MsgType_CommandAndGuidance, //指挥引导  1:42

    NET_MsgType_ScenarioReq, //指令控制

    NET_MsgType_ZdMsg,
    NET_MsgType_DeleteEntity, //删除实体

    NET_MsgType_ChangeSensor, //更改传感器

    NET_MsgType_CommLine_4001 = 4000,
    NET_MsgType_CommLine_4002,
    NET_MsgType_CommLine_4003,
    NET_MsgType_CommLine_4004,
    NET_MsgType_CommLine_4005,
    NET_MsgType_CommLine_4006,
    NET_MsgType_CommLine_4_Main,

    NET_MsgType_CommLine_5001 = 5000,
    NET_MsgType_CommLine_5002,
    NET_MsgType_CommLine_5003,
    NET_MsgType_CommLine_5004,
    NET_MsgType_CommLine_5005,
    NET_MsgType_CommLine_5006,
    NET_MsgType_CommLine_5_Main,

    NET_MsgType_CommLine_60000 = 6000,

    NET_MsgType_COOPERATE_POSITION,

    // 无人机平台
    NET_MsgType_FeiKong = 9000,

};

/*======================================================
 @Name:TESTTYPE
 @归属:DDShelper
 @备注:测试类型
========================================================*/
enum TESTTYPE
{
    sendSARUAV,
    sendSARTarget,
    sendRadarUAV,
    sendRadarTarget,
    sendFighter,
    sendFighterTarget
};

/*======================================================
 @Name:DDS_Msg_e
 @归属:DDShelper
 @备注:消息类型
========================================================*/
enum DDS_Msg_e
{
    DDS_MsgType_Command_MissleReq = 1000,
    DDS_MsgType_Command_PathChangeReq,
    DDS_MsgType_Command_CMD_ACK,
    DDS_MsgType_Command_DeleteEntity_Req,
    DDS_MsgType_Command_ChangeSensor_Req,

    DDS_MsgType_Control_STATUS = 2000,
    DDS_MsgType_Control_COMMAND_REQ,
    DDS_MsgType_Control_COMMAND_ACK,

    DDS_MsgType_Entity_ENTITYSTATE_REPORT_LIST = 3000,
    DDS_MsgType_Entity_UAV_ENTITYSTATE_REPORT_LIST,

    DDS_MsgType_Guide_CREATE_CHANNEL = 4000,
    DDS_MsgType_Guide_CANCEL_CHANNEL,
    DDS_MsgType_Guide_MISSILE_FIRE_REQ,
    DDS_MsgType_Guide_MISSILE_FIRE_ACK,
    DDS_MsgType_Guide_REMOTE_GUIDE_MISSILE,
    DDS_MsgType_Guide_DETECT_TO_MISSILE,

    DDS_MsgType_Interference_Radar_RfState = 5000,
    DDS_MsgType_Interference_Comm_RfState,
    DDS_MsgType_Interference_SafeRegionByJam_Struct,
    DDS_MsgType_Interference_AttackGuide_Struct,
    DDS_MsgType_Interference_RadarRfCoord,
    DDS_MsgType_Interference_CommRfCoord,

    DDS_MsgType_Message_MSGHEAD = 6000,
    DDS_MsgType_Message_S_MSG,
    DDS_MsgType_Message_ZD_MSG,
    DDS_MsgType_Message_NORMAL_MSG,

    DDS_MsgType_Message_DIRECT_GUIDE = 7000,

    DDS_MsgType_Message_TARGET_INDICATE = 8000,

    DDS_MsgType_Message_SENSOR_RW = 9000,

    DDS_MsgType_COOPERATE_POSITION = 10000

};

/* Socket接收的数据类型 */
enum Sock_Msg_e
{
    /// 从飞控盒子接收的无人机位置信息
    Sock_MsgType_WRJ_Entity_Pos,
    // 战斗机位置信息
    Sock_MsgType_ZDJ_Entity_Pos_List,
};

#pragma pack(1)
// 位置结构
typedef struct POS
{
    int32_t lon;
    int32_t lat;
    float alt;          
}POS_STRU;

// 姿态结构
typedef struct ATTITUDE
{
    float yaw;
    float pitch;
    float roll;          
}ATTITUDE_STRU;

// 飞控平台接收的无人机位置信息
typedef struct WRJ_POSITIONSTATE
{
    unsigned char id;
    float lon;
    float lat;
    float high;
    float zitaijiao[3];
}WRJ_POSITIONSTATE_STRU;

// ZDJ位置信息
typedef struct ZDJ_POSITIONSTATE
{
    char id;   
    POS_STRU pos;
    ATTITUDE_STRU attitude;
    float height;   
}ZDJ_POSITIONSTATE_STRU;

// ZDJ编队实时位置姿态信息
typedef struct ZDJ_POSITIONSTATE_LIST
{
    uint packHead;
    uint msgType;
    uint packSize;
    int64_t timestamp;
    char count;
    ZDJ_POSITIONSTATE_STRU *pEntity;
    uint packTail;
}ZDJ_POSITIONSTATE_LIST_STRU;
#pragma pack()

/*======================================================
 @Name:MyMsg_t
 @归属:MAIN
 @备注:数据接收结构体
========================================================*/
struct MyMsg_t
{
    NET_MSG_e eType;
    void* pBuf;
};

#endif // COMMONDEF_H
