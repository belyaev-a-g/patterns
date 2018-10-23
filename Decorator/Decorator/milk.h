#ifndef MILK_H
#define MILK_H

#include "condiment.h"

class Milk: public Condiment
{
public:
    Milk() = delete;
    Milk(BaseDrink* base);

    void description() override;
    int cost() override;

private:
    int addon_cost = 10;

};

#endif // MILK_H
