#ifndef ROUTES_H
#define ROUTES_H
#include <string>
#include <map>
#include <string_view>

namespace LocationIDs {
        constexpr std::string_view CAP_CITY_ID = "00";
        constexpr std::string_view ROUTE_1_ID = "01";
        constexpr std::string_view ROUTE_2_ID = "02";
        constexpr std::string_view ROUTE_3_ID = "03";
        constexpr std::string_view ROUTE_4_ID = "04";
}

namespace LocationConstants {
    const std::map<int, std::string> LOCATIONS = {{CAP_CITY_LC_ID,"Gran Chaos Empire"}};

    constexpr std::string_view CAP_CITY_LC[] = {
        LocationIDs::CAP_CITY_ID, 
        LocationIDs::ROUTE_1_ID, 
        LocationIDs::ROUTE_2_ID, 
        LocationIDs::ROUTE_3_ID, 
        LocationIDs::ROUTE_4_ID
    };
}

#endif