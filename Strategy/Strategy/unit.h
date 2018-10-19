#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <string>

#include "rangeweapon.h"
#include "meleeweapon.h"

class Unit
{
public:
    Unit();
    void setRangeWeapon(RangeWeapon* w);
    void setMeleeWeapon(MeleeWeapon* w);
    void sayName() const;
    void setName(const std::string &s);

    void makeRangeAttack() const;
    void makeMeleeAttack() const;



private:
    RangeWeapon* rw;
    MeleeWeapon* mw;

    std::string name;
    int health;
};

#endif // UNIT_H
