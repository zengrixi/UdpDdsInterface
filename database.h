///////////////////////////////////////////////////////////////////////////////
//
// 版权声明： Copyright (c) 2020 曾日希. All rights reserved.
// 文件名称： database.h
// 文件摘要： 数据存储和处理
// 创建作者： 曾日希
// 创建时间： 2020-8-17
//
///////////////////////////////////////////////////////////////////////////////

#ifndef DATABASE_H
#define DATABASE_H

#include <QMap>
#include <QMutex>
#include <QFile>
#include "commondef.h"
#include "singleton.h"

#define PATH_CHANGE_REQ_COUNT 10// 航线的位置数量

typedef struct
{
    uint32_t count;
    vec3_t path[PATH_CHANGE_REQ_COUNT];   
}path_change_req_t;

class DataBase
{
    SINGLETON(DataBase)
public:
    // 实体毁伤状态枚举值
    typedef enum
    {
        DAMAGE_NONE,
        DAMAGE_SLIGHT,
        DAMAGE_MODERATE,
        DAMAGE_DESTROYED,
    }EntityDamageState;

    bool recordEntity(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *pEntity);
    void releaseEntity(int key);
    void recordPathChangeReq(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *p1, path_change_req_t *p2, uint32_t n);
    void makeCopy(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT **dst, 
        const LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *src, bool bAllocated = false);
    void processPathChange(WRJ_POSITIONSTATE_STRU *pData);
    void processPathChange(zdj_position_state_list_t *pData);
    void processRecvData(int nDataType, void *pData);
    my_msg_t getMyMsg();
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *getEntityReport(int id);
    
private:
    DataBase();
    ~DataBase();

    // 用于存实体数据
    QMap<int, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *> _dbEntity;
    QMap<uint32_t, path_change_req_t *> _wrjPathReq;
    QMap<uint32_t, path_change_req_t *> _wrjPathReq;
    // 用于存接收到的消息类型
    QList<my_msg_t> _qListMyMsgs;
    QMutex _entityMutex;
    QMutex _msgMutex;
};

/*----------------------------------------------*
 * 全局函数定义                                       *
 *----------------------------------------------*/
extern float htonf(float hostfloat);
inline double radian(double d);
extern double getDistance(double lat1, double lng1, double lat2, double lng2);

void Recv_ZDJ_RealTimeLocation(uint32_t type, QDataStream &out);
void Recv_ZDJ_RealTimeLocationTarget(uint32_t type, QDataStream &out);
void Recv_COR_TrackReport(uint32_t type, QDataStream &out);

#endif // DATABASE_H
