#include "RealEstateSquare.hpp"
#include "RealEstate.hpp"


void RealEstateSquare::stayOn(Player& player)
{
  if (owner)
  {
    unsigned int money = player.spendMoney(price);
    owner->earnMoney(money);
  }
}

void RealEstateSquare::buy(Player& player)
{
  if (owner || not player.wantToBuy())
  {
    return;
  }
  if (player.hasEnoughMoney(price))
  {
    player.spendMoney(price);
    player.addRealEstate(RealEstate(price));
    owner = std::make_shared<Player>(player);
  }
}
