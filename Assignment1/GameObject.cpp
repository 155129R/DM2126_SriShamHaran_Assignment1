/****************************************************************************/
/*!
\file GameObject.cpp
\author Sri Sham Haran S/O R Raja
\par email: 155129R@mymail.nyp.edu.sg
\brief
CPP to define  GameObject functions
*/
/****************************************************************************/
#include "GameObject.h"

#include <iostream>

int GameObject::count = 0;

GameObject::~GameObject()
{
    std::cout << "GameObject was destroyed." << std::endl; //For Testing
    --count; 
}

GameObject::GameObject(const string& objectName)
:kName(objectName)
{
   
    std::cout << "GameObject was instantiated. With the objectName: "<< objectName << std::endl; //For Testing
    std::cout << "GameObject was instantiated. With the kName: " << kName << std::endl; //For Testing
    count++;
}

int GameObject::getCount()
{
    return count;
}

string GameObject::getName(void)
{
    return this-> kName;
}