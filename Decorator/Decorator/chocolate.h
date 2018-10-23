#ifndef CHOCOLATE_H
#define CHOCOLATE_H

#include "basedrink.h"

class Chocolate : public BaseDrink
{
public:
    Chocolate();
    void description() override;
    int cost() override;
};

#endif // CHOCOLATE_H
