#include "Player.hpp"

unsigned int Player::spendMoney(unsigned int amount)
{
  int difference = money - amount;
  if (difference < 0)
  {
      money = 0;
      return difference;
  }
  money -= amount;
  return amount;
}

void Player::earnMoney(unsigned int amount)
{
  money += amount;
}

void Player::move(unsigned int numOfSquares)
{
    while(numOfSquares)
    {
        currentSquare.next();
        currentSquare->goThrough(*this);
        numOfSquares--;
    }
    currentSquare->stayOn(*this);
}
