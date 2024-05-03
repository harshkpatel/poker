//
// Created by Harshkumar Patel on 2024-05-03.
//

#ifndef POKER_PLAYER_H
#define POKER_PLAYER_H


class Player {
private:
    int balance; // The amount of money the player has left
    int hand[2]{}; // The players cards
    bool bankrupt; // Whether the player is still in the game
public:
    Player(); // Constructor
    void updateBal(int amount); // add or deduct amount from player's balance
    int getBal() const; // Return the player's current balance
    void getCards(int card1, int card2); // Add the drawn cards at the beginning of the round to the player's hand
    void setBankrupt(); // Set the player to bankrupt as their balance is now 0;
    bool isBankrupt() const; // Return whether the player is bankrupt
};


#endif //POKER_PLAYER_H
