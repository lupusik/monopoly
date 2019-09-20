#include "Start.hpp"


void Start::goThrough(SquareGuest& player)
{
    player.earnMoney(m_reward);
}

void Start::stayOn(SquareGuest& player)
{
    player.earnMoney(m_reward);
}
