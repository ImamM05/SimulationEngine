#ifndef CITY_H
#define CITY_H
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib>

// Base struct of City 
// Subsequent City classes will inherit from this struct

namespace World {
    typedef std::map<std::string, int> FreqMap;
    struct City {
        FreqMap cityInventory;
        std::string cityName;
        City(const std::vector<std::string>& inv, std::string name);
        void invRemoveItem(const std::string& item);
        void invAddItem(const std::string& item);
        void printInventory();
        void pickUpItem(const std::string &agentName);
        virtual void visitLandMark(const std::string &agentName) = 0;
        virtual void goShopping(const std::string &agentName) = 0;
        virtual void cityIntro(const std::string &agentName) = 0;
    };
}



#endif