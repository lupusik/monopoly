#pragma once
#include "Board.hpp"
#include "Dice.hpp"
#include <vector>

class GameFactory
{
  public:
    GameFactory() { }
    Game create() { return Game(createBoard(), createDices()); }
  protected:
    virtual std::vector<Dice> createDices() = 0;
    virtual Board createBoard() = 0;
};
