//
// Created by Harshkumar Patel on 2024-06-02.
//

#ifndef POKER_CARD_H
#define POKER_CARD_H
#include "suit.h"
#include "value.h"
#include <string>
using namespace std;

class Card {
private:
    Suit suit;
    Value value;
public:
    Card(Suit suit, Value value);
    string toString();
    Suit  getSuit();
    Value getValue();
};


#endif //POKER_CARD_H
