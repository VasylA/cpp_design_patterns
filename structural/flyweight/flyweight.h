#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include "sharedstate.h"
#include "uniquestate.h"

#include <iostream>
#include <memory>

class Flyweight
{
public:
    Flyweight(const std::shared_ptr<SharedState> shared_state)
      : m_sharedState(shared_state) {}

    void operation(const UniqueState &unique_state) const
    {
        std::cout << "Flyweight: Displaying shared (" << *m_sharedState << ") and unique (" << unique_state << ") state.\n";
    }

private:
    std::shared_ptr<SharedState> m_sharedState;
};

#endif // FLYWEIGHT_H
