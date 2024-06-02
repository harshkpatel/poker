//
// Created by Harshkumar Patel on 2024-06-02.
//

#include "card.h"

Card::Card(Suit suit, Value value) {
    this->suit = suit;
    this->value = value;
}

string Card::toString() {
    std::string stringSuit;
    std::string stringValue;

    switch (this->suit) {
        case Suit::DIAMOND:
            stringSuit = "D";
            break;
        case Suit::CLUB:
            stringSuit = "C";
            break;
        case Suit::SPADE:
            stringSuit = "S";
            break;
        case Suit::HEART:
            stringSuit = "H";
            break;
        case Suit::NIL:
            stringSuit = "NULL";
            break;
    }

    switch (this->value) {
        case Value::ACE:
            stringValue = "A";
            break;
        case Value::TWO:
            stringValue = "2";
            break;
        case Value::THREE:
            stringValue = "3";
            break;
        case Value::FOUR:
            stringValue = "4";
            break;
        case Value::FIVE:
            stringValue = "5";
            break;
        case Value::SIX:
            stringValue = "6";
            break;
        case Value::SEVEN:
            stringValue = "7";
            break;
        case Value::EIGHT:
            stringValue = "8";
            break;
        case Value::NINE:
            stringValue = "9";
            break;
        case Value::TEN:
            stringValue = "10";
            break;
        case Value::JACK:
            stringValue = "J";
            break;
        case Value::QUEEN:
            stringValue = "Q";
            break;
        case Value::KING:
            stringValue = "K";
            break;
        case Value::NIL:
            stringValue = "NULL";
            break;
    }

    return stringValue + stringSuit;
}

Suit Card::getSuit() {
    return this->suit;
}

Value Card::getValue() {
    return this->value;
}