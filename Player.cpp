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

Iterator& Player::getCurrentSquare()
{
    return currentSquare;
}

void Player::setCurrentSquare(Iterator& iterator)
{
    currentSquare = iterator;
}
