//
// Created by Danny on 2/28/2016.
//

#include <stdexcept>
#include <iostream>
#include "Hand.h"

Hand::Hand() {
}

Hand::Hand(string name, int cardsToDraw, CardHolder* deck) {
    // we create a player with name and a hand
    this->playerName = name;
    dealHand(cardsToDraw, deck);
}

void Hand::dealHand(int cardsToDraw, CardHolder* deck) {
    cards.clear();
    for(int i=0;i<cardsToDraw;i++){
        cards.insert(cards.begin(), deck->drawTop());
    }
    this->initialSize = cards.size();
}

string Hand::getPlayerName() const{
    return this->playerName;
}

vector<Card> Hand::lookAtHand() const{
    for(int i=0;i<getInitialSize();i++){
        cout << cards[i];
    }
    return cards;
}

