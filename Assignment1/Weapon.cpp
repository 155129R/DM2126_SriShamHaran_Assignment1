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
    return this -> kAttackDmg;
}

void Weapon::receiveDamage(const int& damageToItemDurability)
{
    Weapon::durability_ -= damageToItemDurability;
}

