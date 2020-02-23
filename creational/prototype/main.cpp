#include "datetime.h"
#include "calendarevent.h"

#include <iostream>

using std::cout;
using std::endl;

CalenderEvent* GetExistingEvent()
{
    Datetime partyTime(2016, Datetime::Month::September, 3, Datetime::WeekDay::Saturday, 20, 15);

    CalenderEvent *beerParty = new CalenderEvent("Owesome Beer party!!!", partyTime);

    beerParty->setPriority(CalenderEvent::EP_High);

    vector<string> attendees;
    attendees.push_back("Superman");
    attendees.push_back("Batman");
    attendees.push_back("Jocker");
    beerParty->setAttendees(attendees);

    return beerParty;
}

int main()
{
    CalenderEvent *beerParty = GetExistingEvent();

    cout << "\t Today event:" << endl;
    cout << beerParty->eventInfo() << endl;


    CalenderEvent *nextFridayEvent = static_cast<CalenderEvent*>(beerParty->clone());

    cout << "\t Pure cloned event:" << endl;
    cout << nextFridayEvent->eventInfo() << endl;

    nextFridayEvent->setTitle("Next friday beer party");

    Datetime partyTime(2016, Datetime::Month::September, 9, Datetime::WeekDay::Friday, 21, 30);
    nextFridayEvent->setTime(partyTime);

    vector<string> nextFridayEventAttendees = nextFridayEvent->attendees();
    nextFridayEventAttendees.push_back("Me");
    nextFridayEventAttendees.push_back("My girlfriend");

    nextFridayEvent->setAttendees(nextFridayEventAttendees);

    nextFridayEvent->setPriority(CalenderEvent::EP_Low);

    cout << "\t Ready event:" << endl;
    cout << nextFridayEvent->eventInfo() << endl;

    delete beerParty;
    delete nextFridayEvent;

    return 0;
}
