#include "newelectricitysystem.h"
#include "oldelectricitysystem.h"
#include "universaladapter.h"

#include <memory>

void chargeNoteBook(const NewElectricitySystem &electricitySystem)
{
    std::cout << "NoteBook pluged in " << electricitySystem.matchWideSocket() << std::endl << std::endl;
}

void connectOldDevice(const OldElectricitySystem &electricitySystem)
{
    std::cout << "Old device pluged in " << electricitySystem.matchThinSocket() << std::endl << std::endl;
}

int main()
{
    std::unique_ptr<NewElectricitySystem> newElectricitySystem = std::make_unique<NewElectricitySystem>();
    chargeNoteBook(*newElectricitySystem);

    std::unique_ptr<UniversalAdapter> adapter = std::make_unique<UniversalAdapter>();
    chargeNoteBook(*adapter);

    std::unique_ptr<OldElectricitySystem> oldElectricitySystem = std::make_unique<OldElectricitySystem>();
    connectOldDevice(*oldElectricitySystem);

    connectOldDevice(*adapter);

    return 0;
}
