#include "Punishment.hpp"

void Punishment::stayOn(SquareGuest& player)
{
    player.spendMoney(m_punishment);
}
