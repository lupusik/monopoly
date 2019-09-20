#ifndef RANDOMPLAYER_HPP
#define RANDOMPLAYER_HPP
#include <time.h>
#include "Player.hpp"

class RandomPlayer : public Player
{
public:
    RandomPlayer(std::string aName, int amountOfMoney, SquareIterator square) : Player(aName, amountOfMoney, square)
    {
    }
    bool wantToBuy() override
    {
        srand(time(NULL));
        return rand() % 2;
    }
};

#endif // RANDOMPLAYER_HPP
