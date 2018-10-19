#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <string>
#include <memory>

#include "rangeweapon.h"
#include "meleeweapon.h"

class Unit
{
public:
    Unit();
    ~Unit(){std::cout<<"DTOR of UNIT - "<<name<<std::endl;}
    void setRangeWeapon(RangeWeapon* w);
    void setMeleeWeapon(MeleeWeapon* w);
    void sayName() const;
    void setName(const std::string &s);

    void makeRangeAttack() const;
    void makeMeleeAttack() const;



private:
    std::shared_ptr<RangeWeapon> rw;
    std::shared_ptr<MeleeWeapon> mw;

    std::string name;
    int health;
};

#endif // UNIT_H
