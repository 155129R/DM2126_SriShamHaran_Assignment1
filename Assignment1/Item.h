#pragma once
#include "GameObject.h"
class Item :
    public GameObject
{
public:
    Item();                                         //[CONSTRUCTOR] Intialize instance of Item class and instantiate member variables

    virtual ~Item(); //[DESTRUCTOR]	Delete instance of Item class

    Item(const string& objectName, const int& durablityValue);//[CONSTRUCTOR] Intialize instance of Item class and instantiate member variables and takes in name of object and initial durability value

    virtual void receiveDamage(const int&) = 0;  //Apply or Receive damage

    const int getDurabilty(); //[GETTER] Gets durability value of item

protected:

    int durability_;

private:

};

