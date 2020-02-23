#ifndef CALENDAREVENT_H
#define CALENDAREVENT_H

#include "calendarprototype.h"
#include "datetime.h"

#include <vector>

using std::string;
using std::vector;
using std::endl;

class CalenderEvent : public CalenderPrototype
{

public:
    enum EventPriority { EP_Low = 0, EP_Normal, EP_High };

    CalenderEvent(const string &title,
                  const Datetime &time,
                  const vector<string> &attendees = vector<string>(),
                  const EventPriority &priority = EP_Normal)
        : _title(title),
          _time(time),
          _attendees(attendees),
          _priority(priority)
    {
    }


    string title() const { return _title; }
    void setTitle(const string &title) { _title = title; }

    Datetime time() const { return _time; }
    void setTime(const Datetime &time) { _time = time; }

    vector<string> attendees() const { return _attendees; }
    void setAttendees(const vector<string> &attendees) { _attendees = attendees; }

    EventPriority priority() const { return _priority; }
    void setPriority(const EventPriority &priority) { _priority = priority; }


    CalenderPrototype *clone()
    {
        Datetime defaultDateTime(2016, Datetime::Month::September, 02, Datetime::WeekDay::Friday);
        CalenderEvent *copy = new CalenderEvent(title(),
                                                defaultDateTime,
                                                attendees());

        copy->setTitle(title() + " (new)");

        return copy;
    }


    string eventInfo()
    {
        stringstream stream;
        stream << "Title: " << _title << endl
               << "Time: " << _time.dateString() << endl
               << "Priority: " << _priority << endl;

        stream << "Attendees:" << endl;

        for (unsigned int i = 0; i < _attendees.size(); i++)
        {
            stream << "\t" << _attendees[i] << endl;
        }

        return stream.str();
    }


private:
    string _title;
    Datetime _time;
    vector<string> _attendees;
    EventPriority _priority;
};

#endif // CALENDAREVENT_H












