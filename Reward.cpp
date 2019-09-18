#include "Reward.hpp"

void Reward::stayOn(Player& player)
{
    player.addMoney(m_reward);
}
