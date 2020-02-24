#include "mercedes.h"
#include "ambulancecar.h"
#include "superfastcar.h"

#include <memory>

int main()
{
    std::unique_ptr<Car> doctorsCar = std::make_unique<Mercedes>();
    doctorsCar->go();

    std::unique_ptr<Car> decoratedCar = std::make_unique<AmbulanceCar>(*doctorsCar);
    decoratedCar->go();

    std::unique_ptr<Car> superFastCar = std::make_unique<SuperFastCar>(*decoratedCar);
    superFastCar->go();

    return 0;
}

