#include "building.h"
#include "floor.h"
#include "visitor.h"

Building::Building(const string &name, int buildingAge, int electricityId)
    : IElement(),
      _name(name),
      _age(buildingAge),
      _electricityId(electricityId)
{
}

void Building::accept(IVisitor *visitor)
{
    visitor->visit(this);
    for (Floor *floor : _floors)
    {
        floor->accept(visitor);
    }
}

list<Floor *> Building::floors() const
{
    return _floors;
}

void Building::addFloor(Floor *floor)
{
    _floors.push_back(floor);
}
