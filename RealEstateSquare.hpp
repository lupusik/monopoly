#pragma once
#include "square.hpp"
#include <memory>
#include "Player.hpp"

class RealEstateSquare : public Square
{
public:
    RealEstateSquare(unsigned int aPrice, unsigned int aFee) : price(aPrice), fee(aFee) {}
    virtual void stayOn(SquareGuest& player) override;
    virtual void buy(SquareGuest& player);

private:
    std::shared_ptr<SquareGuest> owner;
    unsigned int price, fee;
};

