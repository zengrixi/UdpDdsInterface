///////////////////////////////////////////////////////////////////////////////
//
// 版权声明： Copyright (c) 2020 曾日希. All rights reserved.
// 文件名称： surveymath.h
// 文件摘要： 测量计算工具
// 创建作者： 曾日希
// 创建时间： 2020-9-22
//
///////////////////////////////////////////////////////////////////////////////

#ifndef __SURVEYMATH_H__
#define __SURVEYMATH_H__

namespace SurveyMath {
    const double PI = 3.14159265358979323846;
	// 将弧度转换为以度为单位的角度
	double RadianToDegree(double Radian);
	// 将以度为单位的角度转换为弧度
	double DegreeToRadian(double AngleDEG);
	// 将弧度转换为以度度分秒
	double RadianToDMS(double Radian);
	// 将度分秒角度转换为弧度
	double DMSToRadian(double AngleDEG);
	// 将度分秒转换为十进制度
	double DMSToDegree(double DMS);
	// 将十进制度转换为度分秒
	double DegreeToDMS(double DEG);
	// 将以度为单位的角度转换为百分度
	double DegreeToGradian(double AngleDEG);
	// 将百分度换为以度为单位的角度
	double GradianToDegree(double Gradian);
}

#endif /* __SURVEYMATH_H__ */
