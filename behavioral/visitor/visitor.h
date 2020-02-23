#ifndef VISITOR_H
#define VISITOR_H

class Building;
class Floor;
class Room;

class IVisitor
{
public:
    virtual void visit(Building *building) = 0;
    virtual void visit(Floor *floor) = 0;
    virtual void visit(Room *room) = 0;
};

#endif // VISITOR_H
