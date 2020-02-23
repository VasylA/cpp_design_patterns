#ifndef BUILDING_H
#define BUILDING_H

#include "element.h"

#include <list>
#include <string>

using std::list;
using std::string;

class Floor;
class IVisitor;

class Building : public IElement
{
public:
    Building(const string &name,
             int buildingAge,
             int electricityId);

    void accept(IVisitor *visitor) override;

    inline string name() const { return _name; }

    inline int age() const { return _age; }
    inline int electricitySystemId() const { return _electricityId; }

    list<Floor *> floors() const;

    void addFloor(Floor *floor);

private:
    string _name;
    int _age;
    int _electricityId;
    list<Floor*> _floors;
};

#endif // BUILDING_H
