#ifndef WANDERER_H
#define WANDERER_H
#include "Agent.h"

namespace AI_Agents {
    class Wanderer : public Agent {
        private:
        
        public:
            Wanderer(const std::string& name, const std::string& personality, const int& location);
            void moveAgent() override;
    };
}



#endif