#pragma once
#include "SquareGuest.hpp"
#include "square.hpp"

class RandomSquare : public Square
{
public:
    RandomSquare(Square aSquares[3]) : squares(&aSquares) {}
    virtual void goThrough(SquareGuest& player);
    virtual void stayOn(SquareGuest& player);
private:
    Square **squares;
    unsigned int index;
};
