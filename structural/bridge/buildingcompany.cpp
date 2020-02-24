#include "buildingcompany.h"
#include "iwallcreator.h"

#include <iostream>

void BuildingCompany::buildFoundation() const
{
    std::cout << "Foundation is built.\n\n";
}

void BuildingCompany::buildRoom() const
{
    m_wallCreator->buildWallWithDoor();
    m_wallCreator->buildWall();
    m_wallCreator->buildWallWithWindow();
    m_wallCreator->buildWall();
    std::cout << "Room is built.\n\n";
}

void BuildingCompany::buildRoof() const
{
    std::cout << "Roof is built.\n\n";
}
