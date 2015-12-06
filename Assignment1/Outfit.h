#pragma once
#include "Item.h"
class Outfit :
    public Item
{
public:
    Outfit();
    virtual ~Outfit();

    Outfit(const string&, const int&, const int&);

    const int getSPECIAL();
   
private:
    const int kSPECIAL;
};

