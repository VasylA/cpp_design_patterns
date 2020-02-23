#ifndef CONCRETESLABWALLCREATOR_H
#define CONCRETESLABWALLCREATOR_H

#include "iwallcreator.h"

class ConcreteSlabWallCreator : public IWallCreator
{
public:
    ConcreteSlabWallCreator() {};

    void buildWall();
    void buildWallWithDoor();
    void buildWallWithWindow();
};

#endif // CONCRETESLABWALLCREATOR_H
