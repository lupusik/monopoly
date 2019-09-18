#include "Punishment.hpp"

Punishment::stayOn(Player& player)
{
    player.takeMoney(punishment);
}
