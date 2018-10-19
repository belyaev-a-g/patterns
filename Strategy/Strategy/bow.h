#ifndef BOW_H
#define BOW_H
#include "rangeweapon.h"


class Bow : public RangeWeapon
{
public:
    Bow();

    void makeAttack() override;
};

#endif // BOW_H
