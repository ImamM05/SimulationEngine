#ifndef CITY_H
#define CITY_H
#include <map>
#include <string>
#include <algorithm>

// Base struct of City 
// Subsequent City classes will inherit from this struct

namespace World {
    typedef std::map<std::string, int> FreqMap;
    struct City {
        FreqMap* cityInventory;
        inline City(const FreqMap& inv) : cityInventory(new FreqMap(inv)) {};
        inline ~City() {
            delete cityInventory;
        }
        inline void invRemoveItem(std::string& item) {
            
        }
        inline void invAddItem(std::string& item) {
            (*cityInventory)[item]++;
        }
        virtual void visitLandMark() = 0;
    };
}



#endif