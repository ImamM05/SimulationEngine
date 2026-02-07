#ifndef SIMULATION_H
#define SIMULATION_H
#include "../AI_Agents/Header_Files/Agent.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

namespace Engine {
    class Simulation {
        private:
            void changeLocation(AI_Agents::Agent& agent);
        public:
            Simulation();
            void start();
    };
}

#endif