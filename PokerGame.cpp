//
// Created by Danny on 2/28/2016.
//

#include <iostream>
#include <stdexcept>
#include "PokerGame.h"

PokerGame::PokerGame(CardHolder* deck) {
    // we default to a four player game
    this->numPlayers = 4;
    this->dealHands(deck);
}

PokerGame::PokerGame(int numberOfPlayers, CardHolder* deck) {
    if(numberOfPlayers < 2 || numberOfPlayers > 7){
        throw invalid_argument ("Invalid number of players");
    }
    this->numPlayers = numberOfPlayers;
    this->dealHands(deck);
}

void PokerGame::dealHands(CardHolder* deck) {
    Hand insertHand;
    string name;
    cout << "STARTING POKER GAME" << endl;
    cout << "Enter the names of the " << getNumPlayers() << " players, seperated by a space: " << endl;
    for(int i=0;i<getNumPlayers();i++){
        cin >> name;
        insertHand = Hand(name, 5, deck);
        playerHands.insert(playerHands.begin(), insertHand);
    }
}

void PokerGame::start() {
    cout << "STARTING HANDS OF ALL PLAYERS: " << endl;
    printHands();
    cout << "BETTING STAGE" << endl;
    bettingStage();
    cout << "TRADING STAGE" << endl;
    tradingStage();
    cout << "End of round stage" << endl;
    endRoundStage();
}

void PokerGame::bettingStage() {
    // function stub
    cout << "Player " << playerHands[0].getPlayerName() << " raises by 15." << endl;
    cout << "Player " << playerHands[1].getPlayerName() << " calls." << endl;
}

void PokerGame::tradingStage() {
    cout << "Player " << playerHands[0].getPlayerName() << " Trades in two cards" << endl;
    playerHands[0].discardCards(2);
    playerHands[0].drawTop();
    playerHands[0].drawTop();
    cout << "New hand: " << endl;
    playerHands[0].lookAtHand();

}

void PokerGame::endRoundStage() {
    cout << "END OF ROUND: Player " << playerHands[0].getPlayerName() << " wins!" << endl;
    cout << "Pot is $25" << endl;
}