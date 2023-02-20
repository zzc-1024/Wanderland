#include "Wonderland/Entities/Item.h"

Item::Item(ItemUseType itemUseType) : _itemUseType(itemUseType) {
    
}

Item::ItemUseType Item::getItemUseType() const {
    return _itemUseType;
}
