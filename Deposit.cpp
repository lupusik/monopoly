#include "Deposit.hpp"
#include "Player.hpp"

void Deposit::goThrough(Player& player)
{
    player.spendMoney(amount);
    deposit += amount;
}

void Deposit::stayOn(Player& player)
{
    player.earnMoney(deposit);
    deposit = 0;
}
