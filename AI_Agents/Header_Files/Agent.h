#ifndef AGENT_H
#define AGENT_H
#include <string>

namespace AI_Agents {
    struct Agent {
        std::string name;
        std::string personality;
        int location;
        int action;
        Agent(const std::string& name, const std::string& personality, const int& location);
        virtual void setAction(const int& intentValue) = 0;
        int getLocation();
    };
}


#endif
