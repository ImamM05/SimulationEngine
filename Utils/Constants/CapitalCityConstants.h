#ifndef CAPITALCITYCONSTANTS_H
#define CAPITALCITYCONSTANTS_H

namespace CapitalCityConstants {
    const char* const INTENTS[] = {"thief", "traveler", "adventurer"};
    const char* const SHOP_CHOICES[] = {"weapon", "food", "gear"};

    // compile time constants
    constexpr int MAX_INTENT = 3;
    constexpr int SHOP_CHOICES_AMT  = 3;
    constexpr const char* LANDMARK = "castle";
}

#endif