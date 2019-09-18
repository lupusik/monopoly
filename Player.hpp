#include <string>
#include "Piece.hpp"

class Player
{
public:
  Player() : piece(*this)
  {
  }

  void move(unsigned int numOfSquares);

private:
  std::string name;
  int money;
  Piece piece;
};
