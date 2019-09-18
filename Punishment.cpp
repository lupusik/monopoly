#include "Punishment.hpp"
#include "Player.hpp"

void Punishment::stayOn(Player& player)
{
    player.spendMoney(m_punishment);
}
