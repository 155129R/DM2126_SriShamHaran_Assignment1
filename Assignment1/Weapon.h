/****************************************************************************/
/*!
\file Weapon.h
\author Sri Sham Haran S/O R Raja
\par email: 155129R@mymail.nyp.edu.sg
\brief
Class to define the class for Weapon
*/
/****************************************************************************/

/****************************************************************************/
/*!
Class Weapon:
\brief Class to define the class for Weapon
*/
/****************************************************************************/
#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"
class Weapon :
    public Item
{
public:

    /****************************************************************************/
    /*!
    \brief
    [CONSTRUCTOR](Override) Intialize instance of Weapon class and instantiate member and take in name of weapon, initial Durability and weapon damage

    \param weaponName
    Name of Weapon

    \param initialDurability
    intial durability of weapon

    \param weaponDmg
    Damage dealt by weapon
    */
    /****************************************************************************/
    Weapon(const string& weaponName = "", const int& initialDurability_ = 0, const int& weaponDmg = 0); //[CONSTRUCTOR](Override) Intialize instance of Weapon class and instantiate member and take in name of weapon, initial Durability and weapon damage

    /****************************************************************************/
    /*!
    \brief
    [DESTRUCTOR] Delete instance of Weapon
    */
    /****************************************************************************/
    virtual ~Weapon();
    /****************************************************************************/
    /*!
    \brief
    [GETTER] Get attack power/ damage value
    */
    /****************************************************************************/
    const int getAttackDmg();

    /****************************************************************************/
    /*!
    \brief
    Apply Damage to weapon's durability

    \param damageToItemDurability 
    Damage to be dealt to durability
    */
    /****************************************************************************/
    void receiveDamage(const int& damageToItemDurability); //Apply Damage to weapon's durability

private:
    const int kAttackDmg;
};

#endif /*WEAPON_H*/