//
// Created by Danny on 2/28/2016.
//

#include "CardHolder.h"
#include "Deck.h"

#ifndef CARDDECK_HAND_H
#define CARDDECK_HAND_H


class Hand: public CardHolder {
public:
    // CONSTRUCTORS
    Hand();
    Hand(string name, int cardsToDraw, CardHolder* deck);
    void dealHand(int cardsToDraw, CardHolder* deck);
    vector<Card> lookAtHand() const;
    string getPlayerName() const;

private:
    string playerName;

};


#endif //CARDDECK_HAND_H
