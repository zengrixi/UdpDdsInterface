///////////////////////////////////////////////////////////////////////////////
//
// 版权声明： Copyright (c) 2020 曾日希. All rights reserved.
// 文件名称： config.h
// 文件摘要： config.cpp 的头文件
// 创建作者： 曾日希
// 创建时间： 2020-9-25
//
///////////////////////////////////////////////////////////////////////////////

#ifndef __CONFIG_H__
#define __CONFIG_H__


#include <QObject>

#include "json.h"
#include "commondef.h"


class Config : public QObject
{
    Q_OBJECT
        
public:    
    static Config *instance();
    Config();
    ~Config();
    QMap<QString, QVariant> getDetectionRange(const QString &name);
    QList<int> getEntityPlatID2Me(const QString &name);
    QMap<QString, QList<vec2_t>> getFighterAirRoute(const QVariant &var);
    QMap<QString, QList<double>> getDistanceErr(const QVariant & var);
    QVariant readJson(const QString &filename);
private:
    QString readFile(const QString &filename);
    void recordPos(vec2_t & pos, const QString & type, const QVariant & var);
    QString getOneStr(const QString & str, const QRegExp & rx);
    QtJson::JsonObject _config;
};


#endif /* __CONFIG_H__ */
