#include "Outfit.h"

Outfit::Outfit()
    :kSPECIAL(0)
{
}


Outfit::~Outfit()
{
}

Outfit::Outfit(const string& outfitName, const int& initalDurability, const int& outfitSPECIALValue)
    :kSPECIAL(outfitSPECIALValue)
{

}