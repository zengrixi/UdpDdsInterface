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

class DataBase : public QObject
{
    Q_OBJECT
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
    void processTrackReport(zdj_target_track_t *pinstance);
    void processRecvData(int nDataType, void *pData);
    my_msg_t getMyMsg();
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *getEntityReport(int id);
    void sendTrack(int m_type,DDS_UnsignedShort);
    DDS_Long getStartTime(){return startTime;}
    void setStartTime(DDS_Long timeNow){startTime=timeNow;}
    void createTrack(int m_type);
private:
    DataBase(QObject *parent = Q_NULLPTR);
    ~DataBase();

    // 用于存实体数据
    QMap<int, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *> _dbEntity;
    QMap<uint32_t, path_change_req_t *> _wrjPathReq;
    QMap<uint32_t, path_change_req_t *> _zdjPathReq;
    // 用于存接收到的消息类型
    QList<my_msg_t> _qListMyMsgs;
    QMutex _entityMutex;
    QMutex _msgMutex;
    DDS_Long startTime;

    QMap<int,QMap<DDS_UnsignedShort,int> > trackPlatID;
    QMap<DDS_UnsignedShort,double> enemySpeed;//运动速度，key：platId
    QMap<DDS_UnsignedShort,int> entityType;//实体类型，key：platId
    QMap<DDS_UnsignedShort,QMap<unsigned short,unsigned long> > lastTimeMap;
    QMap<DDS_UnsignedShort,LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT> nowEntity;//实体当前状态，key：platId
    int trackIndex;
    int getEntityType(DDS_UnsignedShort platId);
};

/*----------------------------------------------*
 * 全局函数定义                                       *
 *----------------------------------------------*/

void Send_ASpaceX_WRJ_Route(vec3_t *pos, int n);

void Recv_ZDJ_RealTimeLocation(uint32_t type, QDataStream &out);
void Recv_ZDJ_RealTimeLocationTarget(uint32_t type, QDataStream &out);
void Recv_COR_TrackReport(uint32_t type, QDataStream &out);
void Recv_XK_WRJ_Control(uint32_t type, QDataStream &out);
void Recv_XK_WRJ_Route(uint32_t type, QDataStream &out);


#endif // DATABASE_H
