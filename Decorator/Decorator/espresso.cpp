#include "espresso.h"
#include <iostream>

Espresso::Espresso()
{

}

void Espresso::description()
{
    std::cout<<"Magic espresso";
}

int Espresso::cost()
{
    return 50;
}
