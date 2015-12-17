/****************************************************************************/
/*!
\file Item.cpp
\author Sri Sham Haran S/O R Raja
\par email: 155129R@mymail.nyp.edu.sg
\brief
CPP to define  Item functions
*/
/****************************************************************************/
#include "Item.h"
#include <iostream>

using std::cout;
using std::endl;

Item::~Item()
{
    cout << "Item destroyed" << endl;
}

Item::Item(const string& kName, const int& durability_)
:GameObject(kName), durability_(durability_)
{
    cout << "Item instantiated with kName and durability_" << endl;
}

//void Item::receiveDamage(const int& damageToItemDurability)
//{
//    //durability_ -= damageToItemDurability;
//}

const int Item::getDurability()
{
    if (durability_ > 0)
        return durability_;
    else 
        return 0;
}