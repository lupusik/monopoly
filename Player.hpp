#include <string>
#include <vector>
#include "Board.hpp"
#include "SquareIterator.hpp"
#include "RealEstate.hpp"


class Player
{
public:
  Player(std::string aName, int amountOfMoney, SquareIterator square) : name(aName), money(amountOfMoney), currentSquare(square)
  {
  }

  unsigned int spendMoney(unsigned int amount);
  void earnMoney(unsigned int amount);
  void move(unsigned int numOfSquares);
  bool isLooser() { return money <= 0; }
  virtual bool wantToBuy() { return false; }
  bool hasEnoughMoney(unsigned int price) { return money >= price; }
  void addRealEstate(RealEstate aRealEstate) { realEstates.push_back(aRealEstate); }

private:
  std::string name;
  int money;
  SquareIterator currentSquare;
  std::vector<RealEstate> realEstates;
};
