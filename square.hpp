#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Player.hpp"

class Square
{
public:
    Square();
    virtual void goThrough(Player& player);
    virtual void stayOn(Player& player);
};

#endif // SQUARE_HPP
