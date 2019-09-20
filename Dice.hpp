#pragma once
#include <time.h>

class Dice
{
public:
  Dice() {srand(time(NULL));}
  virtual unsigned int throwDice() { return rand() % 6 + 1; }
};
