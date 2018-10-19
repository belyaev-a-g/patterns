#ifndef RANGEWEAPON_H
#define RANGEWEAPON_H

#include <iostream>

class RangeWeapon
{
public:
    RangeWeapon();
    ~RangeWeapon() { std::cout<<"DTOR of RangeWeapon"<<std::endl;}
    virtual void makeAttack() = 0;
};

#endif // RANGEWEAPON_H
