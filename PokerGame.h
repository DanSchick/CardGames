//
// Created by Danny on 2/28/2016.
//

#ifndef CARDDECK_POKERGAME_H
#define CARDDECK_POKERGAME_H


#include "CardGame.h"

class PokerGame: public CardGame{
public:
    // CONSTRUCTORS
    PokerGame(CardHolder* deck);
    PokerGame(int numPlayers, CardHolder* deck);

    void dealHands(CardHolder* deck);

    void bettingStage();

    void tradingStage();

    void endRoundStage();

    void start();


};


#endif //CARDDECK_POKERGAME_H
