#ifndef OLDELECTRICITYSYSTEM_H
#define OLDELECTRICITYSYSTEM_H

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class OldElectricitySystem
{
public:
    OldElectricitySystem()
    {
        cout << "Old electricity system" << endl;
    }

    string matchThinSocket()
    {
        return "220V";
    }
};


#endif // OLDELECTRICITYSYSTEM_H
