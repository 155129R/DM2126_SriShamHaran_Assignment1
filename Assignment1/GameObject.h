#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>
using std::string;

class GameObject
{
public:
    GameObject();						//[CONSTRUCTOR] Intialize instance of GameObject class and instantiate member variables
    
    virtual ~GameObject();				//[DESTRUCTOR]	Delete instance of GameObject class

    GameObject(const string&);          //[CONSTRUCTOR](Override)	Intialize instance of GameObject class and instantiate member variables and takes in the name of the object

    string getName(void);               //[GETTER] Get name of object

    int getCount();                     //[GETTER] Get the number of this type that has been instantiated

protected:
    const string kName;                 //[Member Variable] Name of the object

private:
    int count;                          //[Member Variable] Number of this type that has been instantiated
};

#endif /*GAMEOBJECT_H*/