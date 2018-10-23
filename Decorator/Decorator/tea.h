#ifndef TEA_H
#define TEA_H

#include "basedrink.h"

class Tea: public BaseDrink
{
public:
    Tea();
    void description() override;
    int cost() override;
};

#endif // TEA_H
