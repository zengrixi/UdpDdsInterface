#include "database.h"

#include <math.h>

DataBase::DataBase()
{
    
}

DataBase::~DataBase()
{
    
}

bool DataBase::recordEntity(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *pEntity)
{
    TestInfo(pEntity);
    
    QMap<int, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *>::iterator dbIterator;

    // 判断当实体死掉时，将其从库中删除
    if (pEntity->damageState == DamageDestroyed)
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
    switch (pEntity->platId)
    {
        case 4:
        case 41:
        case 61:
        {
        }

        default:
        {
            break;
        }
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
void DataBase::makeCopy(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT **dst,
     const LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *src, bool bAllocated)
{
    if (bAllocated)
    {
        *dst = LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTTypeSupport::create_data();
    }
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTTypeSupport::copy_data(*dst, src);
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
    if ((Q_NULLPTR == pData) || (0 > nDataType))
    {
        return;
    }
    switch (nDataType)
    {
        case Recv_MsgType_WRJ_Entity_Pos:
        {
            WRJ_POSITION_STATE_STRU *pInstance = (WRJ_POSITION_STATE_STRU *)pData;
            int nCount = (pInstance->packgeLen-2) / 21;
            for (int i = 0; i < nCount; i++)
            {
                LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *pPathChangeReq =
                LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQTypeSupport::create_data();
                // 无人机平台ID
                pPathChangeReq->platId = 4;
                
                // 拷贝无人机编队到seq队列
                int nLength = 1;
                LHZS::VRFORCE_COMMAND::POS_DATA posDatas[nLength];
                posDatas[0].lon_f = pInstance->pDataFrame[i].pos.lon / pow(10, 7);
                posDatas[0].lat_f = pInstance->pDataFrame[i].pos.lat / pow(10, 7);
                posDatas[0].alt_f = pInstance->pDataFrame[i].pos.alt / 100.0;
             
                LHZS::VRFORCE_COMMAND::POS_DATASeq_from_array(&pPathChangeReq->PosList, posDatas, nLength);
                processMsg(pPathChangeReq);
            }
            break;
        }
        case Recv_MsgType_ZDJ_Entity_Pos :
        {
            ZDJ_POSITION_STATE_LIST_STRU *pInstance =
            (ZDJ_POSITION_STATE_LIST_STRU *)pData;
            
            // 将战斗机信息更新到导调
            for (int i = 0; i < pInstance->count; i++)
            {
                LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *pPathChangeReq =
                LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQTypeSupport::create_data();

                // 拷贝战斗机编队信息
                int nLength = 1;
                LHZS::VRFORCE_COMMAND::POS_DATA posDatas[nLength];
                pPathChangeReq->platId = pInstance->pPositionState[i].id;
                posDatas[0].alt_f = 0;
                posDatas[0].lat_f = pInstance->pPositionState[i].pos.lat_f;
                posDatas[0].lon_f = pInstance->pPositionState[i].pos.lon_f;
                LHZS::VRFORCE_COMMAND::POS_DATASeq_from_array(&pPathChangeReq->PosList, posDatas, nLength);
                processMsg(pPathChangeReq);
            }
            break;
        }
        case Recv_MsgType_ZDJ_TrackReport :
        {
            /* comment by 曾日希, 2020-08-30, Mantis号:s, 原因:航迹发送待续. */
            break;
        }
        // 从DDS接收雷达模拟器的目标航迹
        case DDS_MsgType_Radar_TrackReport :
        {
            LHZS::SDI_TRACK_REPORT *pTrackReport =
            LHZS::SDI_TRACK_REPORTTypeSupport::create_data();
            LHZS::SDI_TRACK_REPORTTypeSupport::copy_data(pTrackReport, (LHZS::SDI_TRACK_REPORT *)pData);
            processMsg(pTrackReport);
            /* comment by 曾日希, 2020-08-24, Mantis号:s, 原因:打印测试. */
            TestInfo(pTrackReport);
            break;
        }

        default:
            break;
    }
}

void DataBase::processMsg(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *pInstance)
{
    if (Q_NULLPTR == pInstance)
    {
        return;
    }
    MY_MSG_STRU stMsg;
    stMsg.eType = NET_MsgType_PathChangeReq;
    stMsg.pBuf = pInstance;
    _msgMutex.lock();
    _qListMyMsgs.push_back(stMsg);
    _msgMutex.unlock();
}

void DataBase::processMsg(LHZS::SDI_TRACK_REPORT *pInstance)
{
    if (Q_NULLPTR == pInstance)
    {
        return;
    }
    MY_MSG_STRU stMsg;
    stMsg.eType = NET_MsgType_TrackReport;
    stMsg.pBuf = pInstance;
    _msgMutex.lock();
    _qListMyMsgs.push_back(stMsg);
    _msgMutex.unlock();
}

MY_MSG_STRU DataBase::getMyMsg()
{
    MY_MSG_STRU stMsg;
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
    QMap <int, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *>::iterator dbIterator;
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
    typedef union _BYTEORDER
    {
        float fTemp;
        UINT8 szTemp[4];
    }BYTEORDER;
    UINT8 chTemp;
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
    return d * PI / 180.0;
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

void Recv_ZDJ_RealTimeLocation(UINT32 type, QDataStream &out)
{
    u_char count;
    ZDJ_POSITION_STATE_LIST_STRU instance;
    ZDJ_POSITION_STATE_STRU *p;

    out >> instance.timestamp;
    out >> count;
    
    instance.count = count;
    instance.pPositionState = Q_NULLPTR;
    
    if ( count )
    {
        instance.pPositionState =
        (ZDJ_POSITION_STATE_STRU *)malloc(sizeof(ZDJ_POSITION_STATE_STRU)*count);
    }

    p = instance.pPositionState;

    while ( count-- )
    {
        out.readRawData((char *) &(p->id), 4);
        out.readRawData((char *) &(p->pos.lon_f), 8);
        out.readRawData((char *) &(p->pos.lat_f), 8);
        out.readRawData((char *) &(p->velocity.vel_x_f), 8);
        out.readRawData((char *) &(p->velocity.vel_y_f), 8);
        out.readRawData((char *) &(p->course_f), 8);
        p++;
    }

    DataBase::instance().processRecvData(type, &instance);
    
    // 在处理消息后直接释放内存
    if ( instance.pPositionState )
    {
        free(instance.pPositionState);
    }
}

void Recv_ZDJ_RealTimeLocationTarget(UINT32 type, QDataStream &out)
{
    u_char count;
    ZDJ_TARGET_TRACK_LIST_STRU instance;
    ZDJ_TARGET_POS_STRU *p;

    out >> instance.timestamp;
    out >> count;

    instance.count = count;
    instance.pTrackReport = Q_NULLPTR;
    
    if ( count )
    {
        instance.pTrackReport = 
        (ZDJ_TARGET_POS_STRU *)malloc(sizeof(ZDJ_TARGET_POS_STRU)*count);
    }
    
    p = instance.pTrackReport;

    while ( count-- )
    {
        out.readRawData((char *) &(p->id), 4);
        out.readRawData((char *) &(p->pos.lon_f), 8);
        out.readRawData((char *) &(p->pos.lat_f), 8);
        out.readRawData((char *) &(p->err), 8);
        p++;
    }

    DataBase::instance().processRecvData(type, &instance);
    
    if ( instance.pTrackReport )
    {
        free(instance.pTrackReport);
    }
}
