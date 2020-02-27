#ifndef NEWELECTRICITYSYSTEM_H
#define NEWELECTRICITYSYSTEM_H

#include <iostream>

class NewElectricitySystem
{
public:
    virtual ~NewElectricitySystem() = default;

    virtual std::string matchWideSocket() const
    {
        return "wide socket (220V)";
    }
};

#endif // NEWELECTRICITYSYSTEM_H
