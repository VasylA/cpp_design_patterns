#include "concreteslabwallcreator.h"

#include <iostream>

void ConcreteSlabWallCreator::buildWall() const
{
    std::cout << "Concrete slab wall.\n";
}

void ConcreteSlabWallCreator::buildWallWithDoor() const
{
    std::cout << "Concrete slab wall with door.\n";
}

void ConcreteSlabWallCreator::buildWallWithWindow() const
{
    std::cout << "Concrete slab wall with window.\n";
}
