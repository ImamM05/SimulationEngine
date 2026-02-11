#ifndef ROUTES_H
#define ROUTES_H
#include <string>
#include <map>

namespace Constants_Location {
    enum class LocationIDs {
        CAP_CITY_ID = 00,
        ROUTE_1_ID = 01,
        ROUTE_2_ID = 02,
        ROUTE_3_ID = 03,
        ROUTE_4_ID = 04,
    };


    const std::map<int, std::string> LOCATIONS = {{CAP_CITY_LC_ID,"Gran Chaos Empire"}};


    const int CAP_CITY_LC[] = {
        static_cast<int>(LocationIDs::CAP_CITY_ID), 
        static_cast<int>(LocationIDs::ROUTE_1_ID), 
        static_cast<int>(LocationIDs::ROUTE_2_ID), 
        static_cast<int>(LocationIDs::ROUTE_3_ID), 
        static_cast<int>(LocationIDs::ROUTE_4_ID)
    };
}

#endif