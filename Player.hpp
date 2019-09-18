#include <string>
#include "Piece.hpp"

class Player
{
public:
  Player(std::string aName, int amountOfMoney) : name(aName), money(amountOfMoney), piece(*this)
  {
  }

  void move(unsigned int numOfSquares);
  void spendMoney(unsigned int amount);
  void earnMoney(unsigned int amount);

private:
  std::string name;
  int money;
  Piece piece;
};
