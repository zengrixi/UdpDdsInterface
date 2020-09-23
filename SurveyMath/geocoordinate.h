///////////////////////////////////////////////////////////////////////////////
//
// 版权声明： Copyright (c) 2020 曾日希. All rights reserved.
// 文件名称： geocoordinate.h
// 文件摘要： 地理坐标计算
// 创建作者： 曾日希
// 创建时间： 2020-9-23
//
///////////////////////////////////////////////////////////////////////////////

#ifndef __GEOCOORDINATE_H__
#define __GEOCOORDINATE_H__

#include "commondef.h"

namespace SurveyMath {
    class GeoCoorDinate
    {
    public:
        GeoCoorDinate();
        ~GeoCoorDinate();
        static double DistanceOfDegree(double dlat1, double dlng1, double dlat2, double dlng2);
        static double DistanceOfRadian(double rlat1, double rlng1, double rlat2, double rlng2);   
    };
}


#endif /* __GEOCOORDINATE_H__ */
