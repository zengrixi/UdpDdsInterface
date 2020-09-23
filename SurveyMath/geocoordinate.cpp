#include "geocoordinate.h"

#include <cmath>

#include "SurveyMath/surveymath.h"

namespace SurveyMath {
    GeoCoordinate::GeoCoordinate()
    {
        
    }

    
    GeoCoordinate::~GeoCoordinate()
    {
        
    }


    double GeoCoordinate::DistanceOfDegree
        ( double dlat1
        , double dlng1
        , double dlat2
        , double dlng2 )
    {
        double rlat1 = DegreeToRadian(dlat1);
        double rlng1 = DegreeToRadian(dlng1);
        double rlat2 = DegreeToRadian(dlat2);
        double rlng2 = DegreeToRadian(dlng2);

        return DistanceOfRadian(rlat1, rlng1, rlat2, rlng2);
    }

    
    double GeoCoordinate::DistanceOfRadian
        ( double rlat1
        , double rlng1
        , double rlat2
        , double rlng2 )
    {
        double a = rlat1 - rlat2;
        double b = rlng1 - rlng2;
        double dst = 2 * asin(sqrt(pow(sin(a / 2), 2) + 
            cos(rlat1) * cos(rlat2) * pow(sin(b / 2), 2))) * 6378.137;
        
        dst = round(dst * 10000) / 10000;

        return dst;// 单位：公里
    }
}
