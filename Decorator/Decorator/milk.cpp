#include "milk.h"
#include <iostream>


Milk::Milk(BaseDrink *base):Condiment(base)
{

}

void Milk::description()
{
    base_->description();
    std::cout<<" +Milk";
}

int Milk::cost()
{
    return addon_cost + base_->cost();
}


