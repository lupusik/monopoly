#include "Reward.hpp"

void Reward::stayOn(SquareGuest& player)
{
    player.earnMoney(m_reward);
}
