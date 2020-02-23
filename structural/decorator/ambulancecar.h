#ifndef AMBULANCECAR
#define AMBULANCECAR

#include "decoratorcar.h"

#include "iostream"

using std::cout;
using std::endl;

class AmbulanceCar : public DecoratorCar
{
public:
    AmbulanceCar(Car *decoratedCar)
        : DecoratorCar(decoratedCar)
    {
    }

    void go() override
    {
        DecoratorCar::go();
        cout << "... beep-beep-beeeeep..." << endl;
    }
};

#endif // AMBULANCECAR

