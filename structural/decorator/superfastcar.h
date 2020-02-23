#ifndef SUPERFASTCAR
#define SUPERFASTCAR

#include "decoratorcar.h"

#include "iostream"

using std::cout;
using std::endl;

class SuperFastCar : public DecoratorCar
{
public:
    SuperFastCar(Car *decoratedCar)
        : DecoratorCar(decoratedCar)
    {
    }

    void go() override
    {
        DecoratorCar::go();
        cout << "I have hyper engine. I'm super fast!!" << endl;
    }
};

#endif // SUPERFASTCAR

