#ifndef ADAPTER_H
#define ADAPTER_H

#include "newelectricitysystem.h"
#include "oldelectricitysystem.h"

class UniversalAdapter : public NewElectricitySystem, public OldElectricitySystem
{
public:
    UniversalAdapter()
    {
        std::cout << "Prepare universal adapter\n";
    }

    std::string matchWideSocket() const override
    {
        return "by using adapter for " + OldElectricitySystem::matchThinSocket();
    }

    std::string matchThinSocket() const override
    {
        return "by using adapter for " + NewElectricitySystem::matchWideSocket();
    }
};

#endif // ADAPTER_H
