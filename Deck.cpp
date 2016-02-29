//
// Created by Danny on 2/26/2016.
//

#include "Deck.h"

Deck::Deck() {
    // this creates a full deck of cards and shuffles it
    Card test;
    for(int i=0;i<suitList.size();i++){
        for(int j=0;j<rankList.size();j++){
            test = Card(rankList[j], suitList[i]);
            cards.insert(cards.begin(), test);
        }
    }
    // we define the initial size as the size of the deck
    initialSize = cards.size();
    this->shuffle();
}






