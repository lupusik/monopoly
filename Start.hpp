#ifndef START_HPP
#define START_HPP
#include "square.hpp"

class Start : public Square
{
public:
    Start(int reward) : m_reward(reward) {}
    void goThrough(SquareGuest& player) override;
    void stayOn(SquareGuest& player) override;

private:
    int m_reward;
};

#endif // START_HPP
