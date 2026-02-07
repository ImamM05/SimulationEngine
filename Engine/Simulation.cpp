#include "Simulation.h"

namespace Engine {
    Simulation::Simulation(){
        srand(time(0));
    }

    void Simulation::changeLocation(AI_Agents::Agent& agent) {
        // simple random # gen which changes ai agent to either in capital city or not
        int num = rand() % 2;
        switch(num) {
            case 0:
                agent.setLocation(num);
                break;
            case 1:
                agent.setLocation(num);
                break;
            default:
                std::cout << "Error: AI agent change location had an error.";
        }
    }

    void Simulation::start() {

    }
}