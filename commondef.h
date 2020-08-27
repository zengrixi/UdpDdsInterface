#ifndef COMMONDEF_H
#define COMMONDEF_H

#include "Entity/lhzs-vrforce-entity.h"
#include "Entity/lhzs-vrforce-entitySupport.h"
#include "Command/lhzs-vrforce-command.h"
#include "Command/lhzs-vrforce-commandSupport.h"
#include "Target/target.h"
#include "Target/targetSupport.h"
#include "testinfo.h"

#include <QDebug>
#include <QList>

/*----------------------------------------------*
 * 宏定义                                          *
 *----------------------------------------------*/
#define MEMCPY_SRC_APPED(dst, src, n)   (((u_char *) memcpy(dst, src, n)), (src += n))
#define MEMCPY_DST_APPEN(dst, src, n)   (((u_char *) memcpy(dst, src, n)) + (n))
#define MEMZERO(buf, n)                 (void) memset(buf, 0, n)

#define PI                              3.141592653
#define EARTH_RADIUS                    6378.137        // 地球近似半径

// 战斗机相关
#define ZDJ_COUNT                       sizeof(g_ZDJ_nPlatID) / sizeof(g_ZDJ_nPlatID[0])
#define ZDJ_TARGET_COUNT                sizeof(g_ZDJ_TargetPlatID) / sizeof(g_ZDJ_TargetPlatID[0])

/*----------------------------------------------*
 * 数据类型定义                                       *
 *----------------------------------------------*/
typedef signed char 		INT8;		 
typedef unsigned char       UINT8;   
typedef signed short        INT16;
typedef unsigned short      UINT16;
typedef signed int          INT32;
typedef unsigned int        UINT32;
typedef signed long long    INT64;
typedef unsigned long long  UINT64;
/*----------------------------------------------*
 * 常量定义                                         *
 *----------------------------------------------*/
// 战斗机平台ID
static const int g_ZDJ_nPlatID[] = 
{
    3, 7, 73, 36, 31, 34, 70, 75,
    33, 35, 76, 71, 32, 37
};
// 战斗机目标PlatID
static const int g_ZDJ_TargetPlatID[] =
{
    122, 110, 101, 131, 124, 130,
    120, 112, 121, 123, 111, 113
};

/*----------------------------------------------*
 * 全局枚举定义                                       *
 *----------------------------------------------*/
// 导调DDS消息类型
typedef enum NET_MSG
{
    NET_MsgType_None = 0,
    NET_MsgType_UavCreteEntity = 10000, //创建无人机

    NET_MsgType_LaunchMissile, //发射导弹

    NET_MsgType_PathChangeReq, //指挥引导  1:7

    NET_MsgType_MissileFireReq, //远程制导  4:3

    NET_MsgType_TrackReport,

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
}NET_MSG_ENUM;

// 测试类型
enum TESTTYPE
{
    sendSARUAV,
    sendSARTarget,
    sendRadarUAV,
    sendRadarTarget,
    sendFighter,
    sendFighterTarget
};

// 消息类型
typedef enum DDS_MSG
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

}DDS_MSG_ENUM;

// 从各个平台接收的消息类型
typedef enum RECV_MSGTYPE
{
    Recv_MsgType_WRJ_Entity_Pos,                // 从飞控盒子接收的无人机位置信息
    Recv_MsgType_ZDJ_Entity_Pos_List = 0x1,     // 战斗机实时位置信息
    Recv_MsgType_ZDJ_TrackReport,               // 战斗机目标实时航迹
    Recv_MsgType_Radar_TrackReport,             // 雷达模拟器目标航迹
}RECV_MSGTYPE_ENUM;

// Socket发送消息类型
typedef enum SOCK_SEND_MSGTYPE
{
    NoneMsgType,
    Send_MsgType_ZDJ_InitPosition,              // 战斗机初始位置信息
    Send_MsgType_Target_Position,               // 战斗机目标实时位置
}SOCK_SEND_MSGTYPE_ENUM;

/*----------------------------------------------*
 * 全局结构体定义                                      *
 *----------------------------------------------*/
#pragma pack(1)
// 无人机位置
typedef struct WRJ_POS
{
    INT32 lon;
    INT32 lat;
    INT32 alt;         
}WRJ_POS_STRU;

