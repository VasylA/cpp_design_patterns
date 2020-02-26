#ifndef UNIQUESTATE_H
#define UNIQUESTATE_H

#include <sstream>

struct UniqueState
{
    std::string owner;
    std::string plate;

    friend std::ostream &operator<<(std::ostream &os, const UniqueState &us)
    {
        return os << "[ " << us.owner << " , " << us.plate << " ]";
    }
};

#endif // UNIQUESTATE_H
