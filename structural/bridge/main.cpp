#include "buildingcompany.h"
#include "brickwallcreator.h"
#include "concreteslabwallcreator.h"

void BuildTestHouse()
{
    IWallCreator *brickWallCreator = new BrickWallCreator();
    IWallCreator *concreteSlabWallCreator = new ConcreteSlabWallCreator();

    IBuildingCompany *buildingCompany = new BuildingCompany;

    buildingCompany->buildFoundation();

    buildingCompany->setWallCreator(concreteSlabWallCreator);
    buildingCompany->buildRoom();

    buildingCompany->setWallCreator(brickWallCreator);
    buildingCompany->buildRoom();
    buildingCompany->buildRoom();

    buildingCompany->setWallCreator(concreteSlabWallCreator);
    buildingCompany->buildRoom();

    buildingCompany->buildRoof();

    delete concreteSlabWallCreator;
    delete brickWallCreator;

    delete buildingCompany;
}

int main()
{
    BuildTestHouse();

    return 0;
}
