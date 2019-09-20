#include <string>
#include <vector>
#include "Board.hpp"
#include "SquareIterator.hpp"
#include "RealEstate.hpp"
#include "SquareGuest.hpp"
#include "GamePlayer.hpp"

#pragma once

class Player : public SquareGuest,
               public GamePlayer
{
public:
  Player(std::string aName, int amountOfMoney, SquareIterator square) : name(aName), money(amountOfMoney), currentSquare(square)
  {
  }

  unsigned int spendMoney(unsigned int amount) override;
  void earnMoney(unsigned int amount) override;
  bool wantToBuy() override { return false; }
  bool hasEnoughMoney(unsigned int price) override { return money >= price; }
  void addRealEstate(RealEstate aRealEstate) override { realEstates.push_back(aRealEstate); }

  void move(unsigned int numOfSquares) override;
  bool isLooser() override { return money <= 0; }

private:

  std::string name;
  int money;
  SquareIterator currentSquare;
  std::vector<RealEstate> realEstates;
};
