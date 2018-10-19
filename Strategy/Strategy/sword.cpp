#include "sword.h"

#include <iostream>

Sword::Sword()
{

}

void Sword::makeAttack()
{
    std::cout<<"My sword is bloody and dangerous"<<std::endl;
    // Example of calling pure virtual method
    ::MeleeWeapon::makeAttack();
}
