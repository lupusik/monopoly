#include <string>
#include "Board.hpp"


class Player
{
public:
  Player(std::string aName, int amountOfMoney, Iterator square) : name(aName), money(amountOfMoney), currentSquare(square)
  {
  }

  Iterator& getCurrentSquare();
  void setCurrentSquare(Iterator& iterator);
  void spendMoney(unsigned int amount);
  void earnMoney(unsigned int amount);

private:
  std::string name;
  int money;
  Iterator currentSquare;
};
