#pragma once
#include "square.hpp"
#include <memory>
#include "Player.hpp"
#include <string>

class RealEstateSquare : public Square
{
public:
    RealEstateSquare(unsigned int aPrice, unsigned int aFee, std::string aName) : price(aPrice), fee(aFee), name(aName) {}
    virtual void stayOn(SquareGuest& player) override;
    virtual void buy(SquareGuest& player);

private:
    std::shared_ptr<SquareGuest> owner;
    unsigned int price, fee;
    std::string name;
};

