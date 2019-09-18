#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Player.hpp"

class Square
{
public:
    Square();
    void goThrough(Player& player);
    void stayOn(Player& player);
};

#endif // SQUARE_HPP
