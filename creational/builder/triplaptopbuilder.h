#ifndef TRIPLAPTOPBUILDER_H
#define TRIPLAPTOPBUILDER_H

#include "laptop.h"
#include "laptopbuilder.h"

class TripLaptopBuilder : public LaptopBuilder
{
public:
    virtual void setupMonitorResolution();
    virtual void setupProcessor();
    virtual void setupMemory();
    virtual void setupHDD();
    virtual void setupBatary();
};

#endif // TRIPLAPTOPBUILDER_H

void TripLaptopBuilder::setupMonitorResolution()
{
    _laptop->setMonitorResolution("1200x800");
}

void TripLaptopBuilder::setupProcessor()
{
    _laptop->setProcessor("AMD E2-3000M, 1.8 GHz");
}

void TripLaptopBuilder::setupMemory()
{
    _laptop->setMemory("3072 Mb");
}

void TripLaptopBuilder::setupHDD()
{
    _laptop->setHdd("500 Gb");
}

void TripLaptopBuilder::setupBatary()
{
    _laptop->setBattery("9 lbs");
}
