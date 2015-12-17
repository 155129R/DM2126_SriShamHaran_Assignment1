/****************************************************************************/
/*!
\file Outfit.h
\author Sri Sham Haran S/O R Raja
\par email: 155129R@mymail.nyp.edu.sg
\brief
Class to define the class for Outfit
*/
/****************************************************************************/

/****************************************************************************/
/*!
Class Outfit:
\brief Class to define the class for Outfit
*/
/****************************************************************************/
#ifndef OUTFIT_H
#define OUTFIT_H
#include "Item.h"
class Outfit : public Item
{
public:
  
    /****************************************************************************/
    /*!
    \brief
    [DESTRUCTOR]	Delete instance of Outfit class
    */
    /****************************************************************************/
    virtual ~Outfit(); //[DESTRUCTOR]	Delete instance of Outfit class

    /****************************************************************************/
    /*!
    \brief
    //[CONSTRUCTOR] Intialize instance of Outfit class and instantiate member variables and takes in the name of outfit, initial durability and outfit SPECIAL value

    \param outfitName
    Name of outfit

    \param initialDurability_
    initial durability

    \param outfitSPECIALValue
    Outfit's SPECIAL value
    */
    /****************************************************************************/
    Outfit(const string& outfitName = "", const int& initialDurability_ = 0, const int& outfitSPECIALValue = 0); //[CONSTRUCTOR] Intialize instance of Outfit class and instantiate member variables and takes in the name of outfit, initial durability and outfit SPECIAL value

    /****************************************************************************/
    /*!
    \brief
    [GETTER] Gets special value
    */
    /****************************************************************************/
    const int getSPECIAL();     //[GETTER] Gets special value

    /****************************************************************************/
    /*!
    \brief
    Apply damage to outfit's durability
    */
    /****************************************************************************/
    void receiveDamage(const int& damageToItemDurability); //Apply damage to outfit's durability
   
private:
    const int kSPECIAL;
};

#endif /*OUTFIT_H*/