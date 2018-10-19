#ifndef SWORD_H
#define SWORD_H
#include "meleeweapon.h"


class Sword: public MeleeWeapon
{
public:
    Sword();
    void makeAttack() override;
};

#endif // SWORD_H
