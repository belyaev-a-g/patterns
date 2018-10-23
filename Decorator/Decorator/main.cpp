#include <iostream>
#include "basedrink.h"
#include "espresso.h"
#include "tea.h"
#include "chocolate.h"
#include "milk.h"
#include "sugar.h"



int main()
{
    Espresso e;
    e.description();
    e.cost();


    Tea t;
    t.cost();
    t.description();

    Chocolate c;
    c.cost();
    c.description();


    std::cout <<std::endl<< "Time of Espresso with double Milk and triple sugar!" << std::endl;
    Condiment* cnd = new Sugar(new Sugar(new Sugar(new Milk(new Milk(new Espresso)))));
    cnd->description();
    std::cout<<std::endl<<"Cost = "<<cnd->cost()<<std::endl;

    return 0;
}
