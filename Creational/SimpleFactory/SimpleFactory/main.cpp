#include <iostream>
#include <memory>

using namespace std;


class Auto
{
public:
    Auto() {
        //        std::cout<<"CTOR of Auto"<<std::endl;
    }
    virtual void beep() {
        cout<<"Default beep"<<endl;
    }
};

class Bus: public Auto
{
public:
    Bus() {
        std::cout<<"CTOR of Bus"<<std::endl;
    }
    ~Bus() {
        std::cout<<"DTOR of Bus"<<std::endl;
    }

    void beep() override {
        cout<<"BUS beep-beep"<<endl;
    }
};


class Truck: public Auto
{
public:
    Truck() {
        std::cout<<"CTOR of Truck"<<std::endl;
    }
    ~Truck() {
        std::cout<<"DTOR of Truck"<<std::endl;
    }

    void beep() override {
        cout<<"Truck BEEEEP-BEEEP!!!!"<<endl;
    }
};


class Car: public Auto
{
public:
    Car() {
        std::cout<<"CTOR of Car"<<std::endl;
    }
    ~Car() {
        std::cout<<"DTOR of Car"<<std::endl;
    }

    void beep() override {
        cout<<"Car beep"<<endl;
    }
};

class SimpleFactory
{
public:
    SimpleFactory() {}
    std::shared_ptr<Auto> createAuto(int i) {
        if(i == 1)
            return std::shared_ptr<Auto>(new Bus);
        if(i == 2)
            return std::shared_ptr<Auto>(new Truck);
        else
            return std::shared_ptr<Auto>(new Car);
    }
};

void foo(std::shared_ptr<Auto> p) {
    p->beep();
}


int main()
{
    cout << "Hello World!" << endl;

    std::shared_ptr<SimpleFactory> factory(new SimpleFactory);
    std::shared_ptr<Auto> sh1 = factory->createAuto(1);
    std::shared_ptr<Auto> sh2 = sh1;
    std::shared_ptr<Auto> sh3 = factory->createAuto(2);
    sh1 = factory->createAuto(3);
    foo(sh1);
    sh3 = sh2;
    sh1 = sh2;

    foo(sh1);

    //Example - how to convert shared_ptr<Base> to shared_ptr<Derived>
    // May be antipattern - or design problem
    std::shared_ptr<Truck> st = std::dynamic_pointer_cast<Truck>(factory->createAuto(2));
    std::shared_ptr<Auto> at = st;//std::dynamic_pointer_cast<Truck>(factory->createAuto(2));
    foo(at);
    foo(st);


    cout<<"Time to destruct"<<endl;

    return 0;
}
