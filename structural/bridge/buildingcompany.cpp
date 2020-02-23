#include "buildingcompany.h"
#include "iwallcreator.h"

#include <iostream>

using std::cout;
using std::endl;

BuildingCompany::BuildingCompany()
{
}

BuildingCompany::~BuildingCompany()
{
}

void BuildingCompany::buildFoundation()
{
    cout << "Foundation is built." << endl << endl;
}

void BuildingCompany::buildRoom()
{
    _wallCreator->buildWallWithDoor();
    _wallCreator->buildWall();
    _wallCreator->buildWallWithWindow();
    _wallCreator->buildWall();
    cout << "Room is built." << endl << endl;
}

void BuildingCompany::buildRoof()
{
    cout << "Roof is built." << endl << endl;
}
