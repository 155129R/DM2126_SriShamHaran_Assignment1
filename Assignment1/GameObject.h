#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>
using std::string;

class GameObject
{
public:
    GameObject();													//[CONSTRUCTOR] Intialize instance of GameObject class and instantiate member variables
    virtual ~GameObject();											//[DESTRUCTOR]	Delete instance of GameObject class

    GameObject(const string& objectName);							//[CONSTRUCTOR](Override)	Intialize instance of GameObject class and instantiate member variables and takes in the name of the object

protected:
    const string kName;

private:

};

#endif /*GAMEOBJECT_H*/