//
// Created by Harshkumar Patel on 2024-05-03.
//

#include "player.h"
// Constructor
Player::Player(){
    this->balance = 0;
    this->hand[0] = 0;
    this->hand[1] = 0;
}
void Player::updateBal(int amount){
    this->balance += amount;
}
int Player::getBal(){
    return this->bal;
}
void Player::getCards(int card1, int card2){
    this->hand[0] = card1;
    this->hand[1] = card2;
}