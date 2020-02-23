#include "mercedes.h"
#include "ambulancecar.h"
#include "superfastcar.h"

int main()
{
    Car *doctorsCar = new Mercedes;
    doctorsCar->go();

    std::cout << std::endl;

    Car *decoratedCar = new AmbulanceCar(doctorsCar);
    decoratedCar->go();

    std::cout << std::endl;

    Car *superFastCar = new SuperFastCar(decoratedCar);
    superFastCar->go();

    std::cout << std::endl;

    delete superFastCar;
    delete decoratedCar;
    delete doctorsCar;

    return 0;
}

