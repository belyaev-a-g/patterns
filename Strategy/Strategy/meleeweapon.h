#ifndef MELEEWEAPON_H
#define MELEEWEAPON_H

#include <iostream>

class MeleeWeapon
{
public:
    MeleeWeapon();
    ~MeleeWeapon() { std::cout<<"DTOR of MeleeWeapon"<<std::endl;}
    virtual void makeAttack() = 0;
};

#endif // MELEEWEAPON_H
