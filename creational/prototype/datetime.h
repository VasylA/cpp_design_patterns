#ifndef DATETIME_H
#define DATETIME_H

#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::cerr;
using std::string;
using std::stringstream;

class Time
{
public:
    Time(int h = MIN_HOUR_VALUE,
         int m = MIN_MINUTE_VALUE)
        : _hour(h),
          _minute(m)
    {}

    int hour() const { return _hour; }
    void setHour(int hour)
    {
        if ((hour < MIN_HOUR_VALUE) || (hour > MAX_HOUR_VALUE))
        {
            cerr << "Invalid hour value passed";
            _hour = MIN_HOUR_VALUE;
            return;
        }
        _hour = hour;
    }

    int minute() const { return _minute; }
    void setMinute(int minute)
    {
        if ((minute < MIN_MINUTE_VALUE) || (minute > MAX_MINUTE_VALUE))
        {
            cerr << "Invalid minutes value passed";
            _minute = MIN_MINUTE_VALUE;
            return;
        }
        _minute = minute;
    }

    string timeString()
    {
        stringstream stream;
        stream << _hour << ":" << _minute;

        return stream.str();
    }

private:
    static const int MIN_HOUR_VALUE = 0;
    static const int MAX_HOUR_VALUE = 23;

    static const int MIN_MINUTE_VALUE = 0;
    static const int MAX_MINUTE_VALUE = 59;


    int _hour;
    int _minute;
};

class Datetime
{
public:
    enum class WeekDay
    {
        Sunday = 0,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

    enum class Month
    {
        January     = 1,
        Fabruary    = 2,
        March       = 3,
        April       = 4,
        May         = 5,
        June        = 6,
        July        = 7,
        August      = 8,
        September   = 9,
        October     = 10,
        November    = 11,
        December    = 12
    };

    Datetime(unsigned int year,
             Month month,
             unsigned int day,
             WeekDay weekday,
             int hour = 0,
             int min = 0)
        : _year(year),
          _month(month),
          _day(day),
          _weekday(weekday),
          _time(hour, min)
    { }


    unsigned int year() const { return _year; }
    void setYear(unsigned int year) { _year = year; }

    Month month() const { return _month; }
    void setMonth(const Month &month) { _month = month; }

    unsigned int day() const { return _day; }
    void setDay(unsigned int day) { _day = day; }

    WeekDay weekday() const { return _weekday;}
    void setWeekday(const WeekDay &weekday) { _weekday = weekday; }

    Time time() const { return _time; }
    void setTime(const Time &time) { _time = time; }
    void setTime(int h, int m) { _time = Time(h, m); }

    string dateString()
    {
        stringstream stream;
        stream << (int)_weekday << ", " << (int)_month << "/" << _day << "/" << _year
               << ", " << _time.timeString();

        return stream.str();
    }

private:
    unsigned int _year;
    Month _month;
    unsigned int _day;

    WeekDay _weekday;

    Time _time;
};

#endif // DATETIME_H
