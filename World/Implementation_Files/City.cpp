#include "../Header_Files/City.h"

namespace World {
    City::City(const std::vector<std::string>& inv) {
        cityInventory = FreqMap();
        for (unsigned int i = 0; i < inv.size(); i++) {
            cityInventory[inv.at(i)]++;
        }
    }
    void City::invAddItem(const std::string& item) {
        cityInventory[item]++;
    }

    void City::invRemoveItem(const std::string& item) {
        FreqMap::iterator it = cityInventory.find(item);
        if (it != cityInventory.end()) {
            cityInventory.erase(it);
        }
    }
}