#include "meleeweapon.h"
#include <iostream>

MeleeWeapon::MeleeWeapon()
{

}

void MeleeWeapon::makeAttack()
{
    std::cout<<"MeleeWeapon::makeAttack - abstract"<<std::endl;
}
