#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "PokerGame.h"
#include "BridgeGame.h"

using namespace std;

int main() {
    // bridge test
    CardHolder *deck2 = new Deck();
    CardGame *bridge = new BridgeGame(deck2);
    bridge->start();

    // poker test
    CardHolder *deck = new Deck();
    CardGame *poker = new PokerGame(deck);
    poker->start();

    return 0;
}