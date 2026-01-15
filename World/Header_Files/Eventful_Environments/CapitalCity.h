#ifndef CAPITALCITY_H
#define CAPITALCITY_H
#include "../City.h"
#include "../../../Utils/Constants/CapitalCityConstants.h"

namespace World {
    class CapitalCity : public City {
        private:
            const int intent[Constants_CapitalCity::MAX_INTENT];
        public:
            void visitLandMark() override;
            void goShopping() override;


    };
}

#endif
