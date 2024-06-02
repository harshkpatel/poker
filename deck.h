//
// Created by Harshkumar Patel on 2024-06-02.
//

#ifndef POKER_DECK_H
#define POKER_DECK_H

#include <vector>
#include "player.h"
#include "user.h"

class Deck {
private:
    vector<Card> cards;
public:
    Deck();
    void populate();
    void clear();
    void shuffle();
    void dealPlayer(Player& player);
    void dealUser(User& user);
};


#endif //POKER_DECK_H
