#include "electricitysystemvalidator.h"
#include "building.h"
#include "floor.h"
#include "room.h"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

ElectricitySystemValidator::ElectricitySystemValidator()
{
}

void ElectricitySystemValidator::visit(Building *building)
{
    string electricityState = (building->electricitySystemId() > 100) ? "Good"
                                                                      : "Bad";
    cout << "Main electric shield in building " << building->name()
         << " is in " << electricityState << " state." << endl;
}

void ElectricitySystemValidator::visit(Floor *floor)
{
    cout << "Diagnosting electricity on " << floor->number()
         << " floor." << endl;
}

void ElectricitySystemValidator::visit(Room *room)
{
    cout << "Diagnosting electricity in room number "
         << room->number() << endl;
}
