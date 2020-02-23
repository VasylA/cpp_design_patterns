#ifndef IWALLCREATOR_H
#define IWALLCREATOR_H

class IWallCreator
{
public:
    virtual void buildWall() = 0;
    virtual void buildWallWithDoor() = 0;
    virtual void buildWallWithWindow() = 0;
};

#endif // IWALLCREATOR_H
