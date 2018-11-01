#include <iostream>
#include <memory>

using namespace std;


class Auto
{
public:
    Auto() {
        //        std::cout<<"CTOR of Auto"<<std::endl;
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


int main()
{
    cout << "Hello World!" << endl;

    std::shared_ptr<SimpleFactory> factory(new SimpleFactory);
    std::shared_ptr<Auto> sh1 = factory->createAuto(1);
    std::shared_ptr<Auto> sh2 = sh1;
    std::shared_ptr<Auto> sh3 = factory->createAuto(2);
    sh1 = factory->createAuto(3);
    sh3 = sh2;
    sh1 = sh2;

    cout<<"Time to destruct"<<endl;

    return 0;
}
