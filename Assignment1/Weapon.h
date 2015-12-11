#pragma once
#include "Item.h"
class Weapon :
    public Item
{
public:
    Weapon();   //[CONSTRUCTOR] Intialize instance of Weapon class and instantiate member 
    
    Weapon(const string& kName, const int& durability_, const int& kAttackDmg); //[CONSTRUCTOR](Override) Intialize instance of Weapon class and instantiate member and take in name of weapon, initial Durability and weapon damage

    virtual ~Weapon();

    const int getAttackDmg();

private:
    const int kAttackDmg;
};

