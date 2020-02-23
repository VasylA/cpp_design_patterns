#ifndef GAMELAPTOPBUILDER_H
#define GAMELAPTOPBUILDER_H

#include "laptop.h"
#include "laptopbuilder.h"

class GameLaptopBuilder : public LaptopBuilder
{
public:
    virtual void setupMonitorResolution();
    virtual void setupProcessor();
    virtual void setupMemory();
    virtual void setupHDD();
    virtual void setupBatary();
};

#endif // GAMELAPTOPBUILDER_H

void GameLaptopBuilder::setupMonitorResolution()
{
    _laptop->setMonitorResolution("1900x1200");
}

void GameLaptopBuilder::setupProcessor()
{
    _laptop->setProcessor("Core 2 Duo, 3.2 GHz");
}

void GameLaptopBuilder::setupMemory()
{
    _laptop->setMemory("6144 Mb");
}

void GameLaptopBuilder::setupHDD()
{
    _laptop->setHdd("500 Gb");
}

void GameLaptopBuilder::setupBatary()
{
    _laptop->setBattery("6 lbs");
}
