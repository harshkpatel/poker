//
// Created by Harshkumar Patel on 2024-06-02.
//

#include "deck.h"
#include <cstdlib>
#include <ctime>

Deck::Deck(){
    this->cards = std::vector<Card>();
}

void Deck::populate(){
    for(size_t cardSuit = 0; cardSuit < 4; cardSuit++){
        for(size_t cardValue = 0; cardValue < 13; cardValue++){
            this->cards.push_back(Card((Suit)cardSuit, (Value)cardValue));
        }
    }
}

void Deck::clear(){
    this->cards.clear();
}

void Deck::shuffle(){
    srand(time(nullptr));
    std::vector<Card> tempDeck;
    size_t randomize;
    int originalSize = this->cards.size();

    for(size_t counter = 0; counter < originalSize; counter++){
        randomize = rand() % this->cards.size();
        tempDeck.push_back(this->cards.at(randomize));
        this->cards.erase((this->cards.begin()) + randomize);
    }

    this->cards = tempDeck;
}

void Deck::dealPlayer(Player& player){
    player.getCards(this->cards.at(0), this->cards.at(1));
    this->cards.erase(this->cards.begin());
    this->cards.erase(this->cards.begin());
}

void Deck::dealUser(User &user) {
    user.getCards(this->cards.at(0), this->cards.at(1));
    this->cards.erase(this->cards.begin());
    this->cards.erase(this->cards.begin());
}
