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

// 战斗机和目标的搜索范围
static double g_distance = 500.0;

class DataBase
{
    SINGLETON(DataBase)
public:
    // 实体毁伤状态枚举值
    typedef enum ENTITY_DAMAGE_STATE
    {
        DamageNone,
        DamageSlight,
        DamageModerate,
        DamageDestroyed,
    }ENTITY_DAMAGE_STATE_ENUM;

    bool recordEntity(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *pEntity);
    void releaseEntity(int key);
    void makeCopy(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT **dst, 
        const LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *src, bool bAllocated = false);
    void processRecvData(int nDataType, void *pData);
    void processMsg(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *pInstance);
    void processMsg(LHZS::SDI_TRACK_REPORT *pInstance);
    MY_MSG_STRU getMyMsg();
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *getEntityReport(int id);
    
private:
    DataBase();
    ~DataBase();

    // 用于存实体数据
    QMap<int, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *> _dbEntity;
    // 用于存接收到的消息类型
    QList<MY_MSG_STRU> _qListMyMsgs;
    QMutex _entityMutex;
    QMutex _msgMutex;
};

/*----------------------------------------------*
 * 全局函数定义                                       *
 *----------------------------------------------*/
extern float htonf(float hostfloat);
inline double radian(double d);
extern double getDistance(double lat1, double lng1, double lat2, double lng2);

void Recv_ZDJ_RealTimeLocation(UINT32 type, QDataStream &out);
void Recv_ZDJ_RealTimeLocationTarget(UINT32 type, QDataStream &out);

#endif // DATABASE_H
