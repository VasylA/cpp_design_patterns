#include "buildingcompany.h"
#include "brickwallcreator.h"
#include "concreteslabwallcreator.h"

void BuildTestHouse()
{
    std::shared_ptr<IWallCreator> brickWallCreator = std::make_shared<BrickWallCreator>();
    std::shared_ptr<IWallCreator> concreteSlabWallCreator = std::make_shared<ConcreteSlabWallCreator>();

    std::unique_ptr<IBuildingCompany> buildingCompany = std::make_unique<BuildingCompany>();

    buildingCompany->buildFoundation();

    buildingCompany->setWallCreator(concreteSlabWallCreator);
    buildingCompany->buildRoom();

    buildingCompany->setWallCreator(brickWallCreator);
    buildingCompany->buildRoom();
    buildingCompany->buildRoom();

    buildingCompany->setWallCreator(concreteSlabWallCreator);
    buildingCompany->buildRoom();

    buildingCompany->buildRoof();
}

int main()
{
    BuildTestHouse();

    return 0;
}
