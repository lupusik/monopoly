#include "Board.hpp"
#include "Player.hpp"
#include "SquareIterator.hpp"

Board::Board()
{
}

Squares::iterator Board::getFirstSquare()
{
    return squares.begin();
}

Squares::iterator Board::getLastSquare()
{
    return squares.end();
}


void Board::create()
{
}
