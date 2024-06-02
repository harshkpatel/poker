//
// Created by Harshkumar Patel on 2024-05-03.
//

#include "player.h"
Player::Player(){
    this->balance = 0;
    this->hand = vector<Card>();
    this->bankrupt = false;
}
void Player::updateBal(int amount){
    this->balance += amount;
}
int Player::getBal() const{
    return this->balance;
}
void Player::getCards(Card card1, Card card2){
    this->hand[0] = card1;
    this->hand[1] = card2;
}

void Player::setBankrupt() {
    this->bankrupt = true;
}

bool Player::isBankrupt() const {
    return this->bankrupt;
}
