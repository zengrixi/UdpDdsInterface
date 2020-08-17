///////////////////////////////////////////////////////////////////////////////
//
// 版权声明： Copyright (c) 2020 曾日希. All rights reserved.
// 文件名称： savelog.h
// 文件摘要： Qt日志重定向实现
// 创建作者： 曾日希
// 创建时间： 2020-8-17
//
///////////////////////////////////////////////////////////////////////////////


#ifndef __SAVELOG_H__
#define __SAVELOG_H__

#include <QObject>

#include "singleton.h"

class QFile;
class QTcpSocket;
class QTcpServer;

#ifdef quc
#if (QT_VERSION < QT_VERSION_CHECK(5, 7, 0))
#include <QtDesigner/QDesignerExportWidget>
#else
#include <QtUiPlugin/QDesignerExportWidget>
#endif /* #if (QT_VERSION < QT_VERSION_CHECK(5,7,0)) */
class QDESIGNER_WIDGET_EXPORT SaveLog : public QObject
#else
class SaveLog : public QObject
#endif /* quc */
{
    Q_OBJECT
    SINGLETON(SaveLog)
public slots:
    void save(const QString &content);
    void setName(const QString &name);
    void setPath(const QString &path);
    void setToNet(bool toNet);
    void start();
    void stop();

signals:
    void send(const QString &content);

private:
    SaveLog();
    ~SaveLog();

    QFile *_pFile;      ///<文件对象
    bool _bToNet;       ///<是否重定向到网络
    QString _sPath;     ///<日志文件路径
    QString _sName;     ///<日志文件名称
    QString _sFileName; ///<日志文件完整名字
};

// 网络发送日志数据类
class SendLog : public QObject
{
    Q_OBJECT
    SINGLETON(SendLog)
public slots:
    void send(const QString &content);

private slots:
    void newConnection();

private:
    SendLog();
    ~SendLog();

    QTcpSocket *_pSocket;
    QTcpServer *_pServer;
};

#endif /* __SAVELOG_H__ */
