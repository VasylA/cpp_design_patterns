#ifndef NEWELECTRICITYSYSTEM_H
#define NEWELECTRICITYSYSTEM_H

#include <iostream>

using std::cout;
using std::endl;
using std::string;


class INewElectricitySystem
{
public:
    virtual string matchWideSocket() = 0;
};

class NewElectricitySystem: public INewElectricitySystem
{
public:
    NewElectricitySystem()
    {
        cout <<"New electricity system\n";
    }

    virtual string matchWideSocket()
    {
        return "220V";
    }
};

#endif // NEWELECTRICITYSYSTEM_H
