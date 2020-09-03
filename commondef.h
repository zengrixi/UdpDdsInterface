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
 * 数据类型定义                                       *
 *----------------------------------------------*/
typedef signed char 		int8_t;		 
typedef unsigned char       uint8_t;   
typedef signed short        int16_t;
typedef unsigned short      uint16_t;
typedef signed int          int32_t;
typedef unsigned int        uint32_t;
typedef signed long long    int64_t;
typedef unsigned long long  uint64_t;

typedef unsigned char       u_char;                   // 类型兼容


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


/*----------------------------------------------*
 * 常量定义                                         *
 *----------------------------------------------*/
// 战斗机平台ID
static const int g_ZDJ_nPlatID[] = 
{
    313, 314, 315, 316, 317, 38, 
    39, 310, 312, 3, 34, 31, 35
};
// 战斗机目标PlatID
static const int g_ZDJ_TargetPlatID[] =
{
    114, 117, 115, 116, 110,
    112, 111, 113, 119, 118
};


/*----------------------------------------------*
 * 全局枚举定义                                       *
 *----------------------------------------------*/
// 通讯目标单位
typedef enum
{
    WRJ_OBJECT,
    ZDJ_OBJECT,
    XTTC_OBJECT,
    None_OBJECT,
}CommandObject;

typedef enum
{
    RECV_MSGTYPE_WRJ_ENTITY_POS,                        // 无人机自身位置信息
    RECV_MSGTYPE_ZDJ_ENTITY_POS,                        // 战斗机自身实时位置
    RECV_MSGTYPE_ZDJ_TRACK_REPORT,                      // 战斗机目标实时位置
    DDS_MSGTYPE_RADAR_TRACK_REPORT                      // 雷达模拟器目标航机
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
// 无人机位置
typedef struct
{
    int32_t lon;
    int32_t lat;
    int32_t alt;         
}wrj_pos_t;

// 无人机姿态
typedef struct
{
    int16_t yaw;
    int16_t pitch;
    int16_t roll;          
}wrj_attitude_t;

// 战斗机位置
typedef struct
{
    double lon_f;
    double lat_f;       
}zdj_pos_t;

// 战斗机速度
typedef struct
{
    double vel_x_f;// 速度x
    double vel_y_f;// 速度y      
}zdj_velocity_t;

// 数据包头
typedef struct
{
    uint32_t packHead;
    uint32_t msgType;
    uint32_t packSize;
}package_head_t;

// ZDJ位置信息
typedef struct
{
    uint32_t id;
    zdj_pos_t pos;// 经纬
    zdj_velocity_t velocity;// 速度
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
}ZDJPositionStateList;

// 航迹点
typedef struct
{
    uint32_t id;
    zdj_pos_t pos;// 经纬
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

// ZDJ初始位置姿态
typedef struct
{
    package_head_t packageHead;
    uint8_t count;
    zdj_position_state_t *pPositionState;
    uint32_t packTail;
}zdj_init_position_state_t;

// ZDJ目标信息
typedef struct
{
    uint32_t id;
    zdj_pos_t pos;
    double noiseIntensity;  // 噪声强度
}target_position_state_t;

// ZDJ目标实时位置信息
typedef struct
{
    package_head_t packageHead;
    uint8_t count;
    target_position_state_t *pPositionState;
    uint32_t packTail;
}target_position_state_t;

// 数据接收结构体
typedef struct
{
    NetMsg eType;
    void* pBuf;          
}my_msg_t;
#pragma pack()

#endif // COMMONDEF_H