// 无人机姿态
typedef struct WRJ_ATTITUDE
{
    INT16 yaw;
    INT16 pitch;
    INT16 roll;          
}WRJ_ATTITUDE_STRU;

// 战斗机位置
typedef struct ZDJ_POS
{
    double lon_f;
    double lat_f;       
}ZDJ_POS_STRU;

// 战斗机速度
typedef struct ZDJ_VELOCITY
{
    double vel_x_f;// 速度x
    double vel_y_f;// 速度y      
}ZDJ_VELOCITY_STRU;

// 无人机数据帧头
typedef struct FRAME_HEAD
{
    UINT8 first;
    UINT8 second;
}FRAME_HEAD_STRU;

// 无人机位置信息
typedef struct DATA_FRAME
{
    UINT8 dataID;
    UINT8 dataLength;
    UINT8 id;
    WRJ_POS_STRU pos;
    WRJ_ATTITUDE_STRU attitude;
}DATA_FRAME_STRU;

// 包尾数据校验
typedef struct CRC_CHECK
{
    UINT8 first;
    UINT8 second;
}CRC_CHECK_STRU;
    
// 飞控平台接收的无人机位置信息
typedef struct WRJ_POSITION_STATE
{
    FRAME_HEAD_STRU frameHead;
    UINT8 packgeLen;
    DATA_FRAME_STRU *pDataFrame;
    CRC_CHECK_STRU checkBit;
}WRJ_POSITION_STATE_STRU;

// 数据包头
typedef struct PACKAGE_HEAD
{
    UINT32 packHead;
    UINT32 msgType;
    UINT32 packSize;
}PACKAGE_HEAD_STRU;

// ZDJ位置信息
typedef struct ZDJ_POSITION_STATE
{
    UINT8 id;
    ZDJ_POS_STRU pos;// 经纬
    ZDJ_VELOCITY_STRU velocity;// 速度
    double course_f;// 航向
}ZDJ_POSITION_STATE_STRU;

// ZDJ编队实时位置姿态信息
typedef struct ZDJ_POSITION_STATE_LIST
{
    PACKAGE_HEAD packageHead;
    INT32 timestamp;
    UINT8 count;
    ZDJ_POSITION_STATE_STRU *pPositionState;
    UINT32 packTail;
}ZDJ_POSITION_STATE_LIST_STRU;

// 航迹点
typedef struct ZDJ_TARGET_POS
{
    UINT16 trackNum;// 航迹号
    ZDJ_POS_STRU pos;// 经纬
    double err;// 距离误差      
}ZDJ_TARGET_POS_STRU;

// ZDJ目标实时航迹
typedef struct ZDJ_TARGET_TRACK_LIST
{
    PACKAGE_HEAD packageHead;
    UINT32 timestamp;
    UINT32 targetID;
    UINT8 count;
    ZDJ_TARGET_POS_STRU *pTrackReport;
    UINT32 packTail;
}ZDJ_TARGET_TRACK_LIST_STRU;

// ZDJ初始位置姿态
typedef struct ZDJ_INIT_POSITION_STATE
{
    PACKAGE_HEAD packageHead;
    UINT8 count;
    ZDJ_POSITION_STATE_STRU *pPositionState;
    UINT32 packTail;
}ZDJ_INIT_POSITION_STATE_STRU;

// ZDJ目标信息
typedef struct TARGET_POSITION_STATE
{
    UINT32 id;
    ZDJ_POS_STRU pos;
    double noiseIntensity;  // 噪声强度
}TARGET_POSITION_STATE_STRU;

// ZDJ目标实时位置信息
typedef struct TARGET_POSITION_STATE_LIST
{
    PACKAGE_HEAD_STRU packageHead;
    UINT8 count;
    TARGET_POSITION_STATE_STRU *pPositionState;
    UINT32 packTail;
}TARGET_POSITION_STATE_LIST_STRU;

// 数据接收结构体
typedef struct MY_MSG
{
    NET_MSG_ENUM eType;
    void* pBuf;          
}MY_MSG_STRU;
#pragma pack()

#endif // COMMONDEF_H

