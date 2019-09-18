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
