#include <iostream>
#include <memory>

#include "unit.h"
#include "bow.h"
#include "axe.h"
#include "sword.h"

using namespace std;

int main()
{
    Unit ork;
    std::string name{"Gromilla"};
    ork.setName(name);
    ork.sayName();
    ork.setRangeWeapon(new Bow{});

    Unit ork2;
    ork2.setName("Xulio");
    ork2.sayName();

    ork2.setMeleeWeapon(new Axe{});
    ork2.setRangeWeapon(new Bow{});

    ork2.makeMeleeAttack();
    ork2.makeRangeAttack();

    // Change behaiviour in runtime
    ork2.sayName();
    std::cout<<" is change weapon"<<std::endl;
    ork2.setMeleeWeapon(new Sword{});
    ork2.makeMeleeAttack();
    ork2.makeRangeAttack();


    std::shared_ptr<Unit> pt(new Unit);
    pt->setName("Balrog");
    pt->sayName();
    pt->setMeleeWeapon(new Axe{});
    pt->setRangeWeapon(new Bow{});
    pt->makeMeleeAttack();
    pt->makeRangeAttack();



    return 0;
}
