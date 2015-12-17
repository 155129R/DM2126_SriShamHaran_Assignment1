/****************************************************************************/
/*!
\file Weapon.cpp
\author Sri Sham Haran S/O R Raja
\par email: 155129R@mymail.nyp.edu.sg
\brief
CPP to define Weapon functions
*/
/****************************************************************************/
#include "Weapon.h"


Weapon::~Weapon()
{
}

Weapon::Weapon(const string& weaponName, const int& initialDurability_, const int& weaponDmg)
:Item(weaponName, initialDurability_), kAttackDmg(weaponDmg)
{

}
const int Weapon::getAttackDmg()
{

    return kAttackDmg;
}

void Weapon::receiveDamage(const int& damageToItemDurability)
{
    Weapon::durability_ -= damageToItemDurability;
}

