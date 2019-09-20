#include "Game.hpp"
#include "SquareIterator.hpp"
#include "HumanPlayer.hpp"
#include "GreedyPlayer.hpp"
#include "RandomPlayer.hpp"

void Game::createBoard()
{
  board.create();
}

void Game::addHumanPlayer(std::string name)
{
  players.push_back(HumanPlayer(name, 20000, board.begin()));
}

void Game::addGreedyPlayer(std::string name)
{
  players.push_back(GreedyPlayer(name, 20000, board.begin()));
}

void Game::addRandomPlayer(std::string name)
{
  players.push_back(RandomPlayer(name, 20000, board.begin()));
}

void Game::run(unsigned int rounds)
{
  for (unsigned int ii = 0; ii < rounds; ii++)
  {
    if (isEndOfGame())
    {
      break;
    }
    for (auto& player : players)
    {
      player.move(dices[0].throwDice() + dices[1].throwDice());
    }
  }
}

bool Game::isEndOfGame()
{
  unsigned int numOfLoosers = 0;
  for (auto& player : players)
  {
    if (player.isLooser())
    {
      numOfLoosers++;
    }
  }
  if (numOfLoosers == players.size() - 1)
  {
    return true;
  }
}
