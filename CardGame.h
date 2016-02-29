//
// Created by Danny on 2/28/2016.
//

#ifndef CARDDECK_CARDGAME_H
#define CARDDECK_CARDGAME_H


#include "Hand.h"

class CardGame {
public:
    CardGame(){}

    virtual void start() = 0;
    int getNumPlayers() const;
    virtual void dealHands(CardHolder* deck) = 0;
    void printHands();


protected:
    int numPlayers;
    vector<Hand> playerHands;


};


#endif //CARDDECK_CARDGAME_H
