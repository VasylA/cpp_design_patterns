#ifndef ROOM_H
#define ROOM_H

#include "element.h"

class IVisitor;

class Room : public IElement
{
public:
    explicit Room(int roomNumber);

    inline int number() const { return _number; }

    void accept(IVisitor *visitor) override;

private:
    int _number;
};

#endif // ROOM_H
