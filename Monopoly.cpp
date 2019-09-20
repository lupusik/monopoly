#include "Game.hpp"
#include "GameFactory.hpp"
#include "CosmicGameFactory.hpp"

int main(int argc, char *argv[])
{
  CosmicGameFactory gameFactory;
  Game game = gameFactory.create();
  game.addRandomPlayer("Player 1");
  game.addGreedyPlayer("Player 2");
  game.addRandomPlayer("Player 3");
  game.addHumanPlayer("Player 4");
  game.run(100);
}
