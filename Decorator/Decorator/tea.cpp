#include "tea.h"
#include <iostream>

Tea::Tea()
{

}

void Tea::description()
{
    std::cout<<"Natural tea";
}

int Tea::cost()
{
    return 40;
}
