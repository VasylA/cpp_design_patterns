#include "floor.h"
#include "room.h"
#include "visitor.h"

Floor::Floor(int floorNumber)
    : _number(floorNumber)
{
}

void Floor::addRoom(Room *room)
{
    _rooms.push_back(room);
}

void Floor::accept(IVisitor *visitor)
{
    visitor->visit(this);
    for (Room *room : _rooms)
    {
        room->accept(visitor);
    }
}
