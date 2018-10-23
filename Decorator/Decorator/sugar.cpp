#include "sugar.h"
#include <iostream>

Sugar::Sugar(BaseDrink *base): Condiment(base)
{

}

void Sugar::description()
{

base_->description();
std::cout<<" +Sugar";
}

int Sugar::cost()
{
return addon_cost + base_->cost();
}
