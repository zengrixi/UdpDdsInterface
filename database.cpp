#include "database.h"

#include <math.h>

uint8_t g_xk_control = 0;

#define processMsg(p, t)                                \
    do                                                  \
    {                                                   \
        my_msg_t stMsg;                                 \
        stMsg.eType = t;                                \
        stMsg.pBuf = p;                                 \
        _msgMutex.lock();                               \
        _qListMyMsgs.push_back(stMsg);                  \
        _msgMutex.unlock();                             \
    } while ( 0 );


DataBase::DataBase()
{
    startTime=0;
    currentTime=0;
}

DataBase::~DataBase()
{
    
}

bool DataBase::recordEntity(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *pEntity)
{  
    QMap<int, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *>::iterator dbIterator;

    // 判断当实体死掉时，将其从库中删除
    if (pEntity->damageState == DAMAGE_DESTROYED)
    {
        _entityMutex.lock();
        dbIterator = _dbEntity.find(pEntity->platId);
        if (dbIterator != _dbEntity.end())
        {
            releaseEntity(dbIterator.key());
            _dbEntity.erase(dbIterator);
        }
        _entityMutex.unlock();
        return false;
    }

    // 判断平台id后对实体进行处理
    for (int i = 0; i < ARRAY_SIZE(g_ZDJ_TargetPlatID); i++)
    {
        if (pEntity->platId == g_ZDJ_TargetPlatID[i])
            TestInfo(pEntity);
    }

    // 对实体进行存储
    // 如果库中有该实体则更新，否则新增
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *pEntityCopy = Q_NULLPTR;
    _entityMutex.lock();
    dbIterator = _dbEntity.find(pEntity->platId);
    if (dbIterator != _dbEntity.end())
    {
        releaseEntity(dbIterator.key());
        _dbEntity.erase(dbIterator);
    }
    makeCopy(&pEntityCopy, pEntity, true);
    if(startTime==0)startTime=pEntityCopy->timeOfUpdate;
    currentTime=pEntityCopy->timeOfUpdate;
    _dbEntity.insert(pEntity->platId, pEntityCopy);
    _entityMutex.unlock();
    return true;
}

