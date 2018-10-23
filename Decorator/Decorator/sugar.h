#ifndef SUGAR_H
#define SUGAR_H
#include "condiment.h"

class Sugar: public Condiment
{
public:
    Sugar() = delete;
    Sugar(BaseDrink* base);

    void description() override;
    int cost() override;

private:
    int addon_cost = 5;

};

#endif // SUGAR_H
