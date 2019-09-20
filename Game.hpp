#pragma once
#include <vector>
#include <string>
#include "Board.hpp"
#include "GamePlayer.hpp"
#include "Dice.hpp"

class Game
{
public:
    Game(Board aBoard, std::vector<Dice> aDices) : board(aBoard), dices(aDices)
    {
    }

    void addHumanPlayer(std::string name);
    void addGreedyPlayer(std::string name);
    void addRandomPlayer(std::string name);
    void run(unsigned int rounds);

private:
    bool isEndOfGame();

    Board &board;
    std::vector<GamePlayer> players;
    std::vector<Dice> &dices;
};
