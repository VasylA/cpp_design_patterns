#ifndef IBUILDINGCOMPANY_H
#define IBUILDINGCOMPANY_H

#include "iwallcreator.h"

#include <memory>

class IBuildingCompany
{
public:
    IBuildingCompany() = default;
    virtual ~IBuildingCompany() = default;

    virtual void buildFoundation() const = 0;
    virtual void buildRoom() const = 0;
    virtual void buildRoof() const = 0;

    void setWallCreator(std::shared_ptr<IWallCreator> wallCreator)
    {
        m_wallCreator = wallCreator;
    }

protected:
    std::shared_ptr<IWallCreator> m_wallCreator;
};

#endif // IBUILDINGCOMPANY_H
