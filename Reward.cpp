#include "Reward.hpp"

void Reward::stayOn(Player& player)
{
    player.earnMoney(m_reward);
}
