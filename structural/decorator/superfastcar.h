#ifndef SUPERFASTCAR
#define SUPERFASTCAR

#include "decoratorcar.h"

#include "iostream"

class SuperFastCar : public DecoratedCar
{
public:
    SuperFastCar(const Car &car)
        : DecoratedCar(car) {}

    void go() const override
    {
        DecoratedCar::go();
        std::cout << "I have hyper engine. I'm super fast!!! \n";
    }
};

#endif // SUPERFASTCAR

