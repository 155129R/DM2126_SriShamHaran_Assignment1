#include "Outfit.h"

Outfit::Outfit()
    :kSPECIAL(0)
{
}


Outfit::~Outfit()
{
}

Outfit::Outfit(const string& outfitName, const int& initalDurability, const int& outfitSPECIALValue)
    :Item(outfitName, initalDurability), kSPECIAL(outfitSPECIALValue)
{

}

const int Outfit::getSPECIAL()
{
    return kSPECIAL;
}