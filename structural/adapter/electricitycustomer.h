#ifndef ELECTRICITYCUSTOMER_H
#define ELECTRICITYCUSTOMER_H

#include "newelectricitysystem.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class ElectricityCustomer
{
public:
    static void chargeNoteBook(INewElectricitySystem *electricitySystem)
    {
        cout << electricitySystem->matchWideSocket() << endl;
    }
};

#endif // ELECTRICITYCUSTOMER_H
