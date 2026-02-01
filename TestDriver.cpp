#include <ctime>
#include "World/Header_Files/City.h"
#include "World/Header_Files/Eventful_Environments/CapitalCity.h"
#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    srand(time(0));
    std::vector<std::string> cityInventory = {"item1", "item2"};
    const char* const INTENTS[] = {"thief", "wanderer"};
    std::string cityName = "Gran Chaos Empire";
    World::City* capitalCity = new World::CapitalCity(cityInventory, cityName, INTENTS, 2);

    std::string dummyAgentName = "Sam";
    capitalCity->cityIntro(dummyAgentName);
    capitalCity->goShopping(dummyAgentName);

    delete capitalCity;
    return 0;
}