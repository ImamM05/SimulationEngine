#include "../Header_Files/Wanderer.h"
#include "../../Utils/Constants/LocationConstants.h"

namespace AI_Agents{
    Wanderer::Wanderer(const std::string& name, const std::string& personality, const int& location) : 
        Agent(name, personality, location) {};

    void Wanderer::moveAgent() {
        int newLocIDGen;
        int newLocID;

        std::string agentLocation = Constants_Location::LOCATIONS.at(getLocationID());

        switch (getLocationID()) {
            case static_cast<int>(Constants_Location::LocationIDs::CAP_CITY_ID):
                newLocIDGen = rand() % 4;
                newLocID = Constants_Location::CAP_CITY_LC[newLocIDGen];
                if (getLocationID() != newLocID){
                    setLocation(newLocID);
                    std::cout << getName() << " has moved to " << agentLocation << "!" << std::endl;
                }
                else {
                    std::cout << getName() << " has remained in " << agentLocation << "!" << std::endl;
                }
                break;
            default:
                std::cout << "Error: " << getName() << " failed to change location." << std::endl;
        }
    }
}