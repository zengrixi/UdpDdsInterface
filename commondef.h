#ifndef COMMONDEF_H
#define COMMONDEF_H

#include "Entity/lhzs-vrforce-entity.h"
#include "Entity/lhzs-vrforce-entitySupport.h"
#include "Command/lhzs-vrforce-command.h"
#include "Command/lhzs-vrforce-commandSupport.h"
#include "Target/target.h"
#include "Target/targetSupport.h"
#include "wrj_module.h"
#include "wrj_function_variable.h"

#include "testinfo.h"

#include <QDebug>
#include <QList>

/*----------------------------------------------*
 * 数据类型定义                                       *
 *----------------------------------------------*/
typedef signed char             int8_t;
typedef unsigned char           uint8_t;
typedef signed short            int16_t;
typedef unsigned short          uint16_t;
typedef signed int              int32_t;
typedef unsigned int            uint32_t;
typedef signed long int         int64_t;
typedef unsigned long int       uint64_t;

typedef unsigned char           u_char;                   // 类型兼容


/*----------------------------------------------*
 * 宏定义                                          *
 *----------------------------------------------*/
#define MEMCPY_SRC_APPED(dst, src, n)   (((u_char *) memcpy(dst, src, n)), (src += n))
#define MEMCPY_DST_APPEN(dst, src, n)   (((u_char *) memcpy(dst, src, n)) + (n))
#define MEMZERO(buf, n)                 (void) memset(buf, 0, n)
// 阵列大小宏
#define ARRAY_SIZE(x)                   (sizeof(x) / sizeof((x)[0]))


#define PI                              3.141592653
#define EARTH_RADIUS                    6378.137        // 地球近似半径

static QList<int> g_Entity_nPlatID;//所有实体ID
static QList<int> g_SAR_nPlatID;// SAR无人机PlatID
static QList<int> g_UVA_nPlatID;// 雷达无人机PlatID
static QList<int> g_AEW_nPlatID;// 预警机PlatID(敌我）
static QList<int> g_Enemy_Ship_nPlatID;// 海上目标PlatID（敌方船只）
static QList<int> g_Enemy_Fighter_nPlatID;// 战斗机目标PlatID（敌方？）
static QList<int> g_Fight_nPlatID;// 我方战斗机平台ID

// 战斗机目标PlatID（敌方？）
static const int g_ZDJ_TargetPlatID[] =
{
    114, 117, 115, 116, 110,
    112, 111, 113, 119, 118
};


// 我方战斗机平台ID
static const int g_ZDJ_nPlatID[] =
{
    313, 314, 315, 316, 317, 38,
    39, 310, 312, 3, 34, 31, 35
};

extern uint8_t g_xk_control;

/*----------------------------------------------*
 * 全局枚举定义                                       *
 *----------------------------------------------*/
// 通讯目标单位
typedef enum
{
    WRJ_OBJECT,
    ZDJ_OBJECT,
    XTTC_OBJECT,
    XK_OBJECT,
    None_OBJECT,
}CommandObject;


typedef enum
{
    RECV_MSGTYPE_WRJ_ENTITY_POS,                        // 无人机自身位置信息
    RECV_MSGTYPE_XK_WRJ_CONTROL,                        // 显控发出无人机控制
    RECV_MSGTYPE_XK_WRJ_ROUTE,                          // 显控发出无人机航路
    RECV_MSGTYPE_ZDJ_ENTITY_POS,                        // 战斗机自身实时位置
    RECV_MSGTYPE_ZDJ_TRACK_REPORT,                      // 战斗机目标航迹
    DDS_MSGTYPE_RADAR_TRACK_REPORT,                     // 雷达模拟器目标航迹
    RECV_MSGTYPE_COR_TRACK_REPORT                       // 协同探测目标航迹
}MsgTypeAll;
    
// 导调DDS消息类型
typedef enum
{
    NET_MSGTYPE_PATH_CHANGE_REQ, //指挥引导  1:7
    NET_MSGTYPE_TRACK_REPORT,
    NET_MSGTYPE_UAV_CRETE_ENTITY = 10000, //创建无人机
    NET_MSGTYPE_FEIKONG = 9000,
}NetMsg;

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

/*----------------------------------------------*
 * 全局结构体定义                                      *
 *----------------------------------------------*/
#pragma pack(1)

// 位置2d
typedef struct
{
    double x;
    double y;
}vec2_t;

typedef union
{
    struct { double x, y, z; };
    struct { vec2_t xy; };
    struct { double _x; vec2_t yz; };
    double v[3];
}vec3_t;
#define VEC3(x, y, z) { { x, y, z } }

// 数据包头
typedef struct
{
    uint32_t packHead;
    uint32_t msgType;
    uint32_t packSize;
}package_head_t;

// WRJ控制权 非0为控制
typedef struct
{
    uint32_t id;
    uint8_t control;
}wrj_control_t;

// 无人机位置信息
typedef struct
{
    uint32_t id;
    uint8_t count;
    vec3_t *pos;
}wrj_route_t;

// ZDJ位置信息
typedef struct
{
    uint32_t id;
    vec2_t pos;// 经纬
    vec2_t velocity;// 速度
    double course_f;// 航向
}zdj_position_state_t;

// ZDJ编队实时位置姿态信息
typedef struct
{
    package_head_t packageHead;
    uint32_t timestamp;
    uint8_t count;
    zdj_position_state_t *pPositionState;
    uint32_t packTail;
}zdj_position_state_list_t;

// 目标实时位置
typedef struct
{
    uint32_t id;
    vec2_t pos;// 经纬
    double err;// 距离误差      
}zdj_target_pos_t;

// ZDJ目标实时航迹
typedef struct
{
    package_head_t packageHead;
    uint32_t timestamp;
    uint8_t count;
    zdj_target_pos_t *pTrackReport;
    uint32_t packTail;
}zdj_target_track_t;

// ZDJ目标信息
typedef struct
{
    uint32_t id;
    vec2_t pos;
    double noiseIntensity;  // 噪声强度
}target_position_state_t;

// 实体信息
typedef struct
{
    uint32_t id;
    uint16_t airSeaFlag;//空海标识
    uint16_t firendEnemyFlag;//敌我标识
    vec3_t pos;//位置信息
    vec3_t attitude;  //姿态角
}entity_state_t;//协同探测用

// ZDJ目标实时位置信息
typedef struct
{
    package_head_t packageHead;
    uint8_t count;
    target_position_state_t *pPositionState;
    uint32_t packTail;
}target_position_state_list_t;

// XTTC航迹点信息
typedef struct
{
    vec3_t pos;// 经纬高
    double headingAngle;// 航向角
}xttc_track_point_t;

// XTTC目标信息
typedef struct
{
    uint8_t type;
    double typeComfidence;// 类型置信度
    uint16_t ffAttriibute;// 敌我属性
    double rate;// 速率
    vec3_t velocity;// 速度x、y、z
    uint16_t trackID;// 航迹号
    uint8_t trackPointsCount;// 航迹点数量
    xttc_track_point_t *pTrackPoints;
}xttc_target_t;

// XTTC目标航迹
typedef struct
{
    package_head_t packageHead;
    uint32_t timestamp;
    uint8_t targetCount;
    xttc_target_t *pTargets;
    uint32_t packageTail;
}xttc_target_track_t;

// 数据接收结构体
typedef struct
{
    NetMsg eType;
    void* pBuf;          
}my_msg_t;
#pragma pack()

#endif // COMMONDEF_H

