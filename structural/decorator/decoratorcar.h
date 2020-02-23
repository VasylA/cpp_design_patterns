#ifndef DECORATORCAR
#define DECORATORCAR

#include "car.h"

class DecoratorCar : public Car
{
public:
    DecoratorCar(Car *decoratedCar)
    {
        _decoratedCar = decoratedCar;
    }

    Car *decoratedCar() const
    {
        return _decoratedCar;
    }
    void setDecoratedCar(Car *decoratedCar)
    {
        _decoratedCar = decoratedCar;
    }

    void go() override
    {
        _decoratedCar->go();
    }

private:
    Car *_decoratedCar;
};

#endif // DECORATORCAR





