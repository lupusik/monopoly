#pragma once
#include "SquareGuest.hpp"
#include "square.hpp"

class BlackHole : public Square
{
public:
    BlackHole(Square *aSquare) : square(aSquare), isActive(false) {}
    virtual void goThrough(SquareGuest& player);
    virtual void stayOn(SquareGuest& player);
    ~BlackHole()
    {
      delete square;
    }
private:
    Square *square;
    bool isActive;
};
