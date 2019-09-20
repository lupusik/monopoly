#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "SquareGuest.hpp"

class Square
{
public:
    Square();
    virtual ~Square() {};
    virtual void goThrough(SquareGuest& player);
    virtual void stayOn(SquareGuest& player);
};

#endif // SQUARE_HPP
