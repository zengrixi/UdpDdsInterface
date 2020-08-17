
#include "ddshelper.h"
#include <QDebug>
#include <QDateTime>
#include <QtMath>

#define PATH_CHANGE

DdsHelper::DdsHelper(): QThread()
{
	if (!MdsRecvMsg::instance().isRunning())
	{
		MdsRecvMsg::instance().start();
	}
}

DdsHelper::~DdsHelper()
{
	MdsRecvMsg::instance().stop();
	MdsRecvMsg::instance().deleteLater();
	stop();
	wait();
	quit();
}

void DdsHelper::stop()
{
	_stopMutex.lock();
	_bStop = true;
	_stopMutex.unlock();
}

void DdsHelper::run()
{
	_bStop = false;

	// 更新实体数据
	for (; ; )
	{
		// 进程退出条件
		_stopMutex.lock();
		if (_bStop)
		{
			_stopMutex.unlock();
			break;
		}
		_stopMutex.unlock();

		// 从消息队列中提取消息
		MyMsg_t stMyMsg = DataBase::instance().getMyMsg();

		processMsg(stMyMsg);
	}
}

/*****************************************************************************
 * 函 数 名  : DdsHelper.processMsg
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月17日
 * 函数功能  : 根据消息类型处理消息
 * 输入参数  : MyMsg_t stMyMsg  消息结构
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void DdsHelper::processMsg(MyMsg_t stMyMsg)
{
	switch (stMyMsg.eType)
	{
		case NET_MsgType_PathChangeReq:
			{
				LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ * pPathChangeReq =
					 (LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *) (stMyMsg.pBuf);
				if (nullptr != pPathChangeReq)
				{
					MdsSendMsg::instance().onSendCommand(pPathChangeReq);
					LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQTypeSupport::delete_data(pPathChangeReq);
				}
				break;
			}

		default:
			break;
	}
}

