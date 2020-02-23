#ifndef BUILDINGCOMPANY_H
#define BUILDINGCOMPANY_H

#include "Ibuildingcompany.h"

class BuildingCompany : public IBuildingCompany
{
public:
    BuildingCompany();
    ~BuildingCompany();

    void buildFoundation();
    void buildRoom();
    void buildRoof();
};

#endif // BUILDINGCOMPANY_H
