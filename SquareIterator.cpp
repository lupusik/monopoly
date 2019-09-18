#include "SquareIterator.hpp"


void SquareIterator::next()
{
    if (square == end)
    {
        square = begin;
    }
    else
    {
        square++;
    }
}

Square* SquareIterator::operator->()
{
    return square;
}
