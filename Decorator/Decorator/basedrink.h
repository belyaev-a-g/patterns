#ifndef BASEDRINK_H
#define BASEDRINK_H


class BaseDrink
{
public:
    BaseDrink();

    virtual void description() = 0;
    virtual int cost() = 0;

};

#endif // BASEDRINK_H
