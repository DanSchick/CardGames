//
// Created by Danny on 2/28/2016.
//

#include <iostream>
#include "CardGame.h"


int CardGame::getNumPlayers() const{
    return numPlayers;
}

void CardGame::printHands() {
    for(int i=0;i<getNumPlayers();i++){
        cout << "Player: " << playerHands[i].getPlayerName() << endl;
        playerHands[i].lookAtHand();
        cout << endl << endl;
    }
}