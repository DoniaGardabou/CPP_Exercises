#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <random>

#include "Card.hpp"

class Player
{
private:
    std::string _name;
    std::vector<Card> _cards;
    unsigned int _score = 0u;

public:
    Player(std::string name);
    static void deal_all_cards(Player& p1, Player& p2);


};