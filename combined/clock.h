#ifndef CLOCK_H
#define CLOCK_H

#include <vector>

using std::vector;

class Craftsman;

class Clock
{
public:
    static Clock *getInstance();
    ~Clock(){}

    int hour() const;
    void setHour(int hour);

    void attach(Craftsman *craftsman);
    void detach(Craftsman *craftsman);

    void liveDay();

private:
    Clock();

private:
    static Clock *instance;

    int _hour;
    vector<Craftsman*> _workers;
};

#endif // CLOCK_H
