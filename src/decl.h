//
// Created by fog54 on 22.04.2024.
//

#ifndef PREF_DECL_H
#define PREF_DECL_H

#include "StandartFunctionsAndHeaders.h"

class Card
{
public:
    Card()= default;

    std::string Suit;
    std::string Value;

    std::string values[12] = {"2","3", "4","5","6","7","8","10","J","Q","K","A"};
    std::string suits[4] = {"S","C","D","H"};


};
class Deck {
public:
    uint8_t Capacity;
    Deck(uint8_t capacity)
    {
        Capacity = capacity;
    }


    std::vector<Card> Deck_cards;
    void Init_deck();

};


#endif //PREF_DECL_H
