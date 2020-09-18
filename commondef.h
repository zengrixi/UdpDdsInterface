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

static QMap<int,QMap<int,double> > detectRangeMap;//探测距离
static unsigned short leaderFighterID;    //战斗机长机ID
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


extern uint8_t g_xk_control;// xk获取无人机控制权


/*-------------发送航迹用，接入mds后删除---------------*/
//日期类
struct DATE_OF_DATA
{
    unsigned short year_uh;
    unsigned short month_uh;
    unsigned short day_uh;
};

struct TARGET_ATTRIBUTE_DATA
{
    unsigned short                  conflict_flag_uh[4];            //@key
    unsigned short                  target_type_e;                  //空海类型
    unsigned short                  JEM_type_e;                     //微动特性
    unsigned short                  identification_e;               //敌我属性
    double                          ident_confidence_f;             //敌我属性置信度
    unsigned short                  civil_military_e;               //军民属性
    double                          civil_military_conf_f;          //军民属性置信度
    unsigned short                  target_class_e;                 //目标类型
    double                          class_confidence_f;             //目标类型置信度
    unsigned short                  target_model_e;                 //目标型号 0未定义 eg.F16
    double                          model_confidence_f;             //目标型号置信度
    unsigned short                  target_nation_e;                //目标国籍 0未定义 eg.中国
    double                          nation_confidence_f;            //目标国籍置信度
    unsigned short                  target_rcs_e;                   //目标rcs 0未定义 eg.大中小
    double                          rcs_confidence_f;               //目标rcs置信度
};

//实体类接口
struct ENTITYSTATE_REPORT
{
    unsigned short entityID;
    char entityName[32];
    unsigned short entityIFFCode;
    unsigned short entityClass;
    unsigned short entityModel;
    char entityType[32];
    DATE_OF_DATA dateOfUpdate;
    long timeOfUpdate;
    long damageState;
    double oil;
    double geodeticLocationLon;
    double geodeticLocationLat;
    double geodeticLocationAlt;
    double topographicVelocityX;
    double topographicVelocityY;
    double topographicVelocityZ;
    double topographicAccelerationX;
    double topographicAccelerationY;
    double topographicAccelerationZ;
    double topographicPsi;
    double topographicTheta;
    double topographicPhi;
    double rotationalVelocityX;
    double rotationalVelocityY;
    double rotationalVelocityZ;
    unsigned short sizeOfGroup;//编队内个数
    unsigned short platId;//平台标识号
};
struct GEOGRAPHIC_POSITION                          //地理坐标
{
    double              lon_f;                      //@key //弧度 范围-pi~0  西经， 0-pi 东经
    double              lat_f;                      //弧度 范围-pi/2~0南纬， 0-pi/2北纬
    double              alt_f;                      //单位：m
};

struct PLATFORM_VELOCITY                            //平台速度(以平台为中心)
{
    double              platform_vx_f;              //@key  // m/s
    double              platform_vy_f;              // m/s
    double              platform_vz_f;              // m/s
};

struct SDI_TRACK_REPORT
 {
     unsigned long                   platform_id_ul;                  //@key *//预警机平台1X 无人机(ISAR)2X 无人机(雷达)3X 战斗机4X
     unsigned long                   sdi_track_number_ul;             //*航迹号 4位
     unsigned short                  radar_track_number_uh;           //radar航迹号
     unsigned short                  ssr_track_number_uh;             //SSR航迹号
     unsigned short                  esm_target_number_uh;            //ESM航迹号
     unsigned short                  csm_target_number_uh;            //CSM航迹号
     unsigned short                  ir_target_number_uh;             //IR航迹号
     unsigned long                   icao_addr_ul;                    //ADS-B icao地址
     unsigned long                   ais_mmsi_ul;                     //AIS用户标识码
     char                            call_sign_c[16];                 //AIS呼号
     unsigned short                  net_obj_addr_uh;
     unsigned short                  track_status_e;                  //航迹状态，0未定义 1起始 2更新
     unsigned short                  track_quality_uh;                //航迹质量1~15
     unsigned short                  track_source_e;                  //基础航迹源
     GEOGRAPHIC_POSITION             target_geo_position;             //*目标位置
     PLATFORM_VELOCITY               target_velocity;                 //*目标速度
     double                          speed_f;                         //*目标速度标量
     double                          heading_f;                       //*航向0~360，相对正北
     unsigned short                  mission_type_e;                  //任务类型 eg.拦截，攻击
     unsigned short                  threat_level_e;                  //威胁等级，
     unsigned short                  formation_size_uh;               //编队中飞机数目
     unsigned short                  maneuver_indicator_e;            //机动标识，0未定义 1机动 2非机动
     unsigned long                   time_of_update_ul;               //*时间（当天0点起总的毫秒时）
     TARGET_ATTRIBUTE_DATA           target_attribute_data;           //目标属性信息
     char                            spare_c[24];
 };
/*-------------发送航迹用，接入mds后删除---------------*/

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
typedef union
{
    struct { double x, y; };
    double v[2];
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

