#include "room.h"
#include "visitor.h"

Room::Room(int roomNumber)
    : _number(roomNumber)
{}

void Room::accept(IVisitor *visitor)
{
    visitor->visit(this);
}
