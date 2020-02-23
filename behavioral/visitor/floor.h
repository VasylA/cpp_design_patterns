#ifndef FLOOR_H
#define FLOOR_H

#include "element.h"

#include <list>

using std::list;

class Room;
class IVisitor;

class Floor : public IElement
{
public:
    explicit Floor(int floorNumber = 0);

    inline int number() const { return _number; }

    list<Room *> rooms() const { return _rooms; }

    void addRoom(Room *room);

    void accept(IVisitor *visitor) override;

private:
    int _number;
    list<Room*> _rooms;
};

#endif // FLOOR_H
