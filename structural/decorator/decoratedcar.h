#ifndef DECORATEDCAR
#define DECORATEDCAR

#include "car.h"

class DecoratedCar : public Car
{
public:
    DecoratedCar(const Car &car)
        : m_car(car) {}

    void go() const  override
    {
        m_car.go();
    }

private:
    const Car &m_car;
};

#endif // DECORATEDCAR
