#ifndef INEWELECTRICITYSYSTEM_H
#define INEWELECTRICITYSYSTEM_H

#include <string>

class INewElectricitySystem
{
public:
    virtual std::string matchWideSocket() const = 0;
};

#endif // INEWELECTRICITYSYSTEM_H
