#pragma once
#include "GameFactory.hpp"
#include "CosmicDice.hpp"
#include "CosmicBoard.hpp"

class CosmicGameFactory : public GameFactory
{
  public:
    CosmicGameFactory() { }
  protected:
    std::vector<Dice> createDices() override
    {
      std::vector<Dice> dices;
      dices.push_back(CosmicDice());
      dices.push_back(CosmicDice());
      return dices;
    };
    Board createBoard() override
    {
      CosmicBoard cosmicBoard;
      cosmicBoard.create();
      return cosmicBoard;
    };
};
