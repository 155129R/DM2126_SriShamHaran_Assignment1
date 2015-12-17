/****************************************************************************/
/*!
\file GameObject.h
\author Sri Sham Haran S/O R Raja
\par email: 155129R@mymail.nyp.edu.sg
\brief
Class to define the base class for all Game Objects
*/
/****************************************************************************/

/****************************************************************************/
/*!
Class GameObject:
\brief Class to define the base class for all Game Objects
*/
/****************************************************************************/

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>
using std::string;

class GameObject
{
public:
 
    /****************************************************************************/
    /*!
    \brief
    [DESTRUCTOR]	Delete instance of GameObject class
    */
    /****************************************************************************/
    virtual ~GameObject();			

    /****************************************************************************/
    /*!
    \brief
    [GETTER]	Get name of object

    \return
    String output of Name
    */
    /****************************************************************************/
    virtual string getName(void);               //[GETTER] Get name of object

    /****************************************************************************/
    /*!
    \brief
    [GETTER]	Get number of of object of this type instantiated

    \return
    Resulting int output of count
    */
    /****************************************************************************/
    static int getCount();

protected:
 
    /****************************************************************************/
    /*!
    \brief
    [CONSTRUCTOR](Override)	Intialize instance of GameObject class and instantiate member variables and takes in the name of the object
    
    \param objectName
    Name for object

    */
    /****************************************************************************/
    GameObject(const string& objectName = "");          //[CONSTRUCTOR](Override)	Intialize instance of GameObject class and instantiate member variables and takes in the name of the object

private:

    const string kName;                 //[Member Variable] Name of the object

    static int count;                   //[Member Variable] Number of this type that has been instantiated
};

#endif /*GAMEOBJECT_H*/