#include "CosmicBoard.hpp"
#include "RealEstateSquare.hpp"
#include "BlackHole.hpp"
#include "Reward.hpp"
#include "Punishment.hpp"
#include "Start.hpp"
#include <time.h>

const std::vector<std::string> planetNames = {"Merkury", "Wenus", "Ziemia", "Mars", "Jowisz", "Saturn", "Neptun"};
void CosmicBoard::create()
{
  srand(time(NULL));
  squares[0] = Start(400);
  for (unsigned int ii = 1; ii < 40; ii++)
  {
    unsigned int someNumber = rand() % 4;
    unsigned int planet = rand() % planetNames.size();
    switch (someNumber)
    {
      case 0: squares[ii] = RealEstateSquare(rand() % 5000, rand() % 500, planetNames[planet]); break;
      case 1: squares[ii] = BlackHole(new RealEstateSquare(rand() % 5000, rand() % 500, planetNames[planet])); break;
      case 2: squares[ii] = Punishment(400); break;
      case 3: squares[ii] = Reward(800); break;
    }
  }
}
