#ifndef CITY_H
#define CITY_H
#include <vector>
#include <string>

namespace World {
    struct City {
        void visitLandMark();
        std::vector<std::string> cityInventory;
    };
}



#endif