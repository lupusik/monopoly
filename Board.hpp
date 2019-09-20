#ifndef BOARD_HPP
#define BOARD_HPP
#include "square.hpp"
#include "array"
#include "SquareIterator.hpp"

typedef std::array<Square, 40> Squares;
class Player;

class Board
{
public:
    Board();
    SquareIterator begin();
    void create();

private:
    Squares squares;
};

#endif // BOARD_HPP


