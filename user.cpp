//
// Created by Harshkumar Patel on 2024-05-03.
//

#include "user.h"
User::User(){
    this->balance = 0;
    this->hand = vector<Card>();
}
void User::updateBal(int amount){
    this->balance += amount;
}
int User::getBal() const{
    return this->balance;
}
void User::getCards(Card card1, Card card2){
    this->hand.push_back(card1);
    this->hand.push_back(card2);
}