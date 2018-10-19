#ifndef AXE_H
#define AXE_H

#include "meleeweapon.h"


class Axe: public MeleeWeapon
{
public:
    Axe();
    void makeAttack() override;
};

#endif // AXE_H
