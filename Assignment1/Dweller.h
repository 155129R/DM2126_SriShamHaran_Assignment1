#pragma once
#include "GameObject.h"
class Dweller :
    public GameObject
{

public:

    Dweller();                  //[CONSTRUCTOR] Intialize instance of Dweller class and instantiate member variables

    Dweller(const string&, const int&);

    virtual ~Dweller();

    const int getSPECIAL();

    const int getCurrentHealth();

    const int getCurrentRadDamage();

    const int getAttackDmg();

    //void setPosition(const Vec2D&);

    //const Vec2D getPosition();

    void receiveHealthDamage(const int&);

    void receiveRadDamage(const int&);

    void receiveEquipmentDamage(const int&);

    void addStimpak(const int&);

    void addRadAway(const int&);

    void useStimpak();

    void useRadAway();

    //Outfit* assignOutfit(Outfit*);

    //Weapon* assignWeapon(Weapon*);

    bool isDead();

protected:
    
    int position_;

    int SPECIAL_;

private:

};

