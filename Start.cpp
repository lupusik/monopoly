#include "Start.hpp"
#include "Player.hpp"


void Start::goThrough(Player& player)
{
    player.earnMoney(m_reward);
}
