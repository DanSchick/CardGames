//
// Created by Danny on 2/26/2016.
//

#include <bits/algorithmfwd.h>
#include <random>
#include <algorithm>
#include <time.h>
#include "CardHolder.h"


int CardHolder::getSize() const {
    return cards.size();
}

Card CardHolder::drawTop() {
    if(getSize() == 0){
        throw invalid_argument ("No more cards to draw!");
    }
    Card returnCard = cards[0];
    cards.erase(cards.begin());
    return returnCard;
}

Card CardHolder::lookAtTop() const {
    return cards[0];
}
int CardHolder::getInitialSize() const {
    return initialSize;
}

void CardHolder::shuffle() {
    // create the random engine and seed it with a guarenteed different value
    auto engine = std::default_random_engine{};
    engine.seed((unsigned) time(0));
    // use the shuffle method to shuffle the entire cards vector
    std::shuffle(std::begin(cards), std::end(cards), engine);
}

void CardHolder::discardCards(int num) {
    cards.erase(cards.begin());
}