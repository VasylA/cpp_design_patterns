/* Example of using such patterns as:
 * 1) Singleton (Clock);
 * 2) Iterator (ListIterator);
 * 3) Observer (Craftsman and serived classes;
 *    In this case Clock is observable object).
*/

#include "clock.h"
#include "baker.h"
#include "barman.h"
#include "booter.h"

int main()
{
    Clock *townHallClock = Clock::getInstance();
    Clock *anotherClock = Clock::getInstance();

    Barman barman;
    Booter booter;
    Baker baker;

    townHallClock->attach(&booter);
    townHallClock->attach(&barman);
    townHallClock->attach(&baker);

    townHallClock->liveDay();

    anotherClock->detach(&barman);
    cout << "Today Booter is ill" << endl << endl;

    anotherClock->liveDay();

    delete townHallClock;

    return 0;
}
