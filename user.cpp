//
// Created by Harshkumar Patel on 2024-05-03.
//

#include "user.h"
User::User(){
    this->balance = 0;
    this->hand[0] = 0;
    this->hand[1] = 0;
}
void User::updateBal(int amount){
    this->balance += amount;
}
int User::getBal() const{
    return this->balance;
}
void User::getCards(int card1, int card2){
    this->hand[0] = card1;
    this->hand[1] = card2;
}