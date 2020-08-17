#include "onworker.h"

#include <QApplication>

OnWorker::OnWorker(QObject *parent) : QObject(parent)
{
    SaveLog::instance().start();
}

OnWorker::~OnWorker()
{
    SaveLog::instance().stop();
    SaveLog::instance().deleteLater();
}

void OnWorker::onStartUdp()
{
    // 飞控软件通讯
#if 1
    _pWRJ_Udp = new UdpHelper;
    _pWRJ_Udp->udpInit("224.9.9.9", 9000);
    _pWRJ_Udp->joinMulticastGroup();
#endif

#if 1
    _pZDJ_Udp = new UdpHelper;
    _pZDJ_Udp->udpInit("224.9.9.9", 6000);
    _pZDJ_Udp->joinMulticastGroup();
#endif
}

/*****************************************************************************
 * 函 数 名  : OnWorker.onConnectSql
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月18日
 * 函数功能  : 连接KingBase数据库
 * 输入参数  : 无
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void OnWorker::onConnectSql()
{
    
}
