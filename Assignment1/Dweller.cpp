/****************************************************************************/
/*!
\file Dweller.cpp
\author Sri Sham Haran S/O R Raja
\par email: 155129R@mymail.nyp.edu.sg
\brief
CPP to define  dweller functions
*/
/****************************************************************************/
#include "Dweller.h"


Dweller::~Dweller()
{
}

Dweller::Dweller(const string& dwellerName, const int& assignedSPECIAL_)
:GameObject(dwellerName), SPECIAL_(assignedSPECIAL_), position_(Vec2D(0, 0)), health_(100), weapon_(nullptr)
{
 
}

const int Dweller::getSPECIAL()
{
    return this -> SPECIAL_;
}

const int Dweller::getCurrentHealth()
{
    return this->health_;
}

const int Dweller::getCurrentRadDamage()
{
    return this->radiation_;
}

const int Dweller::getAttackDmg()
{
    return weapon_->getAttackDmg();
}

void Dweller::setPosition(const Vec2D& newPosition)
{
    position_ = newPosition;
}

const Vec2D Dweller::getPosition(void)
{
    return position_;
}

void Dweller::receiveRadDamage(const int& radiationDamageTaken)
{
    radiation_ -= radiationDamageTaken;
}

void Dweller::receiveEquipmentDamage(const int& damageToDurability)
{
    outfit_->receiveDamage(damageToDurability);
}

void Dweller::addStimpak(const int& addedStimpak_)
{
    stimpak_++;
}

void Dweller::addRadAway(const int& addedRadaway_)
{
    radaway_++;
}

void Dweller::useStimpak()
{
    --stimpak_;
    health_ += 20;
}

void Dweller::useRadAway()
{
    --radaway_;
    radiation_ -= 10;
}

Outfit* Dweller::assignOutfit(Outfit* newOutfit_)
{
    Outfit* previousOutfit = outfit_;
   return outfit_ = newOutfit_;
}

Weapon* Dweller::assignWeapon(Weapon* newWeapon_)
{
    Weapon* previousWeapon = weapon_;
   return weapon_ = newWeapon_;
}

void Dweller::receiveHealthDamage(const int& damageTaken)
{
    health_ -= damageTaken;
}

bool Dweller::isDead()
{
    if (health_ <= 0)
        return true;

    else 
        return false;
}