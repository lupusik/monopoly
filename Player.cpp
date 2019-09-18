#include "Player.hpp"

void Player::move(unsigned int numOfSquares)
{
  piece.move(numOfSquares);
}

void Player::spendMoney(unsigned int amount)
{
  money -= amount;
  if (money < 0)
  {
    money = 0;
  }
}

void Player::earnMoney(unsigned int amount)
{
  money += amount;
}
