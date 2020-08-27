///////////////////////////////////////////////////////////////////////////////
//
// 版权声明： Copyright (c) 2020 曾日希. All rights reserved.
// 文件名称： testinfo.h
// 文件摘要： 测试信息打印到文件
// 创建作者： 曾日希
// 创建时间： 2020-8-24
//
///////////////////////////////////////////////////////////////////////////////

#ifndef __TESTINFO_H__
#define __TESTINFO_H__

#include "Entity/lhzs-vrforce-entity.h"
#include "Entity/lhzs-vrforce-entitySupport.h"
#include "Command/lhzs-vrforce-command.h"
#include "Command/lhzs-vrforce-commandSupport.h"
#include "Target/target.h"
#include "Target/targetSupport.h"

#include <QFile>
#include <QStringList>
#include <QMutex>

/* comment by 曾日希, 2020-08-20, Mantis号:s, 原因:仅作测试使用，如不需要则删除. */
#define _TEST_ 0

static QFile g_EntityInfoFile;
static QFile g_TrackInfoFile;

static QMutex g_TestMutex;

extern void TestInfo(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *pInstance);
extern void TestInfo(LHZS::SDI_TRACK_REPORT *pInstance);

void TestInit();
void TestFree();

#endif /* __TESTINFO_H__ */
