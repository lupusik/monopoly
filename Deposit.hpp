#ifndef DEPOSIT_HPP
#define DEPOSIT_HPP
#include "square.hpp"

class Player;
class Deposit : public Square
{
public:
    Deposit(unsigned int p_amount) : amount(p_amount), deposit(0){}

    void goThrough(Player& player) override;
    void stayOn(Player& player) override;

private:
    unsigned int deposit;
    unsigned int amount;
};

#endif // DEPOSIT_HPP
