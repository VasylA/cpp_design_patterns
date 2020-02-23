#ifndef BRICKWALLCREATOR_H
#define BRICKWALLCREATOR_H

#include "iwallcreator.h"

class BrickWallCreator : public IWallCreator
{
public:
    BrickWallCreator() {}

    void buildWall();
    void buildWallWithDoor();
    void buildWallWithWindow();
};

#endif // BRICKWALLCREATOR_H
