#include "Board.hpp"
#include "Player.hpp"
#include "SquareIterator.hpp"
#include "Reward.hpp"
#include "Punishment.hpp"
#include "Deposit.hpp"
#include "Start.hpp"
#include <time.h>

Board::Board()
{
}

SquareIterator Board::begin()
{
    return SquareIterator(squares.begin(), squares.end());
}

void Board::create()
{
  srand(time(NULL));
  squares[0] = Start(400);
  for (unsigned int ii = 1; ii < 40; ii++)
  {
    int someNumber = rand() % 3;
    switch (someNumber)
    {
      case 0: squares[ii] = Punishment(100); break;
      case 1: squares[ii] = Reward(200); break;
      case 2: squares[ii] = Deposit(100); break;
    }
  }
}
