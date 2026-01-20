#include "../Header_Files/City.h"

namespace World {
    City::City(const std::vector<std::string>& inv, std::string name) {
        cityName = name;
        // adds to cityInventory map
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

    void City::printInventory() {
        std::cout << "The current inventory of " << cityName << ": [";
        for (const std::pair<std::string, int> &pair : cityInventory) {
            std::cout << pair.first << " x" << pair.second << ", ";
        }
        std::cout << "]";

    }

    void City::pickUpItem(const std::string &agentName) {
        int randomNum = (rand()%5) + 1;

        switch(randomNum) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                std::cout << "Error: pickUpItem() function did not behave as expected." << std::endl;
        }
    }
}