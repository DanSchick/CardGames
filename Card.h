//
// Created by Danny on 2/26/2016.
//

#include <stdlib.h>
#include <string>
#include <vector>

#ifndef CARDDECK_CARD_H
#define CARDDECK_CARD_H


using namespace std;

class Card {
public:
    // first we define our constructors

    // default contructor, will give a random suit and rank
    Card();
    // constructs a card with a given suit and rank
    Card(string givenRank, string givenSuit);

    // Returns the suit of the card
    string getSuit() const;

    // Returns the rank of the card
    string getRank() const;

    friend ostream & operator<<(ostream &os, const Card & c);


private:
    // these are the suit and rank of this card
    string suit;
    string rank;

    // these are every possible value of suit and rank
    vector<string> suitList = {"spades", "clubs", "hearts", "diamonds"};
    vector<string> rankList = {"ace" , "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king"};

};


#endif //CARDDECK_CARD_H
