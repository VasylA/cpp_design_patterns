#ifndef ELECTRICITYCUSTOMER_H
#define ELECTRICITYCUSTOMER_H

#include "inewelectricitysystem.h"

class ElectricityCustomer
{
public:
    static void chargeNoteBook(const INewElectricitySystem &electricitySystem)
    {
        std::cout << "Pluged in " << electricitySystem.matchWideSocket() << std::endl << std::endl;
    }
};

#endif // ELECTRICITYCUSTOMER_H
