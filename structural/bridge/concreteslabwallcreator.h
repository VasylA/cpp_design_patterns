#ifndef CONCRETESLABWALLCREATOR_H
#define CONCRETESLABWALLCREATOR_H

#include "iwallcreator.h"

class ConcreteSlabWallCreator : public IWallCreator
{
public:
    void buildWall() const override;
    void buildWallWithDoor() const override;
    void buildWallWithWindow() const override;
};

#endif // CONCRETESLABWALLCREATOR_H
