#ifndef CONDIMENT_H
#define CONDIMENT_H
#include "basedrink.h"

class Condiment: public BaseDrink
{
public:
    Condiment() = delete;
    Condiment(BaseDrink* base);

protected:
    BaseDrink* base_;
};

#endif // CONDIMENT_H
