#ifndef NEWELECTRICITYSYSTEM_H
#define NEWELECTRICITYSYSTEM_H

#include "inewelectricitysystem.h"

#include <iostream>

class NewElectricitySystem : public INewElectricitySystem
{
public:
    NewElectricitySystem()
    {
        std::cout << "New electricity system used here\n";
    }

    std::string matchWideSocket() const override
    {
        return "wide socket (220V)";
    }
};

#endif // NEWELECTRICITYSYSTEM_H
