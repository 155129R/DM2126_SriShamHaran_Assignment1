/****************************************************************************/
/*!
\file Outfit.cpp
\author Sri Sham Haran S/O R Raja
\par email: 155129R@mymail.nyp.edu.sg
\brief
CPP to define  Outfit functions
*/
/****************************************************************************/
#include "Outfit.h"



Outfit::~Outfit()
{
}

Outfit::Outfit(const string& outfitName, const int& initalDurability, const int& outfitSPECIALValue)
    :Item(outfitName, initalDurability), kSPECIAL(outfitSPECIALValue)
{

}

const int Outfit::getSPECIAL()
{
    return this -> kSPECIAL;
}

void Outfit::receiveDamage(const int& damageToItemDurability)
{
    Outfit::durability_ -= damageToItemDurability;
}