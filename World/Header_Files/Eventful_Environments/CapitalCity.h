#ifndef CAPITALCITY_H
#define CAPITALCITY_H
#include "../City.h"
#include "../../../Utils/Constants/CapitalCityConstants.h"

namespace World {
    class CapitalCity : public City {
        private:
            const char* intents[Constants_CapitalCity::MAX_INTENT];
            void shopForWeapons(const std::string &agentName);
            void shopForGear(const std::string &agentName);
            void shopForFood(const std::string &agentName); 
        public:
            CapitalCity(const std::vector<std::string> &inv, std::string name, const char* intents[], const int arrLength);
            void visitLandMark(const std::string &agentName) override;
            void goShopping(const std::string &agentName) override;
    };
}

#endif
