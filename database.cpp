
#include "database.h"

// 实体毁伤状态枚举值
enum EntityDamageState
{
    DamageNone,
    DamageSlight,
    DamageModerate,
    DamageDestroyed
};

DataBase::DataBase()
{
    _entityInfoFile_.setFileName("entityinfo.txt");
    _entityInfoFile_.open(QIODevice::WriteOnly | QIODevice::Text);
}

DataBase::~DataBase()
{
    _entityInfoFile_.close();
}

bool DataBase::recordEntity(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT * entity)
{
    QMap <int, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *>::iterator dbIterator;

    // 判断当实体死掉时，将其从库中删除
    if (entity->damageState == DamageDestroyed)
    {
        _mutex.lock();
        dbIterator = _dbEntity.find(entity->platId);
        if (dbIterator != _dbEntity.end())
        {
            releaseEntity(dbIterator.key());
            _dbEntity.erase(dbIterator);
        }
        _mutex.unlock();
        return false;
    }

    // 判断平台id后对实体进行处理
    switch (entity->platId)
    {
        case 4:
        case 41:
        case 61:
            {
            }

        default:
            {
                writeFile(entity);
                break;
            }
    }

    // 对实体进行存储
    // 如果库中有该实体则更新，否则新增
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT * pEntityCopy = nullptr;
    _mutex.lock();
    dbIterator = _dbEntity.find(entity->platId);
    if (dbIterator != _dbEntity.end())
    {
        releaseEntity(dbIterator.key());
        _dbEntity.erase(dbIterator);
    }
    makeCopy(&pEntityCopy, entity, true);
    _dbEntity.insert(entity->platId, pEntityCopy);
    _mutex.unlock();
    return true;
}

bool DataBase::releaseEntity(int key)
{
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT * *pFree = (&_dbEntity[key]);
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTTypeSupport::delete_data(*pFree);
}

void DataBase::makeCopy(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT * *dst,
     const LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT * src, bool bAllocated)
{
    if (bAllocated)
    {
        *dst = LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTTypeSupport::create_data();
    }
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTTypeSupport::copy_data(*dst, src);
}

void DataBase::writeFile(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT * entity)
{
    QString sEntityName(QByteArray(entity->entityName, 32));
    QString sEntityType(QByteArray(entity->entityType, 32));
    QStringList sEntityState;

    sEntityState
    << QString("entityID : %1\n").arg(entity->entityID)
    << QString("entityName : %1\n").arg(sEntityName)
    << QString("entityIFFCode : %1\n").arg(entity->entityIFFCode)
    << QString("entityClass : %1\n").arg(entity->entityClass)
    << QString("entityModel : %1\n").arg(entity->entityModel)
    << QString("entityType : %1\n").arg(sEntityType)
    << QString("timeOfUpdate : %1\n").arg(entity->timeOfUpdate)
    << QString("damageState : %1\n").arg(entity->damageState)
    << QString("geodeticLocationLon : %1\n").arg(entity->geodeticLocationLon)
    << QString("geodeticLocationLat : %1\n").arg(entity->geodeticLocationLat)
    << QString("geodeticLocationAlt : %1\n").arg(entity->geodeticLocationAlt)
    << QString("topographicVelocityX : %1\n").arg(entity->topographicVelocityX)
    << QString("topographicVelocityY : %1\n").arg(entity->topographicVelocityY)
    << QString("topographicVelocityZ : %1\n").arg(entity->topographicVelocityZ)
    << QString("topographicAccelerationX : %1\n").arg(entity->topographicAccelerationX)
    << QString("topographicAccelerationY : %1\n").arg(entity->topographicAccelerationY)
    << QString("topographicAccelerationZ : %1\n").arg(entity->topographicAccelerationZ)
    << QString("topographicPsi : %1\n").arg(entity->topographicPsi)
    << QString("topographicTheta : %1\n").arg(entity->topographicTheta)
    << QString("topographicPhi : %1\n").arg(entity->topographicPhi)
    << QString("rotationalVelocityX : %1\n").arg(entity->rotationalVelocityX)
    << QString("rotationalVelocityY : %1\n").arg(entity->rotationalVelocityY)
    << QString("rotationalVelocityZ : %1\n").arg(entity->rotationalVelocityZ)
    << QString("sizeOfGroup : %1\n").arg(entity->sizeOfGroup)
    << QString("platId : %1\n\n\n").arg(entity->platId);
    foreach (QString msg, sEntityState)
    {
        _mutex.lock();
        _entityInfoFile_.write(msg.toUtf8());
        _mutex.unlock();
    }
}

