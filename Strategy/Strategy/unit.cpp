#include "unit.h"

Unit::Unit()
{

}

void Unit::setRangeWeapon(RangeWeapon *w)
{
    rw.reset(w);
}

void Unit::setMeleeWeapon(MeleeWeapon *w)
{
    mw.reset(w);
}


void Unit::sayName() const
{
    std::cout<<"My name is - "<<name<<std::endl;
}

void Unit::setName(const std::string &s)
{
    name = s;
}

void Unit::makeRangeAttack() const
{
    rw->makeAttack();
}

void Unit::makeMeleeAttack() const
{
    mw->makeAttack();
}
