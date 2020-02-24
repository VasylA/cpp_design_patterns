#ifndef ADAPTER_H
#define ADAPTER_H

#include "inewelectricitysystem.h"
#include "oldelectricitysystem.h"

class Adapter : public INewElectricitySystem
{
public:
    Adapter(const OldElectricitySystem &adaptee)
        : _adaptee(adaptee)
    {
        std::cout << "Prepare adapter from old to new socket\n";
    }

    std::string matchWideSocket() const override
    {
        return "by using adapter for " + _adaptee.matchThinSocket();
    }

private:
    const OldElectricitySystem &_adaptee;
};

#endif // ADAPTER_H
