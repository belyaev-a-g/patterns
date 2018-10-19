#ifndef OBSERVER_H
#define OBSERVER_H

#include "client.h"
#include <list>
#include <memory>

class Observer
{
public:
    Observer();

    // Subscribe/Unsubscribe
    // Publish?
    void registerClient(Client* c);
    void unRegisterClient(Client* c);

    void notify();

private:
//    std::list<std::shared_ptr<Client>> lp;
    std::list<Client*> lp;

};

#endif // OBSERVER_H
