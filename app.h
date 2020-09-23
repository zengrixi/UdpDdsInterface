#ifndef APP_H
#define APP_H

#include <QList>
#include <QMap>

#include "commondef.h"


class QString;

class App
{
public:
    static QString AppName; //应用程序英文名称
    static QString AppPath; //应用程序路径
    static int DeskWidth;   //运行环境桌面宽度
    static int DeskHeight;  //运行环境桌面高度

    static int IcoMain;   //左上角图标
    static int IcoMenu;   //下来菜单图标
    static int IcoMin;    //最小化图标
    static int IcoMax;    //最大化图标
    static int IcoNormal; //正常图标
    static int IcoClose;  //关闭图标

    static bool UseTray;      //启用托盘
    static bool SaveLog;      //输出日志文件
    static int logType;       //输出日志类型
    static bool UseStyle;     //启用样式
    static QString StyleName; //应用程序样式
    static int FontSize;      //应用程序字体大小
    static QString FontName;  //应用程序字体名称

    static QString lastOpenDir; //上次打开文件位置

    static QList<unsigned short> Entity_nPlatID;//所有实体ID
    static QList<unsigned short> SAR_nPlatID;// SAR无人机PlatID
    static QList<unsigned short> UVA_nPlatID;// 雷达无人机PlatID
    static QList<unsigned short> AEW_nPlatID;// 预警机PlatID(敌我）
    static QList<unsigned short> Enemy_Ship_nPlatID;// 海上目标PlatID（敌方船只）
    static QList<unsigned short> Enemy_Fighter_nPlatID;// 战斗机目标PlatID（敌方？）
    static QList<unsigned short> Enemy_AEW_nPlatID;// 战斗机目标PlatID（敌方？）
    static QList<unsigned short> Fight_nPlatID;// 我方战斗机平台ID

    static QMap<int,QMap<int,double> > detectRangeMap;//探测距离key为机型
    static unsigned short leaderFighterID;    //战斗机长机ID
    static unsigned short WRJStationCtrlID;    //地面站控制无人机ID

    static quint16 wrj_wayPointNum;
    static QList<vec3_t> wrj_wayIniPoint;

    static QString _ZDJ_IP,_WRJ_IP,_COR_IP,_PXK_IP;
    static uint16_t _ZDJ_PORT,_WRJ_PORT,_COR_PORT,_PXK_PORT;

    static void ReadConfig();  //读取配置文件,在main函数最开始加载程序载入
    static void WriteConfig(); //写入配置文件,在更改配置文件程序关闭时调用
};

#endif // APP_H
