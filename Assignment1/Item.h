/****************************************************************************/
/*!
\file Item.h
\author Sri Sham Haran S/O R Raja
\par email: 155129R@mymail.nyp.edu.sg
\brief
Class to define the class for Item
*/
/****************************************************************************/

/****************************************************************************/
/*!
Class Item:
\brief Class to define the class for Item
*/
/****************************************************************************/
#ifndef ITEM_H
#define ITEM_H
#include "GameObject.h"

class Item : public GameObject
{
public:

    /****************************************************************************/
    /*!
    \brief
    [DESTRUCTOR]	Delete instance of Item class
    */
    /****************************************************************************/
    virtual ~Item(); //[DESTRUCTOR]	Delete instance of Item class

    /****************************************************************************/
    /*!
    \brief
    [CONSTRUCTOR] Intialize instance of Item class and instantiate member variables and takes in name of object and initial durability value

    \param kName
    Name of Item

    \param durability_
    intial durability value
    */
    /****************************************************************************/
    Item(const string& kName = "", const int& durability_ = 0);//[CONSTRUCTOR] Intialize instance of Item class and instantiate member variables and takes in name of object and initial durability value

    /****************************************************************************/
    /*!
    \brief
    Apply or Receive damage (Method to be inherited; Define in outfit and weapon)

    \param damageToItemDurability
    Damage value to be applied to durability
    */
    /****************************************************************************/
    virtual void receiveDamage(const int& damageToItemDurability) = 0;  //Apply or Receive damage (Define in outfit and weapon)

    /****************************************************************************/
    /*!
    \brief
    [GETTER] Gets durability value of item

    */
    /****************************************************************************/
    const int getDurability(); //[GETTER] Gets durability value of item

protected:

    int durability_;

private:

};

#endif /*ITEM_H*/