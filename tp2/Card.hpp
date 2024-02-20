#pragma once
#include <string>
#include <iostream>
#include <ostream>

enum CardColor : unsigned int
{
    TREFLE,
    CARREAU,
    COEUR,
    PIQUE
};

enum CardValue : unsigned int
{
    SEPT = 7,
    HUIT = 8,
    NEUF = 9,
    DIX = 10,
    VALET = 11,
    DAME = 12,
    ROI = 13,
    AS = 14

};
class Card
{
private:
    unsigned int _value;
    std::string _color;

public:
    Card(unsigned int value, std::string color);
    void print() const;
    bool operator==(Card other) const;
    bool operator<(Card other) const;
    unsigned int get_value() const;
    std::string get_color() const;
};

std::ostream &operator<<(std::ostream &stream, Card card);
std::string whatCard(CardValue value);
std::string whatColor(CardColor color);
