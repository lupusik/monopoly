#include "SquareIterator.hpp"

void SquareIterator::next()
{
    square++;
    if (square == end)
    {
        square = begin;
    }
}

Square* SquareIterator::operator->()
{
    return square;
}
