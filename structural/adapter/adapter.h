#ifndef ADAPTER_H
#define ADAPTER_H

#include "oldelectricitysystem.h"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Adapter: public INewElectricitySystem
{
public:
    Adapter(OldElectricitySystem* adaptee)
    {
        _adaptee = adaptee;
    }
    virtual string matchWideSocket()
    {
        return _adaptee->matchThinSocket();
    }

private:
    OldElectricitySystem* _adaptee;
};

#endif // ADAPTER_H
