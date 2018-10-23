#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "basedrink.h"

class Espresso: public BaseDrink
{
public:
    Espresso();

    void description() override ;
    int cost() override ;
};

#endif // ESPRESSO_H
