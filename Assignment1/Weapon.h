#pragma once
#include "Item.h"
class Weapon :
    public Item
{
public:
    Weapon();
    
    Weapon(const string&, const int&, const int&);

    virtual ~Weapon();

    const int getAttackDmg();

private:
    const int kAttackDmg;
};

