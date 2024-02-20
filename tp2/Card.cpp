#include "Card.hpp"

Card::Card(unsigned int value, std::string color)
    : _value{value}, _color{color}
{
}
/*
Card::Card(CardValue value, CardColor color)
    : _value { value }
    , _color { color } {
}

*/
void Card::print() const
{
    std::string val;
    switch (_value)
    {
    case 14:
        val = "As";
        break;
    case 11:
        val = "Valet";
        break;
    case 12:
        val = "Dame";
        break;
    case 13:
        val = "Roi";
        break;
    default:
        std::cout << _value << " de " << _color << std::endl;
        return;
    }
    std::cout << val << " de " << _color << std::endl;
}

bool Card::operator==(Card other) const
{
    return _value == other._value;
}

bool Card::operator<(Card other) const
{
    return _value < other._value;
}

unsigned int Card::get_value() const
{
    return _value;
}
std::string Card::get_color() const
{
    return _color;
}

std::ostream &operator<<(std::ostream &stream, Card card)
{
    std::string val;
    switch (card.get_value())
    {
    case 1:
        val = "As";
        break;
    case 11:
        val = "Valet";
        break;
    case 12:
        val = "Dame";
        break;
    case 13:
        val = "Roi";
        break;
    default:
        stream << card.get_value() << " de " << card.get_color() << std::endl;
        return stream;
    }
    stream << val << " de " << card.get_color() << std::endl;
    stream << "This is a card ";
    return stream;
}

std::string whatCard(CardValue _value)
{
    std::string value;
    switch (_value)
    {
    case VALET:
        value = "Valet";
        break;
    case DAME:
        value = "Dame";
        break;
    case ROI:
        value = "Roi";
        break;
    case AS:
        value = "As";
        break;
    default:
        break;
    }
    return value;
}

std::string whatColor(CardColor _color)
{
    std::string color;
    switch (_color)
    {
    case TREFLE:
        color = "Trèfle";
        break;
    case PIQUE:
        color = "Pique";
        break;
    case COEUR:
        color = "Coeur";
        break;
    case CARREAU:
        color = "Carreau";
        break;
    default:
        break;
    }
    return color;
}
