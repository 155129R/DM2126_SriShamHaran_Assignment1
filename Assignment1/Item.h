#pragma once
#include "GameObject.h"
class Item :
    public GameObject
{
public:
    Item();

    virtual ~Item();

    Item(const string&, const int&);

    virtual void receiveDamage(const int&) = 0;

    const int getDurabilty();

protected:

    int durability_;

private:

};

