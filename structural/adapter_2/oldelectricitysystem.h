#ifndef OLDELECTRICITYSYSTEM_H
#define OLDELECTRICITYSYSTEM_H

#include <iostream>

class OldElectricitySystem
{
public:
    virtual ~OldElectricitySystem() = default;

    virtual std::string matchThinSocket() const
    {
        return "thin socket (220V)";
    }
};

#endif // OLDELECTRICITYSYSTEM_H
