#ifndef GAMEPLAYER_HPP
#define GAMEPLAYER_HPP

class GamePlayer
{
public:
    GamePlayer();
    virtual void move(unsigned int numOfSquares) {}
    virtual bool isLooser() {return true;}
};

#endif // GAMEPLAYER_HPP
