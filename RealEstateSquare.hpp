#pragma once
#include "square.hpp"
#include <memory>
#include "Player.hpp"

class RealEstateSquare : public Square
{
public:
    RealEstateSquare(unsigned int aPrice, unsigned int aFee) : price(aPrice), fee(aFee) {}
    virtual void stayOn(Player& player) override;
    virtual void buy(Player& player);

private:
    std::shared_ptr<Player> owner;
    unsigned int price, fee;
};

