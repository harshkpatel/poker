//
// Created by Harshkumar Patel on 2024-05-03.
//

#ifndef POKER_PLAYER_H
#define POKER_PLAYER_H

using namespace std;

class Player {
private:
    int balance; // The amount of money the player has left
    int hand[2]{}; // The players cards
public:
    Player(); // Constructor
    void updateBal(int amount); // add or deduct amount from player's balance
    int getBal(); // Return the players current balance
    void getCards(int card1, int card2); // Add the drawn cards at the beginning of the round to the players hand
};


#endif //POKER_PLAYER_H
