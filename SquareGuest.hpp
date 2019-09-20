#ifndef SQUAREGUEST_HPP
#define SQUAREGUEST_HPP
#include "RealEstate.hpp"

class SquareGuest
{
public:
    SquareGuest();
    virtual void earnMoney(unsigned int money) {}
    virtual unsigned int spendMoney(unsigned int money) {return 0;}
    virtual bool wantToBuy() {return false;}
    virtual void addRealEstate(RealEstate estate) {}
    virtual bool hasEnoughMoney(unsigned int money) {return false;}
};

#endif // SQUAREGUEST_HPP
