#include "Item.h"
#include <iostream>

using std::cout;
using std::endl;

Item::Item()
{
    cout << "Item instantiated" << endl;
}


Item::~Item()
{
    cout << "Item destroyed" << endl;
}

Item::Item(const string& kName, const int& durability_)
:GameObject(kName), durability_(durability_)
{
    cout << "Item instantiated with kName and durability_" << endl;
}

void Item::receiveDamage(const int& damageToItemDurability)
{
    durability_ -= damageToItemDurability;
}

const int Item::getDurabilty()
{
    return durability_;
}