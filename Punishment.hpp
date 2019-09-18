#ifndef PUNISHMENT_HPP
#define PUNISHMENT_HPP

#include "square.hpp"

class Punishment : public Square
{
public:
    Punishment(int punishment) : m_punishment(punishment) {}
    void stayOn(Player& player) override;

private:
    int m_punishment;
};

#endif // PUNISHMENT_HPP
