#include "Deposit.hpp"
#include "Player.hpp"

void Deposit::goThrough(Player& player)
{
    deposit += player.spendMoney(amount);
}

void Deposit::stayOn(Player& player)
{
    player.earnMoney(deposit);
    deposit = 0;
}
