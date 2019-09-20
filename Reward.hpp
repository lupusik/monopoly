#ifndef REWARD_HPP
#define REWARD_HPP
#include "square.hpp"

class Reward : public Square
{
public:
    Reward(int reward) : m_reward(reward) {}
    void stayOn(SquareGuest& player) override;

private:
    int m_reward;
};

#endif // REWARD_HPP
