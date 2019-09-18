#include "Game.hpp"
#include "SquareIterator.hpp"

void Game::createBoard()
{
  board.create();
}

void Game::addPlayer(std::string name)
{
  players.push_back(Player(name, 20000, SquareIterator(board.getFirstSquare(), board.getLastSquare())));
}

void Game::run(unsigned int rounds)
{
  for (unsigned int ii = 0; ii < rounds; ii++)
  {
    if (isEndOfGame())
    {
      break;
    }
    for (std::vector<Player>::iterator itPlayer = players.begin(); itPlayer != players.end(); itPlayer++)
    {
      //itPlayer->move(dices[0].throwDice() + dices[1].throwDice());
    }
  }
}

bool Game::isEndOfGame()
{
  unsigned int numOfLoosers = 0;
  for (std::vector<Player>::iterator itPlayer = players.begin(); itPlayer != players.end(); itPlayer++)
  {
    if (itPlayer->noMoney())
    {
      numOfLoosers++;
    }
  }
  if (numOfLoosers == players.size() - 1)
  {
    return true;
  }
}
