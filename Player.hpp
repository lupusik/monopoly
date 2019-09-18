#include <string>
#include "Board.hpp"
#include "SquareIterator.hpp"


class Player
{
public:
  Player(std::string aName, int amountOfMoney, SquareIterator square) : name(aName), money(amountOfMoney), currentSquare(square)
  {
  }

  unsigned int spendMoney(unsigned int amount);
  void earnMoney(unsigned int amount);
  void move(unsigned int numOfSquares);
  bool noMoney() { return money <= 0; }

private:
  std::string name;
  int money;
  SquareIterator currentSquare;
};
