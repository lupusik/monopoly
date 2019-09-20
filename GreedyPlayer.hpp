#ifndef GREEDYPLAYER_HPP
#define GREEDYPLAYER_HPP

#include "Player.hpp"

class GreedyPlayer : public Player
{
public:
    GreedyPlayer(std::string aName, int amountOfMoney, SquareIterator square) : Player(aName, amountOfMoney, square)
    {
    }
    bool wantToBuy() override { return true; }
};

#endif // GREEDYPLAYER_HPP
