#ifndef HUMANPLAYER_HPP
#define HUMANPLAYER_HPP
#include "Player.hpp"
#include "string"

class HumanPlayer : public Player
{
public:
    bool wantToBuy() override;
    HumanPlayer(std::string aName, int amountOfMoney, SquareIterator square) : Player(aName, amountOfMoney, square)
    {
    }

private:
    bool doesUserWantToBuy(std::string& command);
};

#endif // HUMANPLAYER_HPP
