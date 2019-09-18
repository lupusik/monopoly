#include "Reward.hpp"
#include "Player.hpp"

void Reward::stayOn(Player& player)
{
    player.earnMoney(m_reward);
}
