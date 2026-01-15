#ifndef ROUTE_H
#define ROUTE_h
#include "../../Utils/Constants/RoutesConstants.h"

namespace World {
    struct Route {
        const const char* WEATHER[Constants_Routes::WEATHER_AMT];
        const const char* ROAD_TYPE[Constants_Routes::ROAD_TYPE_AMT];
        Route();
        virtual void triggerNarativeRd() = 0;
    };
}



#endif