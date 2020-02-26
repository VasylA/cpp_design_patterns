#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include "sharedstate.h"
#include "uniquestate.h"

#include <iostream>

class Flyweight
{
public:
    Flyweight(const SharedState *shared_state) : m_sharedState(new SharedState(*shared_state))
    {
    }
    Flyweight(const Flyweight &other) : m_sharedState(new SharedState(*other.m_sharedState))
    {
    }
    ~Flyweight()
    {
        delete m_sharedState;
    }
    void operation(const UniqueState &unique_state) const
    {
        std::cout << "Flyweight: Displaying shared (" << *m_sharedState << ") and unique (" << unique_state << ") state.\n";
    }

private:
    SharedState *m_sharedState;
};

#endif // FLYWEIGHT_H
