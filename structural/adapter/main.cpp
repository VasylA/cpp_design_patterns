#include "newelectricitysystem.h"
#include "oldelectricitysystem.h"
#include "electricitycustomer.h"
#include "adapter.h"

#include <memory>

int main()
{
    std::unique_ptr<INewElectricitySystem> newElectricitySystem = std::make_unique<NewElectricitySystem>();
    ElectricityCustomer::chargeNoteBook(*newElectricitySystem);

    std::unique_ptr<OldElectricitySystem> oldElectricitySystem = std::make_unique<OldElectricitySystem>();
    std::unique_ptr<INewElectricitySystem> adapter = std::make_unique<Adapter>(*oldElectricitySystem);
    ElectricityCustomer::chargeNoteBook(*adapter);

    return 0;
}
