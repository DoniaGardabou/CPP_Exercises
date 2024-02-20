#include "Player.hpp"

Player::Player(std::string name)
    : _name{name}
{
}

void Player::deal_all_cards(Player &p1, Player &p2)
{
    std::vector<Card> all_cards;
    std::random_device rd;

    for (int i = 0; i < 13; i++)
    {
        for (auto j = 0; j < 4; j++)
        {
            all_cards.emplace_back(Card(i, "Pique"));
        }
    }

    std::shuffle(all_cards.begin(), all_cards.end(), std::default_random_engine(rd()));
    for (auto c : p1._cards)
    {
        all_cards.emplace_back(c.get_value(), c.get_color());
    }

    size_t half_size = all_cards.size() / 2;

    p1._cards = std::vector<Card>(all_cards.begin(), all_cards.begin() + half_size);
    p2._cards = std::vector<Card>(all_cards.begin() + half_size, all_cards.end());
}