#include "Player.hpp"

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
