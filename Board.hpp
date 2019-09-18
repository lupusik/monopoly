#ifndef BOARD_HPP
#define BOARD_HPP
#include "square.hpp"
#include "array"


typedef std::array<Square, 40> ArrayOfSquares;
typedef ArrayOfSquares::iterator Iterator;

class Player;

class Board
{
public:
    Board();
    Iterator getFirstSquare() {};
    void move(Player& player, unsigned int numOfSquare);

private:
    ArrayOfSquares squares;
};

#endif // BOARD_HPP


