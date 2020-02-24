#ifndef OLDELECTRICITYSYSTEM_H
#define OLDELECTRICITYSYSTEM_H

#include <iostream>

class OldElectricitySystem
{
public:
    OldElectricitySystem()
    {
        std::cout << "Old electricity system available here\n";
    }

    std::string matchThinSocket() const
    {
        return "thin socket (220V)";
    }
};

#endif // OLDELECTRICITYSYSTEM_H
