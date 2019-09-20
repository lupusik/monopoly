#pragma once
#include <time.h>
#include "Dice.hpp"

class CosmicDice : public Dice
{
public:
  unsigned int throwDice() override { return rand() % 12 + 1; }
};
