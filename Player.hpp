#include <string>
#include "Piece.hpp"

class Player
{
public:
  Player() : piece(*this)
  {
  }

  void move(unsigned int numOfSquares);
  void addMoney(int mon) {}
  void takeMoney(int mon) {}

private:
  std::string name;
  int money;
  Piece piece;
};
