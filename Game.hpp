#pragma once
#include <vector>
#include <string>
#include "Board.hpp"
#include "Player.hpp"
#include "Dice.hpp"

class Game
{
public:
    Game(unsigned int numOfPlayers)
    {
      createBoard();
    }

    void addPlayer(std::string name);
    void run(unsigned int rounds);

private:
    void createBoard();
    bool isEndOfGame();

    Board board;
    std::vector<Player> players;
    Dice dices[2];
};
