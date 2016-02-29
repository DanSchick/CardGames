#include <iostream>
#include "Deck.h"
#include "PokerGame.h"
#include "BridgeGame.h"

using namespace std;

int main() {
    // bridge test
    CardHolder *deck = new Deck();
    CardGame *bridge = new BridgeGame(deck);
    bridge->start();

    // poker test
    CardHolder *deck2 = new Deck();
    CardGame *poker = new PokerGame(deck2);
    poker->start();

    return 0;
}