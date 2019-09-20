#include "NationalBoard.hpp"
#include "RealEstateSquare.hpp"
#include "Deposit.hpp"
#include "Reward.hpp"
#include "Punishment.hpp"
#include "Start.hpp"
#include <time.h>

const std::vector<std::string> cityNames = {"Kraków", "Poznań", "Warszawa", "Radom", "Wrocław", "Gdańsk", "Lublin"};
void NationalBoard::create()
{
  srand(time(NULL));
  squares[0] = Start(400);
  for (unsigned int ii = 1; ii < 40; ii++)
  {
    unsigned int someNumber = rand() % 4;
    unsigned int city = rand() % cityNames.size();
    switch (someNumber)
    {
      case 0: squares[ii] = RealEstateSquare(rand() % 5000, rand() % 500, cityNames[city]); break;
      case 1: squares[ii] = Deposit(200); break;
      case 2: squares[ii] = Punishment(400); break;
      case 3: squares[ii] = Reward(800); break;
    }
  }
}
