#include "GameObject.h"

#include <iostream>

GameObject::GameObject()
{
    std::cout << "GameObject was instantiated. No override" << std::endl; //For Testing
}


GameObject::~GameObject()
{
    std::cout << "GameObject was destroyed." << std::endl; //For Testing
}

GameObject::GameObject(const string& objectName)
    :kName(objectName)
{
    std::cout << "GameObject was instantiated. With the objectName: "<< objectName << std::endl; //For Testing
    std::cout << "GameObject was instantiated. With the kName: " << kName << std::endl; //For Testing
}

int GameObject::getCount()
{
    return count;
}

string GameObject::getName(void)
{
    return kName;
}