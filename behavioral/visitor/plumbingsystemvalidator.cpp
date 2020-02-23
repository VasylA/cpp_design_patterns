#include "plumbingsystemvalidator.h"
#include "building.h"
#include "floor.h"
#include "room.h"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

PlumbingSystemValidator::PlumbingSystemValidator()
{

}

void PlumbingSystemValidator::visit(Building *building)
{
    string plumbingState = (building->age() < 30) ? "Good"
                                                  : "Bad";
    cout << "Plumbing state of building " << building->name() << " probably is in "
         << plumbingState << " condition, since building is new." << endl;
}

void PlumbingSystemValidator::visit(Floor *floor)
{
}

void PlumbingSystemValidator::visit(Room *room)
{
}
