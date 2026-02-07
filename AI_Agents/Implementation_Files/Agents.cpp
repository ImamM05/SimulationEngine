#include "../Header_Files/Agent.h";

namespace AI_Agents {
    Agent::Agent(const std::string& name, const std::string& personality, const int& location) {
        this->name = name;
        this->personality = personality;
        this->location = location;
    }

    int Agent::getLocation() {
        return this->location;
    }

    std::string Agent::getName() {
        return this->name;
    }

    std::string Agent::getPersonality(){
        return this->personality;
    }

    void Agent::setLocation(const int& location) {
        this->location = location;
    }

    
}