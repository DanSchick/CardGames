cmake_minimum_required(VERSION 3.3)
project(CardDeck)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Card.cpp Card.h Deck.cpp Deck.h CardHolder.h CardHolder.cpp CardHolder.cpp Hand.cpp Hand.h PokerGame.cpp PokerGame.h CardGame.cpp CardGame.h BridgeGame.cpp BridgeGame.h)
add_executable(CardDeck ${SOURCE_FILES})