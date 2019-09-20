#include "BlackHole.hpp"


void BlackHole::goThrough(SquareGuest& player)
{
  if (not isActive)
  {
    square->goThrough(player);
  }
  isActive = not isActive;
}

void BlackHole::stayOn(SquareGuest& player)
{
  if (not isActive)
  {
    square->stayOn(player);
  }
  isActive = not isActive;
}
