#include "Deposit.hpp"

void Deposit::goThrough(SquareGuest& player)
{
    deposit += player.spendMoney(amount);
}

void Deposit::stayOn(SquareGuest& player)
{
    player.earnMoney(deposit);
    deposit = 0;
}
