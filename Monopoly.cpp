#include "Game.hpp"

int main(int argc, char *argv[])
{
  Game game(4);
  game.addRandomPlayer("Player 1");
  game.addGreedyPlayer("Player 2");
  game.addRandomPlayer("Player 3");
  game.addHumanPlayer("Player 4");
  game.run(100);
}
