#include "../../Header_Files/Eventful_Environments/CapitalCity.h"

namespace World {
    CapitalCity::CapitalCity(const std::vector<std::string> &inv, std::string name, const char* const intents[], const int ittArrayLen) : 
    City(inv, name)
    {
        // this->intents returns the full array while intents (from the param) is a ptr to the first element 
        for (unsigned int i = 0; i < ittArrayLen; i++) {
            this->intents[i] = intents[i];
        }
        for (std::string item : inv) {
            invAddItem(item);
        }
    }

    void CapitalCity::cityIntro(const std::string &agentName) {
        std::cout << agentName << " has entered the great the CAPITAL of " << cityName << "!!!" << std::endl;
    }

    void CapitalCity::visitLandMark(const std::string &agentName) {
        std::cout << agentName << " visisted " << Constants_CapitalCity::LANDMARK << " and had a great time!" << std::endl;
    }

    void CapitalCity::shopForWeapons(const std::string &agentName) {
        std::cout << agentName << " went shopping!. They bought some weapons!" << std::endl;
    }

    void CapitalCity::shopForFood(const std::string &agentName) {
        std::cout << agentName << " went shopping!. They bought some food!" << std::endl;
    }

    void CapitalCity::shopForGear(const std::string &agentName) {
        std::cout << agentName << " went shopping!. They bought some gear!" << std::endl;
    }

    // overriddden function
    void CapitalCity::goShopping(const std::string &agentName) {
        int randomChoice = (rand() % 3) + 1;
        switch (randomChoice) {
            case 1:
                shopForWeapons(agentName);
                break;
            case 2:
                shopForFood(agentName);
                break;
            case 3:
                shopForGear(agentName);
                break;
            default:
                std::cout << "Error: goShopping() did not work as expected" << std::endl;
        }
    }
}