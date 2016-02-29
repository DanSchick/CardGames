//
// Created by Danny on 2/28/2016.
//

#include <iostream>
#include "BridgeGame.h"

BridgeGame::BridgeGame(CardHolder *deck) {
    numPlayers = 4;
    dealHands(deck);
}

void BridgeGame::dealHands(CardHolder *deck) {
    Hand insertHand;
    string name;
    cout << "Enter the names of the " << getNumPlayers() << " players, pressing enter after each one: " << endl;
    for(int i=0;i<getNumPlayers();i++){
        cin >> name;
        insertHand = Hand(name, 13, deck);
        playerHands.insert(playerHands.begin(), insertHand);
    }

}

void BridgeGame::start() {
    cout << "STARTING BRIDGE" << endl << "STARTING  HANDS OF ALL PLAYERS" << endl;
    printHands();
    cout << endl << endl << "BIDDING STAGE" << endl;
    biddingStage();
    cout << endl << "TRICK STAGE" << endl;
    trickStage();
    cout << endl << "SCORING STAGE" << endl;
    scoreStage();
    cout << endl << endl << "EXITING BRIDGE..." << endl << endl << endl;
}

void BridgeGame::biddingStage() {
    cout << "Player " << playerHands[0].getPlayerName() << " bids $50" << endl;
}

void BridgeGame::trickStage() {
    cout << "A trick is played and team 1 wins" << endl;
    cout << "A trick is played and team 2 wins" << endl;
}

void BridgeGame::scoreStage() {
    cout << "Team 1: 1 trick " << endl << "Team 2: 2 tricks" << endl;
    cout << "The game is a tie" << endl;
}
