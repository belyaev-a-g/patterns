#include "observer.h"

Observer::Observer()
{

}

void Observer::registerClient(Client *c)
{
    lp.push_back(c);
}

void Observer::unRegisterClient(Client *c)
{
    lp.remove(c);

    // Long solution - if somebody don't know STL
    /*
    for(auto i = lp.begin(); i != lp.end(); ++i)
        if(*i == c)
            lp.erase(i);
            */
}

void Observer::notify()
{
    for(auto i:lp)
        i->update();
}


