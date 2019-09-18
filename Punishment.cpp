#include "Punishment.hpp"

void Punishment::stayOn(Player& player)
{
    player.takeMoney(m_punishment);
}
