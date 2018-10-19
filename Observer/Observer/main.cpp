#include <iostream>
#include <list>

#include "observer.h"
#include "twitter.h"
#include "email.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;


    int myints[]= {17,89,7,14};
    std::list<int> mylist (myints,myints+4);

    mylist.remove(89);

    std::cout << "mylist contains:";
    for (std::list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
      std::cout << ' ' << *it;
    std::cout << '\n';


    Observer ob;
    ob.notify();



    Twitter* tw = new Twitter();
    Email* em = new Email();

    ob.registerClient(tw);
    ob.registerClient(em);

    ob.notify();
    ob.notify();

    ob.unRegisterClient(tw);
    cout << "Unsubscribe twitter" << endl;
    ob.notify();

    cout << "Bye World!" << endl;
    return 0;
}
