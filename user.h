//
// Created by Harshkumar Patel on 2024-05-03.
//

#ifndef POKER_USER_H
#define POKER_USER_H

#include "card.h"
#include <vector>

class User {
private:
    int balance; // The amount of money the player has left
    vector<Card> hand; // The user's current cards
public:
    User(); // Constructor
    void updateBal(int amount); // add or deduct amount from the user's balance
    int getBal() const; // Return the user's current balance
    void getCards(Card card1, Card card2); // Add the drawn cards at the beginning of the round to the users hand
};


#endif //POKER_USER_H