/*****************************************************************************
 * 函 数 名  : DataBase.releaseEntity
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月22日
 * 函数功能  : 根据传入的key删除并析构对应的实体
 * 输入参数  : int key  存储实体Map的key
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void DataBase::releaseEntity(int key)
{
    if ( !_dbEntity.contains(key) )
    {
        return;
    }
    
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT **pFree = (&_dbEntity[key]);
    
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTTypeSupport::delete_data(*pFree);
}

/*****************************************************************************
 * 函 数 名  : DataBase.makeCopy
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月22日
 * 函数功能  : 实体对象的拷贝
 * 输入参数  : LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT **dst       指向对象指针的地址
               const LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *src  源对象的地址
               bool bAllocated                                      是否需要分配内存
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void DataBase::makeCopy
    (LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT **dst
    , const LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *src
    , bool bAllocated)
{
    if (bAllocated)
    {
        *dst = LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTTypeSupport::create_data();
    }
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTTypeSupport::copy_data(*dst, src);
}


/*****************************************************************************
 * 函 数 名  : DataBase.recordPathChangeReq
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年9月12日
 * 函数功能  : 将已经存储的实体路径转成DDS路径信息发出           
 * 输入参数  : LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *p1  将通过DDS发出的路径结构
               path_change_req_t *p2                       已存储路径结构
               uint32_t n                                  路径数量
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void DataBase::recordPathChangeReq
    (LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *p1
    , path_change_req_t *p2
    , uint32_t n)
{
    uint32_t i;
    LHZS::VRFORCE_COMMAND::POS_DATA posDatas[n];
    
    for (i = 0; i < n; i++)
    {
        posDatas[i].lon_f = p2->path[i].x;
        posDatas[i].lat_f = p2->path[i].y;
        posDatas[i].alt_f = p2->path[i].z;
    }
    
    LHZS::VRFORCE_COMMAND::POS_DATASeq_from_array
    (&p1->PosList, posDatas, n);
}


void DataBase::processPathChange(WRJ_POSITIONSTATE_STRU *pInstance)
{
    uint32_t i, id, n;
    path_change_req_t *p;
    LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *pPathChangeReq;
    QMap<uint32_t, path_change_req_t *>::iterator it;

    id = 41;// 目前为固定一个
    it = _wrjPathReq.find(id);
    if ( it != _wrjPathReq.end() )
    {
        p = it.value();
    }
    else
    {
        p = (path_change_req_t *) malloc(sizeof(path_change_req_t));
        p->count = 0;
        _wrjPathReq.insert(id, p);
    }

    n = p->count;
    if ( n < PATH_CHANGE_REQ_COUNT )
    {
        p->path[n].x = pInstance->Lon;
        p->path[n].y = pInstance->Lat;
        p->path[n].z = pInstance->Alt;
        p->count++;
    }
    else
    {
        p->count = 0;
        
        pPathChangeReq = LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQTypeSupport::create_data();
        pPathChangeReq->platId = id;
        
        recordPathChangeReq(pPathChangeReq, p, n);
        
        processMsg(pPathChangeReq, NET_MSGTYPE_PATH_CHANGE_REQ);
    }
}


void DataBase::processPathChange(zdj_position_state_list_t *pInstance)
{
    int i, j;
    uint32_t id, n;
    path_change_req_t *p;
    LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *pPathChangeReq;
    QMap<uint32_t, path_change_req_t *>::iterator it;

    for (i = 0; i < pInstance->count; i++)
    {
        id = pInstance->pPositionState[i].id;
        it = _wrjPathReq.find(id);
        if ( it != _wrjPathReq.end() )
        {
            p = it.value();
        }
        else
        {
            p = (path_change_req_t *)malloc(sizeof(path_change_req_t));
            p->count = 0;
            _wrjPathReq.insert(id, p);
        }

        n = p->count;
        if ( n < PATH_CHANGE_REQ_COUNT )
        {
            p->path[n].x = pInstance->pPositionState[i].pos.x;
            p->path[n].y = pInstance->pPositionState[i].pos.y;
            p->count++;
        }
        else
        {
            p->count = 0;
            
            pPathChangeReq = LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQTypeSupport::create_data();
            pPathChangeReq->platId = id;
            
            recordPathChangeReq(pPathChangeReq, p, n);
            
            processMsg(pPathChangeReq, NET_MSGTYPE_PATH_CHANGE_REQ);
        }
    }


}


/*****************************************************************************
 * 函 数 名  : DataBase.processRecvData
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月17日
 * 函数功能  : 将Socket协议接收到的数据转成DDS消息队列
 * 输入参数  : int nDataType  协议类型
               void *pData   数据指针
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void DataBase::processRecvData(int nDataType, void *pData)
{
    int i;
    uint8_t n;
    
    if ( !pData || (0 > nDataType) )
    {
        return;
    }
    
    switch (nDataType)
    {
        case RECV_MSGTYPE_WRJ_ENTITY_POS:
        {
            processPathChange((WRJ_POSITIONSTATE_STRU *) pData);
            break;
        }
        case RECV_MSGTYPE_ZDJ_ENTITY_POS :
        {
            processPathChange((zdj_position_state_list_t *) pData);
            break;
        }
        case RECV_MSGTYPE_ZDJ_TRACK_REPORT :
        {
            /* comment by 曾日希, 2020-08-30, Mantis号:s, 原因:航迹发送待续. */
            break;
        }
        // 从DDS接收雷达模拟器的目标航迹
        case DDS_MSGTYPE_RADAR_TRACK_REPORT :
        {
            LHZS::SDI_TRACK_REPORT *pTrackReport =
            LHZS::SDI_TRACK_REPORTTypeSupport::create_data();
            
            LHZS::SDI_TRACK_REPORTTypeSupport::copy_data
            (pTrackReport, (LHZS::SDI_TRACK_REPORT *)pData);
            
            processMsg(pTrackReport, NET_MSGTYPE_TRACK_REPORT);
            
            TestInfo(pTrackReport);
            break;
        }
        case RECV_MSGTYPE_COR_TRACK_REPORT :
        {
            xttc_target_track_t *pInstance =
            (xttc_target_track_t *)pData;
            xttc_target_t *p;

            n = pInstance->targetCount;

            while ( n-- )
            {
                LHZS::SDI_TRACK_REPORT *pTrackReport =
                LHZS::SDI_TRACK_REPORTTypeSupport::create_data();

                p = pInstance->pTargets;

                pTrackReport->time_of_update_ul = pInstance->timestamp;
                pTrackReport->target_attribute_data.target_type_e = p->type;
                // ...

                p++;

                processMsg(pTrackReport, NET_MSGTYPE_TRACK_REPORT);
            }
            
            break;
        }
