#ifndef IBUILDINGCOMPANY_H
#define IBUILDINGCOMPANY_H

#include <iwallcreator.h>

class IBuildingCompany
{
public:
    IBuildingCompany()
        : _wallCreator(nullptr)
    {}
    virtual ~IBuildingCompany() {}

    virtual void buildFoundation() = 0;
    virtual void buildRoom() = 0;
    virtual void buildRoof() = 0;

    IWallCreator *wallCreator() const
    {
        return _wallCreator;
    }
    void setWallCreator(IWallCreator *wallCreator)
    {
        _wallCreator = wallCreator;
    }

protected:
    IWallCreator* _wallCreator;
};

#endif // IBUILDINGCOMPANY_H
