#ifndef BUILDINGCOMPANY_H
#define BUILDINGCOMPANY_H

#include "ibuildingcompany.h"

class BuildingCompany : public IBuildingCompany
{
public:
    void buildFoundation() const override;
    void buildRoom() const override;
    void buildRoof() const override;
};

#endif // BUILDINGCOMPANY_H