#if 0
        case RECV_MSGTYPE_XK_WRJ_ROUTE :
        {
            uint32_t i;
            LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *p1;
            wrj_route_t *p2;

            n = p2->count;
            
            LHZS::VRFORCE_COMMAND::POS_DATA posDatas[n];
            
            for (i = 0; i < n; i++)
            {
                posDatas[i].lon_f = p2->pos[i].x;
                posDatas[i].lat_f = p2->pos[i].y;
                posDatas[i].alt_f = p2->pos[i].z;
            }
            
            LHZS::VRFORCE_COMMAND::POS_DATASeq_from_array
            (&p1->PosList, posDatas, n);

            processMsg(p1, NET_MSGTYPE_PATH_CHANGE_REQ);
            break;
        }
#endif

        default:
            break;
    }
}


my_msg_t DataBase::getMyMsg()
{
    my_msg_t stMsg;
    stMsg.pBuf = Q_NULLPTR;

    _msgMutex.lock();
    if (_qListMyMsgs.size() > 0)
    {
        stMsg = _qListMyMsgs.front();
        _qListMyMsgs.pop_front();
    }
    _msgMutex.unlock();
    return stMsg;
}

LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *DataBase::getEntityReport(int id)
{
    QMap<int, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *>::iterator dbIterator;
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *pEntityCopy = Q_NULLPTR;
    _entityMutex.lock();
    dbIterator = _dbEntity.find(id);
    if (dbIterator != _dbEntity.end())
    {
        pEntityCopy = dbIterator.value();
    }
    _entityMutex.unlock();
    return pEntityCopy;
}

/*****************************************************************************
 * 函 数 名  : htonf
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月25日
 * 函数功能  : 浮点型大小端转换
 * 输入参数  : float hostfloat  待转换数据
 * 输出参数  : 无
 * 返 回 值  : float
*****************************************************************************/
float htonf(float hostfloat)
{
    typedef union
    {
        float fTemp;
        uint8_t szTemp[4];
    }BYTEORDER;
    uint8_t chTemp;
    BYTEORDER uniByteOrder;
    uniByteOrder.fTemp = hostfloat;
    
    chTemp = uniByteOrder.szTemp[0];
    uniByteOrder.szTemp[0] = uniByteOrder.szTemp[3];
    uniByteOrder.szTemp[3] = chTemp;

    chTemp = uniByteOrder.szTemp[1];
    uniByteOrder.szTemp[1] = uniByteOrder.szTemp[2];
    uniByteOrder.szTemp[2] = chTemp;

    return uniByteOrder.fTemp;
}

// 求弧度
double radian(double d)
{
    // 角度1˚ = π / 180
    return d / 180 * PI;
}

double angle(double d)
{
    return d * 180 / PI;
}

/*****************************************************************************
 * 函 数 名  : getDistance
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月26日
 * 函数功能  : 根据两点经纬度计算距离
 * 输入参数  : double lat1
               double lng1
               double lat2
               double lng2
 * 输出参数  : 无
 * 返 回 值  : double
*****************************************************************************/
double getDistance(double lat1, double lng1, double lat2, double lng2)
{
    double radLat1 = radian(lat1);
    double radLat2 = radian(lat2);
    double a = radLat1 - radLat2;
    double b = radian(lng1) - radian(lng2);

    double dst = 2 * asin((sqrt(pow(sin(a / 2), 2) + cos(radLat1) * cos(radLat2) * pow(sin(b / 2), 2) )));

    dst = dst * EARTH_RADIUS;
    dst = round(dst * 10000) / 10000;

    return dst;// 单位：公里
}


