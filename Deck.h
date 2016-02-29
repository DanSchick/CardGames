//
// Created by Danny on 2/26/2016.
//

#include "Card.h"
#include "CardHolder.h"

#ifndef CARDDECK_DECK_H
#define CARDDECK_DECK_H


class Deck: public CardHolder {
public:
    // We only need a default constructor because every deck has the same 52 cards
    Deck();

    // the rest of the methods are defined in CardHolder


private:
    vector<string> suitList = {"spades", "clubs", "hearts", "diamonds"};
    vector<string> rankList = {"ace" , "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king"};

};


#endif //CARDDECK_DECK_H
