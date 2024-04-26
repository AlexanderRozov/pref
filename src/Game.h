//
// Created by fog54 on 27.04.2024.
//

#ifndef PREF_GAME_H
#define PREF_GAME_H
#include "Player.h"

class Game
{
    Deck card_deck;

    enum DeckType {Full=52, Russian_type=36, Preferance=32, Bura=16};

    virtual void ChangeState();
    virtual void StartGame();
    virtual void EndGame();



};


#endif //PREF_GAME_H
