#ifndef BRICKWALLCREATOR_H
#define BRICKWALLCREATOR_H

#include "iwallcreator.h"

class BrickWallCreator : public IWallCreator
{
public:
    void buildWall() const override;
    void buildWallWithDoor() const override;
    void buildWallWithWindow() const override;
};

#endif // BRICKWALLCREATOR_H
