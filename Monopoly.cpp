#include "Game.hpp"

int main(int argc, char *argv[])
{
  Game game(4);
  game.addPlayer("Player 1");
  game.addPlayer("Player 2");
  game.addPlayer("Player 3");
  game.addPlayer("Player 4");
  game.run(100);
}
