//
// Created by Danny on 2/28/2016.
//

#ifndef CARDDECK_BRIDGEGAME_H
#define CARDDECK_BRIDGEGAME_H


#include "CardGame.h"

class BridgeGame: public CardGame {
public:
    BridgeGame(CardHolder* deck);

    void dealHands(CardHolder* deck);

    void start();

    void biddingStage();

    void trickStage();

    void scoreStage();


};


#endif //CARDDECK_BRIDGEGAME_H
