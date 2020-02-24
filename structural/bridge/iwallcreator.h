#ifndef IWALLCREATOR_H
#define IWALLCREATOR_H

class IWallCreator
{
public:
    virtual ~IWallCreator() = default;

    virtual void buildWall() const = 0;
    virtual void buildWallWithDoor() const = 0;
    virtual void buildWallWithWindow() const = 0;
};

#endif // IWALLCREATOR_H
