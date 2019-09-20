#pragma once
#include <vector>
#include <string>
#include "Board.hpp"
#include "GamePlayer.hpp"
#include "Dice.hpp"

class Game
{
public:
    Game(unsigned int numOfPlayers)
    {
      createBoard();
    }

    void addHumanPlayer(std::string name);
    void addGreedyPlayer(std::string name);
    void addRandomPlayer(std::string name);
    void run(unsigned int rounds);

private:
    void createBoard();
    bool isEndOfGame();

    Board board;
    std::vector<GamePlayer> players;
    Dice dices[2];
};
