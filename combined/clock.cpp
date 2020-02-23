#include "clock.h"
#include "craftsman.h"
#include "listiterator.h"

#include <iostream>

#ifdef Q_OS_WIN
#include <windows.h>
#endif

using std::cout;
using std::endl;

Clock* Clock::instance = nullptr;

Clock::Clock()
    : _hour(0)
{}

int Clock::hour() const
{
    return _hour;
}

void Clock::setHour(int hour)
{
    _hour = hour;
}

Clock* Clock::getInstance()
{
    if (!instance)
        instance = new Clock;

    return instance;
}

void Clock::attach(Craftsman *craftsman)
{
    _workers.push_back(craftsman);
}

void Clock::detach(Craftsman *craftsman)
{
    ListIterator<Craftsman*> li(_workers);
    while ((li.currentItem() != craftsman) && (!li.last()))
        li.next();

    if (li.currentItem() == craftsman)
        _workers.erase(_workers.begin() + li.pos());
}

void Clock::liveDay()
{
    ListIterator<Craftsman*> iter(_workers);
    for (int hour = 0; hour < 24; hour++)
    {
        cout <<"  It's "<< hour <<" o'clock" << endl;
        setHour(hour);
        for (iter.first(); !iter.last(); iter.next() )
        {
            Craftsman *craftsman = iter.currentItem();
            craftsman->work(hour);
        }
        cout << endl << endl;
#ifdef Q_OS_WIN
        Sleep(100);
#endif
    }
}
