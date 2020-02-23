#ifndef MASTER_H
#define MASTER_H

#include "laptopbuilder.h"

class Master
{
public:
    void setLaptopBuilder(LaptopBuilder *laptopBuilder);

    void constructLaptop();

    Laptop *getLaptop() { return _laptopBuilder->getLaptop(); }

private:
    LaptopBuilder *_laptopBuilder;
};


#endif // MASTER_H

void Master::setLaptopBuilder(LaptopBuilder *laptopBuilder)
{
    _laptopBuilder = laptopBuilder;
}

void Master::constructLaptop()
{
    _laptopBuilder->createNewLaptop();
    _laptopBuilder->setupMonitorResolution();
    _laptopBuilder->setupProcessor();
    _laptopBuilder->setupMemory();
    _laptopBuilder->setupHDD();
    _laptopBuilder->setupBatary();
}
