//
// Created by Danny on 2/26/2016.
//

#include "Card.h"

#ifndef CARDDECK_CARDHOLDER_H
#define CARDDECK_CARDHOLDER_H

/*
 * This class can represent a hand or a deck. We use inheritance to make this possible
 */
class CardHolder {
public:
    CardHolder(){}
    /*
     * Returns the current size of the cards vector
     */
    int getSize() const;
    /*
     * Peek at the top card, but don't draw
     */
    Card lookAtTop() const;
    /*
     * Draw the top card
     */
    Card drawTop();
    /*
     * Get the size that the holder initially started with
     */
    int getInitialSize() const;
    /*
     * Shuffle the entirety of the holder
     */
    void shuffle();
    /*
     * Discards the top card
     */
    void discardCards(int num);



protected:
    vector<Card> cards;
    int initialSize;
};
#endif //CARDDECK_CARDHOLDER_H
