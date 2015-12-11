#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>
using std::string;

class GameObject
{
public:
    GameObject();						//[CONSTRUCTOR] Intialize instance of GameObject class and instantiate member variables
    
    virtual ~GameObject();				//[DESTRUCTOR]	Delete instance of GameObject class

    virtual string getName(void) ;               //[GETTER] Get name of object

    static int getCount();                     //[GETTER] Get the number of this type that has been instantiated

protected:
 
    GameObject(const string& objectName = "");          //[CONSTRUCTOR](Override)	Intialize instance of GameObject class and instantiate member variables and takes in the name of the object

private:
    const string kName;                 //[Member Variable] Name of the object

    static int count;                          //[Member Variable] Number of this type that has been instantiated
};

#endif /*GAMEOBJECT_H*/