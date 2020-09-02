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

		// 从消息队列中提取消息处理
		processMsg(DataBase::instance().getMyMsg());
	}
}

/*****************************************************************************
 * 函 数 名  : DdsHelper.processMsg
 * 负 责 人  : 曾日希
 * 创建日期  : 2020年8月17日
 * 函数功能  : 根据消息类型处理消息
 * 输入参数  : my_msg_t stMyMsg  消息结构
 * 输出参数  : 无
 * 返 回 值  : void
*****************************************************************************/
void DdsHelper::processMsg(my_msg_t stMyMsg)
{
	switch (stMyMsg.eType)
	{
		case NET_MsgType_PathChangeReq:
		{
			LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *pPathChangeReq =
			(LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ *)(stMyMsg.pBuf);
			if ( pPathChangeReq )
			{
                if ( !MdsSendMsg::instance().onSendCommand(pPathChangeReq) )
                {
                    qDebug() << "PATH_CHANGE_REQ 发送失败！";
                }
                LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQTypeSupport::delete_data(pPathChangeReq);
			}
			break;
		}
        case NET_MsgType_TrackReport :
        {
            LHZS::SDI_TRACK_REPORT *pTrackReport =
            (LHZS::SDI_TRACK_REPORT *)(stMyMsg.pBuf);
            if ( pTrackReport )
            {
                if ( !MdsSendMsg::instance().onSendMessageData(pTrackReport) )
                {
                    qDebug() << "TARGET_INDICATE 发送失败！";
                }
                LHZS::SDI_TRACK_REPORTTypeSupport::delete_data(pTrackReport);
            }
            break;
        }

		default:
		{
#if _TEST_
		    LHZS::SDI_TRACK_REPORT *pTrackReport =
            LHZS::SDI_TRACK_REPORTTypeSupport::create_data();
            pTrackReport->platform_id_ul  = 20;                    //无人机(ISAR)2X
            pTrackReport->sdi_track_number_ul = 5202 ;        //航迹号
            pTrackReport->radar_track_number_uh = 0;               //radar航迹号
            pTrackReport->ssr_track_number_uh     = 0;             //SSR航迹号
            pTrackReport->esm_target_number_uh    = 0;             //ESM航迹号
            pTrackReport->ir_target_number_uh     = 0;             //IR航迹号
            pTrackReport->icao_addr_ul            = 0;             //ADS-B icao地址
            pTrackReport->ais_mmsi_ul             = 0;             //AIS用户标识码
            memset(pTrackReport->call_sign_c,0,16);                //AIS呼号
            pTrackReport->net_obj_addr_uh         = 0;
            pTrackReport->track_status_e          = 1;             //--航迹状态，0未定义 1起始 2更新
            pTrackReport->track_quality_uh        = 15;            //航迹质量1~15
            pTrackReport->track_source_e          = 0;             //基础航迹源
            pTrackReport->target_geo_position.lon_f = 2.17475;//弧度 范围-pi~0  西经， 0-pi 东经
            pTrackReport->target_geo_position.lat_f = 0.437215;//弧度 范围-pi/2~0南纬， 0-pi/2北纬
            pTrackReport->target_geo_position.alt_f = -0.000113942;//单位：m
            pTrackReport->target_velocity.platform_vx_f = 0.0;  //平台速度(以平台为中心) m/s
            pTrackReport->target_velocity.platform_vy_f = 0.0;
            pTrackReport->target_velocity.platform_vz_f = 0.0;
            pTrackReport->speed_f                       = 0.0; //目标速度标量
            pTrackReport->heading_f                     = -1.57378*180/PI + 180; //--航向0~360，相对正北
            pTrackReport->mission_type_e                = 0;//任务类型 eg.拦截，攻击
            pTrackReport->threat_level_e                = 0;//威胁等级
            pTrackReport->formation_size_uh             = 0;//编队中飞机数目
            pTrackReport->maneuver_indicator_e          = 1;//机动标识，0未定义 1机动 2非机动
            pTrackReport->time_of_update_ul             = 0;
            pTrackReport->target_attribute_data.conflict_flag_uh[0] = 0; //@key
            pTrackReport->target_attribute_data.conflict_flag_uh[1] = 0;
            pTrackReport->target_attribute_data.conflict_flag_uh[2] = 0;
            pTrackReport->target_attribute_data.conflict_flag_uh[3] = 0;

            pTrackReport->target_attribute_data.target_type_e       = 1;//--空海类型
            pTrackReport->target_attribute_data.JEM_type_e          = 0;//微动特性
            pTrackReport->target_attribute_data.identification_e    = 1;//--敌我属性
            pTrackReport->target_attribute_data.ident_confidence_f = 100;  //敌我属性置信度
            pTrackReport->target_attribute_data.civil_military_e   = 0;    //军民属性
            pTrackReport->target_attribute_data.civil_military_conf_f = 0; //军民属性置信度
            pTrackReport->target_attribute_data.target_class_e        = 1; //目标类型
            pTrackReport->target_attribute_data.class_confidence_f    = 98;//--目标类型置信度
            pTrackReport->target_attribute_data.target_model_e        = 0; //目标型号 0未定义 eg.F16
            pTrackReport->target_attribute_data.model_confidence_f    = 100;//目标型号置信度
            pTrackReport->target_attribute_data.target_nation_e       = 0;//目标国籍 0未定义 eg.中国
            pTrackReport->target_attribute_data.nation_confidence_f   = 0;//目标国籍置信度
            pTrackReport->target_attribute_data.target_rcs_e          = 0;//目标rcs 0未定义 eg.大中小
            pTrackReport->target_attribute_data.rcs_confidence_f      = 0;//目标rcs置信度
            MdsSendMsg::instance().onSendMessageData(pTrackReport);
            LHZS::SDI_TRACK_REPORTTypeSupport::delete_data(pTrackReport);
#endif
			break;
		}
	}
}
