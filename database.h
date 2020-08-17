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

class DataBase
{
    SINGLETON(DataBase)
public:
    // 存实体数据
    bool recordEntity(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *entity);

    // 释放已经实体数据
    bool releaseEntity(int key);

    // 实体拷贝
    // 参数3为是否需要分配内存
    void makeCopy(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT **dst, const LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *src, bool bAllocated = false);

    // 实体信息写入到文件
    void writeFile(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *entity);

    // 消息处理
    void processRecvData(int nDataType, void *pData);
    void processMsg(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *pInstance);

    // 提取消息
    MyMsg_t getMyMsg();

    // 根据平台ID提取实体
    LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *getEntityReport(int id);

private:
    DataBase();
    ~DataBase();

    // 用于存实体数据
    QMap<int, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *> _dbEntity;

    // 用于存接收到的消息类型
    QList<MyMsg_t> _qListMyMsgs;

    QMutex _mutex;

    QFile _entityInfoFile_;
};

#endif // DATABASE_H
