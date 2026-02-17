#include "../Header_Files/Wanderer.h"
#include "../../Utils/Constants/LocationConstants.h"

namespace AI_Agents{
    Wanderer::Wanderer(const std::string& name, const std::string& personality, const int& location) : 
        Agent(name, personality, location) {};

    void Wanderer::moveAgent() {
        int newLocIDGen;
        std::string newLocID;

        std::string agentLocation = LocationConstants::LOCATIONS.at(getLocationID());

        if(getLocationID() == LocationIDs::CAP_CITY_ID) {
            newLocIDGen = rand()%4

        }
    }
}