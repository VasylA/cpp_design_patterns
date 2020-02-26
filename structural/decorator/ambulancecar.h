#ifndef AMBULANCECAR
#define AMBULANCECAR

#include "decoratedcar.h"

#include "iostream"

class AmbulanceCar : public DecoratedCar
{
public:
    AmbulanceCar(const Car &car)
        : DecoratedCar(car) {}

    void go() const override
    {
        DecoratedCar::go();
        std::cout << "... beep-beep-beeeeep...\n";
    }
};

#endif // AMBULANCECAR