/*****************************************************************************
 * 函 数 名  : DataBase.processRecvData
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月17日
 * 函数功能  : 将Socket协议接收到的数据转成DDS消息队列
 * 输入参数  : int nDataType  协议类型
               void * pData   数据指针
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void DataBase::processRecvData(int nDataType, void * pData)
{
    if ((Q_NULLPTR == pData) || (0 > nDataType))
    {
        return;
    }
    switch (nDataType)
    {
        case Sock_MsgType_WRJ_Entity_Pos:
            {
                WRJ_POSITIONSTATE_STRU *pWRJ_Pos = (WRJ_POSITIONSTATE_STRU *)pData;
                LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ * pPathChangeReq =
                LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQTypeSupport::create_data();
                // 无人机平台ID
                pPathChangeReq->platId = 41;

                // 拷贝无人机编队到seq队列
                int nLength = 1;
                LHZS::VRFORCE_COMMAND::POS_DATA posDatas[nLength];
                for (int i = 0; i < nLength; i++)
                {
                    posDatas[i].alt_f = pWRJ_Pos->high;
                    posDatas[i].lat_f = pWRJ_Pos->lat;
                    posDatas[i].lon_f = pWRJ_Pos->lon;
                }
                LHZS::VRFORCE_COMMAND::POS_DATASeq_from_array(&pPathChangeReq->PosList, posDatas, nLength);
                processMsg(pPathChangeReq);
                break;
            }
        case Sock_MsgType_ZDJ_Entity_Pos_List :
            {
                ZDJ_POSITIONSTATE_LIST_STRU *pZDJ_PosList =
                (ZDJ_POSITIONSTATE_LIST_STRU *)pData;
                for (int i = 0; i < pZDJ_PosList->count; i++)
                {
                    LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ * pPathChangeReq =
                    LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQTypeSupport::create_data();

                    // 拷贝战斗机编队信息
                    int nLength = 1;
                    LHZS::VRFORCE_COMMAND::POS_DATA posDatas[nLength];
                    pPathChangeReq->platId = pZDJ_PosList->pEntity[i].id;
                    posDatas[0].alt_f = pZDJ_PosList->pEntity[i].pos.alt;
                    posDatas[0].lat_f = pZDJ_PosList->pEntity[i].pos.lat;
                    posDatas[0].lon_f = pZDJ_PosList->pEntity[i].pos.lon;
                    LHZS::VRFORCE_COMMAND::POS_DATASeq_from_array(&pPathChangeReq->PosList, posDatas, nLength);
                    processMsg(pPathChangeReq);
                }
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
    MyMsg_t stMsg;
    stMsg.eType = NET_MsgType_PathChangeReq;
    stMsg.pBuf = pInstance;
    _mutex.lock();
    _qListMyMsgs.push_back(stMsg);
    _mutex.unlock();
}

MyMsg_t DataBase::getMyMsg()
{
    MyMsg_t stMsg;

    _mutex.lock();
    if (_qListMyMsgs.size() > 0)
    {
        stMsg = _qListMyMsgs.front();
        _qListMyMsgs.pop_front();
    }
    _mutex.unlock();
    return stMsg;
}

LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT * DataBase::getEntityReport(int id)
{
    QMap <int, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *>::iterator dbIterator;
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT * pEntityCopy = nullptr;
    _mutex.lock();
    dbIterator = _dbEntity.find(id);
    if (dbIterator != _dbEntity.end())
    {
        makeCopy(&pEntityCopy, dbIterator.value(), true);
        _dbEntity.erase(dbIterator);
    }
    _mutex.unlock();
    return pEntityCopy;
}

