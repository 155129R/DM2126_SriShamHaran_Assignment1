/****************************************************************************/
/*!
\file Dweller.h
\author Sri Sham Haran S/O R Raja
\par email: 155129R@mymail.nyp.edu.sg
\brief
Class to define the class for Dweller
*/
/****************************************************************************/

/****************************************************************************/
/*!
Class Dweller:
\brief Class to define the class for Dweller
*/
/****************************************************************************/
#ifndef DWELLER_H
#define DWELLER_H

#include "GameObject.h"
#include "Outfit.h"
#include "Weapon.h"
#include "Vec2D.h"

class Dweller : public GameObject
{

public:
    /****************************************************************************/
    /*!
    \brief
    [DESTRUCTOR]	Delete instance of Dweller class
    */
    /****************************************************************************/
    virtual ~Dweller();
    
    /****************************************************************************/
    /*!
    \brief
    [CONSTRUCTOR](Override) Intialize instance of Dweller class and instantiate member variables and take in name and special value of the dweller
    \param dwellerName
    parse in name of dweller
    
    \param assignedSPECIAL_
    parse in special value of the dweller
    */
    /****************************************************************************/

    Dweller(const string& dwellerName = "", const int& assignedSPECIAL_ = 0);      //[CONSTRUCTOR](Override) Intialize instance of Dweller class and instantiate member variables and take in name and special value of the dweller

    /****************************************************************************/
    /*!
    \brief
    [GETTER] Get special value of dweller

    \return
    Return int value of special value of dweller
    */
    /****************************************************************************/

    const int getSPECIAL();     //[GETTER] Get special value of dweller

    /****************************************************************************/
    /*!
    \brief
    [GETTER] Get current health of dweller

    \return
    Return int value of health of dweller
    */
    /****************************************************************************/
    const int getCurrentHealth();   //[GETTER] Get current health

    /****************************************************************************/
    /*!
    \brief
    [GETTER] Get current Radiation Damage of dweller

    \return
    Return int value of radiation damage of dweller
    */
    /****************************************************************************/
    const int getCurrentRadDamage();    //[GETTER] Get current Radiation Damage

    /****************************************************************************/
    /*!
    \brief
    [GETTER] Get attack damage of dweller

    \return
    Return int value of attack damage of dweller
    */
    /****************************************************************************/
    const int getAttackDmg();           //[GETTER] Get attack damage

    /****************************************************************************/
    /*!
    \brief
    [SETTER] Set position of dweller
    
    */
    /****************************************************************************/
    void setPosition(const Vec2D& newPosition);       //[SETTER] Set position(location) of dweller

    /****************************************************************************/
    /*!
    \brief
    [GETTER] Get position of dweller

    \return
    Return Vec2D value of position of dweller
    */
    /****************************************************************************/
    const Vec2D getPosition();                      //[GETTER] Get position(location) of dweller
    /****************************************************************************/
    /*!
    \brief
    Apply Damage to health
    \param damageTaken
    Damage to be applied
    */
    /****************************************************************************/
    void receiveHealthDamage(const int& damageTaken);   //Apply damage to health
    /****************************************************************************/
    /*!
    \brief
    Apply Radiation Damage
    \param RadiationDamageTaken
    Radiation Damage to be applied
    */
    /****************************************************************************/
    void receiveRadDamage(const int& radiationDamageTaken); //Apply Radiation Damage
    /****************************************************************************/
    /*!
    \brief
    Apply Damage to durability
    \param damageToDurability
    Apply damage to durability
    */
    /****************************************************************************/
    void receiveEquipmentDamage(const int& damageToDurability); //Apply damage to durability
    /****************************************************************************/
    /*!
    \brief
    Add Stimpak
    \param addedStimpak
    Stimpak to add
    */
    /****************************************************************************/
    void addStimpak(const int& addedStimpak_);   //Add stimpak
    /****************************************************************************/
    /*!
    \brief
    Add RadAway
    \param addedRadAway
    Radaway to add
    */
    /****************************************************************************/
    void addRadAway(const int& addedRadaway_);   //Add RadAway
    /****************************************************************************/
    /*!
    \brief
    Use Stimpak
    */
    /****************************************************************************/
    void useStimpak();  
    /****************************************************************************/
    /*!
    \brief
    Use RadAway
    */
    /****************************************************************************/
    void useRadAway();

    /****************************************************************************/
    /*!
    \brief
    Assign Outfit to dweller

    \param newOutfit_
    what outfit to add

    \return
    Outfit of dweller
    */
    /****************************************************************************/
    Outfit* assignOutfit(Outfit* newOutfit_);  //Assign outfit
    /****************************************************************************/
    /*!
    \brief
    Assign Weapon to dweller

    \param newWeapon_
    what weapon to add

    \return
    Weapon of dweller
    */
    /****************************************************************************/
    Weapon* assignWeapon(Weapon* newWeapon_);  //Assign weapon

    /****************************************************************************/
    /*!
    \brief
    Is Dweller Dead

    \return
    Boolean; true if dead, false if alive

    */
    /****************************************************************************/
    bool isDead();     //Is Dweller Dead?

protected:
   
private:

    Vec2D position_;

    int SPECIAL_;

    int health_;

    int radiation_;

    int stimpak_;

    int radaway_;

    Outfit* outfit_;

    Weapon* weapon_;



};

#endif /*DWELLER_H*/