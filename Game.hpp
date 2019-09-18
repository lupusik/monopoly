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
      for (unsigned int ii = 0; ii < numOfPlayers; ii++)
      {
        addPlayer("Player");
      }
    }

    void run(unsigned int rounds);

private:
    void createBoard();
    void addPlayer(std::string name);
    bool isEndOfGame();

    Board board;
    std::vector<Player> players;
    Dice dices[2];
};
