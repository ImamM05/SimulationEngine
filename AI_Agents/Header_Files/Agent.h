#ifndef AGENT_H
#define AGENT_H
#include <string>

namespace AI_Agents {
    class Agent {
        private:
            std::string name;
            std::string personality;
            int location;
            int action;
        public:
            Agent(const std::string& name, const std::string& personality, const int& location);
            virtual void setAction(const int& intentValue) = 0;
            int getLocation();
            std::string getName();
            std::string getPersonality();
            void setLocation(const int& location);
    };
}


#endif
