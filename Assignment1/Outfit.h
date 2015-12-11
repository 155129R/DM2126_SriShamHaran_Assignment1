#pragma once
#include "Item.h"
class Outfit :
    public Item
{
public:
    Outfit();                   //[CONSTRUCTOR] Intialize instance of Outfit class and instantiate member variables
    virtual ~Outfit(); //[DESTRUCTOR]	Delete instance of Outfit class

    Outfit(const string& kName, const int& durability_, const int& kSPECIAL); //[CONSTRUCTOR] Intialize instance of Outfit class and instantiate member variables and takes in the name of outfit, initial durability and outfit SPECIAL value

    const int getSPECIAL();     //[GETTER] Gets special value
   
private:
    const int kSPECIAL;
};

