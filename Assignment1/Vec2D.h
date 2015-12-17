/****************************************************************************/
/*!
\file Vec2D.h
\author Sri Sham Haran S/O R Raja
\par email: 155129R@mymail.nyp.edu.sg
\brief
Struct to define Vec2D
*/
/****************************************************************************/

#ifndef VEC2D_H
#define VEC2D_H

struct Vec2D
{

public:

    /****************************************************************************/
    /*!
    \brief
    [CONSTRUCTOR] Intialize instance of Vec2D class and instantiate member variables
    */
    /****************************************************************************/
    Vec2D();    //[CONSTRUCTOR] Intialize instance of Vec2D class and instantiate member variables
    /****************************************************************************/
    /*!
    \brief
    [CONSTRUCTOR](Override) Intialize instance of Vec2D class and instantiate member variables and take in (x,y) values

    \param xPos
    x coordinate

    \param yPos
    y coordinate
    */
    /****************************************************************************/
    Vec2D(double xPos, double yPos); //[CONSTRUCTOR](Override) Intialize instance of Vec2D class and instantiate member variables and take in (x,y) values


    
    double x;
    
    double y;

};

#endif /*VEC2D_H*/