#include "RealEstateSquare.hpp"
#include "RealEstate.hpp"


void RealEstateSquare::stayOn(SquareGuest& player)
{
  if (owner)
  {
    unsigned int money = player.spendMoney(price);
    owner->earnMoney(money);
  }
  else if (player.wantToBuy())
  {
      buy(player);
  }
}

void RealEstateSquare::buy(SquareGuest& player)
{
  if (player.hasEnoughMoney(price))
  {
    player.spendMoney(price);
    player.addRealEstate(RealEstate(price));
    owner = std::make_shared<SquareGuest>(player);
  }
}
