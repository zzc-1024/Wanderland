#pragma once

#include "Wonderland/Entities/Entity.hpp"

class Item : public Entity{
public:
    enum ItemUseType {
        SingleHand = 0,
        BothHands
    };
    Item() = default;
    Item(ItemUseType itemUseType);
    ~Item() = default;
    virtual void mainUse() = 0;
    virtual void SecondUse() = 0;
    ItemUseType getItemUseType() const;

private:
    ItemUseType _itemUseType;
};
