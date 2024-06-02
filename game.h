//
// Created by Harshkumar Patel on 2024-06-02.
//

#ifndef POKER_GAMES_H
#define POKER_GAMES_H
#include "deck.h"


class Game {
private:
    vector<Card> community;
    User user;
    vector<Player> players;
};


#endif //POKER_GAMES_H
