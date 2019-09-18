class Player;

class Piece
{
public:
  Piece(Player &p) : player(p)
  {
  }

  void move(unsigned int numOfSquares);

private:
  Player &player;
};
