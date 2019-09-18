#include "Punishment.hpp"

void Punishment::stayOn(Player& player)
{
    player.spendMoney(m_punishment);
}
