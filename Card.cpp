//
// Created by Danny on 2/26/2016.
//

#include "Card.h"
#include <algorithm>
#include <stdexcept>
#include <ostream>
#include <iostream>
#include <time.h>

/*
 * First, we define the constructors
 */
Card::Card() {
    // we have to seed the random number generator
    srand((unsigned) time(0));
    int suitIndex = rand() % 4;
    int rankIndex = rand() % 13;
    suit = suitList.at(suitIndex);
    rank = rankList.at(rankIndex);
}

Card::Card(string givenRank, string givenSuit) {
    // we must check if the given values are valid
    if(std::find(suitList.begin(), suitList.end(), givenSuit) != suitList.end()) {
        // the suit is in the available suits, therefore we can continue
        suit = givenSuit;
    } else {
        throw invalid_argument ("The given suit is a not a valid suit");
    }

    if(std::find(rankList.begin(), rankList.end(), givenRank) != rankList.end()) {
        // the rank is valid
        rank = givenRank;
    } else {
        throw invalid_argument ("The given rank is not a valid rank");
    }
}

//#####################################################################
// now, we define the methods

string Card::getSuit() const{
    return suit;
}

string Card::getRank() const{
    return rank;
}

// and the operator
ostream & operator<<(ostream & os, const Card & c) {
    os << "* " << c.getRank() << " of " << c.getSuit() << std::endl;
    return os;
}