vec2_t radian2Angle(vec2_t lonlat)
{
    vec2_t v;

    v.x = angle(lonlat.x);
    v.y = angle(lonlat.y);

    return v;
}


vec2_t angle2Radian(vec2_t lonlat)
{
    vec2_t v;

    v.x = radian(lonlat.x);
    v.y = radian(lonlat.y);

    return v;
}


vec2_t lonLat2Morcator(vec2_t lonlat)
{
    vec2_t mercator;

    mercator.x = lonlat.x * 20037508.342789 / 180;
    mercator.y = log(tan((90 + lonlat.y) * PI / 360)) / (PI / 180);
    mercator.y = (double) (mercator.y * 20037508.342789 / 180);

    return mercator;
}


vec2_t mercator2LonLat(vec2_t mercator)
{
    vec2_t lonlat;

    lonlat.x =   (mercator.x / 20037508.342789 * 180);
	lonlat.y =  (mercator.y / 20037508.342789 * 180);
	lonlat.y = (double) (180 / PI * (2 * atan(exp(lonlat.y * PI / 180)) - PI / 2));

    return lonlat;
}

/*****************************************************************************
 * 函 数 名  : Send_ASpaceX_WRJ_Route
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年9月16日
 * 函数功能  : 发送航路到无人机
 * 输入参数  : vec3_t *pos  航路信息
               int n        数量
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void Send_ASpaceX_WRJ_Route(vec3_t *pos, int n)
{
    int i;
    WayPoint_Struct way[n];
    vec2_t v;
    
    for (i = 0; i < n; i++)
    {
        v = radian2Angle(pos[i].xy);
        
        way[i].Lon = v.x;
        way[i].Lat = v.y;
        way[i].Lon = pos[i].z;
    }
    WRJ_Module::instance().WRJ_send_TrackDataPacket(way, n);
}


void Recv_ZDJ_RealTimeLocation(uint32_t type, QDataStream &out)
{
    u_char count;
    zdj_position_state_list_t instance;
    zdj_position_state_t *p;

    out >> instance.timestamp;
    out >> count;
    
    instance.count = count;
    instance.pPositionState = Q_NULLPTR;
    
    if ( count )
    {
        instance.pPositionState =
        (zdj_position_state_t *)malloc(sizeof(zdj_position_state_t)*count);
    }

    p = instance.pPositionState;

    while ( count-- )
    {
        out.readRawData((char *) &(p->id), sizeof(p->id));
        out.readRawData((char *) &(p->pos.x), sizeof(p->pos.x));
        out.readRawData((char *) &(p->pos.y), sizeof(p->pos.y));
        out.readRawData((char *) &(p->velocity.x), sizeof(p->velocity.x));
        out.readRawData((char *) &(p->velocity.y), sizeof(p->velocity.y));
        out.readRawData((char *) &(p->course_f), sizeof(p->course_f));
        p++;
    }

    DataBase::instance().processRecvData(type, &instance);
    
    // 在处理消息后直接释放内存
    if ( instance.pPositionState )
    {
        free(instance.pPositionState);
    }
}


void Recv_ZDJ_RealTimeLocationTarget(uint32_t type, QDataStream &out)
{
    u_char count;
    zdj_target_track_t instance;
    zdj_target_pos_t *p;

    out >> instance.timestamp;
    out >> count;

    instance.count = count;
    instance.pTrackReport = Q_NULLPTR;
    
    if ( count )
    {
        instance.pTrackReport = 
        (zdj_target_pos_t *)malloc(sizeof(zdj_target_pos_t)*count);
    }
    
    p = instance.pTrackReport;

    while ( count-- )
    {
        out.readRawData((char *) &(p->id), sizeof(p->id));
        out.readRawData((char *) &(p->pos.x), sizeof(p->pos.x));
        out.readRawData((char *) &(p->pos.y), sizeof(p->pos.y));
        out.readRawData((char *) &(p->err), sizeof(p->err));
        p++;
    }

    DataBase::instance().processRecvData(type, &instance);
    
    if ( instance.pTrackReport )
    {
        free(instance.pTrackReport);
    }
}


/*****************************************************************************
 * 函 数 名  : Recv_COR_TrackReport
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年9月9日
 * 函数功能  : 协同探测消息处理
 * 输入参数  : uint32_t type     消息类型
               QDataStream &out  消息流
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void Recv_COR_TrackReport(uint32_t type, QDataStream &out)
{
    uint8_t count, n;
    xttc_target_track_t instance;
    xttc_target_t *ptargets;
    xttc_track_point_t *ptrackPoints;

    out >> instance.timestamp;
    out >> count;

    instance.targetCount = count;
    instance.pTargets = Q_NULLPTR;

    if ( count )
    {
        instance.pTargets =
        (xttc_target_t *)malloc(sizeof(xttc_target_t) * count);
    }

    ptargets = instance.pTargets;

    while ( count-- )
    {
        out.readRawData((char *) &(ptargets->type), sizeof(ptargets->type));
        out.readRawData((char *) &(ptargets->typeComfidence), sizeof(ptargets->typeComfidence));
        out.readRawData((char *) &(ptargets->ffAttriibute), sizeof(ptargets->ffAttriibute));
        out.readRawData((char *) &(ptargets->rate), sizeof(ptargets->rate));
        out.readRawData((char *) &(ptargets->velocity), sizeof(ptargets->velocity));
        out.readRawData((char *) &(ptargets->trackID), sizeof(ptargets->trackID));
        out.readRawData((char *) &(n), sizeof(n));

        // 取出目标的航迹点信息
        ptargets->trackPointsCount = n;
        ptargets->pTrackPoints = Q_NULLPTR;

        if ( n )
        {
            ptargets->pTrackPoints = 
            (xttc_track_point_t *)malloc(sizeof(xttc_track_point_t) * n);
        }

        ptrackPoints = ptargets->pTrackPoints;

        while ( n-- )
        {
            out.readRawData((char *) &(ptrackPoints->pos.x), sizeof(ptrackPoints->pos.x));
            out.readRawData((char *) &(ptrackPoints->pos.y), sizeof(ptrackPoints->pos.y));
            out.readRawData((char *) &(ptrackPoints->pos.z), sizeof(ptrackPoints->pos.z));
            out.readRawData((char *) &(ptrackPoints->headingAngle), sizeof(ptrackPoints->headingAngle));
            ptrackPoints++;
        }

        ptargets++;
    }

    DataBase::instance().processRecvData(type, &instance);

    if ( instance.pTargets )
    {
        n = instance.targetCount;
        ptargets = instance.pTargets;
        
        while ( n-- )
        {
            if ( ptargets->pTrackPoints )
            {
                free(ptargets->pTrackPoints);
            }
            ptargets++;
        }
        
        free(instance.pTargets);
    }
}


void Recv_XK_WRJ_Control(uint32_t type, QDataStream &out)
{
    uint32_t id;
    uint8_t control;

    out >> id;
    out >> control;

    if ( WRJStationCtrlID == id )///shi修改 待确认
    {
        g_xk_control = control;
    }

    //向地面站发送控制权夺取或者释放命令？？？
    if(!g_xk_control)
        WRJ_Module::instance().WRJ_release_CtrlAuthority();
    else
        WRJ_Module::instance().WRJ_get_CtrlAuthority();
}


void Recv_XK_WRJ_Route(uint32_t type, QDataStream &out)
{
    uint8_t count;
    wrj_route_t route;
    vec3_t *pos;
    
    if ( !g_xk_control )
    {
        return;
    }

    out >> route.id;
    out >> count;
    
    route.count = count;
    route.pos = Q_NULLPTR;
    if ( count )
    {
        route.pos = (vec3_t *) malloc(sizeof(vec3_t) * count);
    }

    pos = route.pos;

    while ( count-- )
    {
        out.readRawData((char *) &(pos->x), sizeof(pos->x));
        out.readRawData((char *) &(pos->y), sizeof(pos->y));
        out.readRawData((char *) &(pos->z), sizeof(pos->z));
        pos++;
    }

    Send_ASpaceX_WRJ_Route(route.pos, route.count);
    
    if ( route.pos )
    {
        free(route.pos);
    }
}
