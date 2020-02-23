#ifndef LAPTOPBUILDER_H
#define LAPTOPBUILDER_H

#include <laptop.h>

class LaptopBuilder
{
public:
    virtual ~LaptopBuilder() {}

    Laptop *getLaptop() const { return _laptop; }

    void createNewLaptop() { _laptop = new Laptop; }

    virtual void setupMonitorResolution() = 0;
    virtual void setupProcessor() = 0;
    virtual void setupMemory() = 0;
    virtual void setupHDD() = 0;
    virtual void setupBatary() = 0;

protected:
    Laptop *_laptop;
};

#endif // LAPTOPBUILDER_H
