#include "electricitysystemvalidator.h"
#include "plumbingsystemvalidator.h"
#include "building.h"
#include "floor.h"
#include "room.h"

int main()
{
    Floor *floor1 = new Floor(1);
    floor1->addRoom(new Room(100));
    floor1->addRoom(new Room(101));
    floor1->addRoom(new Room(102));

    Floor *floor2 = new Floor(2);
    floor2->addRoom(new Room(200));
    floor2->addRoom(new Room(201));
    floor2->addRoom(new Room(202));


    Building *myFirmOffice = new Building("[Design Patterns Center]", 25, 90);
    myFirmOffice->addFloor(floor1);
    myFirmOffice->addFloor(floor2);

    IVisitor *electrician = new ElectricitySystemValidator();
    myFirmOffice->accept(electrician);

    IVisitor *plumber = new PlumbingSystemValidator();
    myFirmOffice->accept(plumber);

    return 0;
}
