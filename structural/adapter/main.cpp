#include "newelectricitysystem.h"
#include "oldelectricitysystem.h"
#include "electricitycustomer.h"
#include "adapter.h"

int main()
{
    INewElectricitySystem *newElectricitySystem = new NewElectricitySystem;
    ElectricityCustomer::chargeNoteBook(newElectricitySystem);

    OldElectricitySystem *oldElectricitySystem = new OldElectricitySystem;
    INewElectricitySystem *adapter = new Adapter(oldElectricitySystem);
    ElectricityCustomer::chargeNoteBook(adapter);

    return 0;
}
