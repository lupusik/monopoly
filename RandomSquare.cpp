#include "RandomSquare.hpp"


void RandomSquare::goThrough(SquareGuest& player)
{
  squares[index]->goThrough(player);
  index = (index + 1) % 3;
}

void RandomSquare::stayOn(SquareGuest& player)
{
  squares[index]->stayOn(player);
  index = (index + 1) % 3;
}
