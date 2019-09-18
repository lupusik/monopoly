#include "Board.hpp"
#include "Player.hpp"

Board::Board()
{
}

Iterator Board::getFirstSquare()
{
    return squares.begin();
}

void Board::move(Player& player, unsigned int numOfSquare)
{
    auto& currentSquare = player.getCurrentSquare();

    while(numOfSquare -1 == 0)
    {

        currentSquare++;
        currentSquare->goThrough(player);
        numOfSquare--;
    }
    currentSquare++;
    currentSquare->stayOn(player);

}

void Board::create()
{
}
