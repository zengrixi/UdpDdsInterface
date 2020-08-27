///////////////////////////////////////////////////////////////////////////////
//
// 版权声明： Copyright (c) 2019 湖南苍树航天科技有限公司. All rights reserved.
// 文件名称： app.cpp
// 文件摘要：
// 创建作者： 施晓红
// 创建时间： 2020-03-06
//
///////////////////////////////////////////////////////////////////////////////

#include "app.h"
#include "myhelper.h"

QString App::AppName = "dataCollect";
QString App::AppPath = ".";
int App::DeskWidth = 1366;
int App::DeskHeight = 768;

int App::IcoMain = 0xf17b;
int App::IcoMenu = 0xf0d7;
int App::IcoMin = 0xf068;
int App::IcoMax = 0xf079;
int App::IcoNormal = 0xf0b2;
int App::IcoClose = 0xf00d;

bool App::UseTray = false;
bool App::SaveLog = true;
int App::logType = 0;
bool App::UseStyle = true;
QString App::lastOpenDir = "";
QString App::StyleName = "";
int App::FontSize = 9;
QString App::FontName = "Microsoft YaHei";

void App::ReadConfig()
{
    QString fileName = QString("%1/%2_Config.ini").arg(App::AppPath).arg(App::AppName);

    App::StyleName = QString("%1/%2").arg(App::AppPath).arg("/qss/brown.css");
    //如果配置文件大小为0,则以初始值继续运行,并生成配置文件
    QFile file(fileName);
    if (file.size() == 0)
    {
        WriteConfig();
        return;
    }

    QSettings set(fileName, QSettings::IniFormat);

    set.beginGroup("AppConfig");
    App::UseTray = set.value("UseTray").toBool();
    App::SaveLog = set.value("SaveLog").toBool();
    App::logType = set.value("LogType").toInt();
    App::UseStyle = set.value("UseStyle").toBool();
    //App::StyleName = set.value("StyleName").toString();
    App::FontSize = set.value("FontSize").toInt();
    App::FontName = set.value("FontName").toString();
    App::lastOpenDir = set.value("lastOpenDir").toString();
    set.endGroup();
}

void App::WriteConfig()
{
    QString fileName = QString("%1/%2_Config.ini").arg(App::AppPath).arg(App::AppName);
    QSettings set(fileName, QSettings::IniFormat);

    set.beginGroup("AppConfig");
    set.setValue("UseTray", App::UseTray);
    set.setValue("SaveLog", App::SaveLog);
    set.setValue("LogType", App::logType);
    set.setValue("UseStyle", App::UseStyle);
    set.setValue("StyleName", App::StyleName);
    set.setValue("FontSize", App::FontSize);
    set.setValue("FontName", App::FontName);
    set.setValue("lastOpenDir", App::lastOpenDir);
    set.endGroup();
}
