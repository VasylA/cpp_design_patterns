#ifndef UNIQUESTATE_H
#define UNIQUESTATE_H

#include <sstream>

struct UniqueState
{
    std::string owner;
    std::string plates;

    UniqueState(const std::string &anOwner, const std::string &aPlate)
        : owner(anOwner), plates(aPlate)
    {
    }

    friend std::ostream &operator<<(std::ostream &os, const UniqueState &us)
    {
        return os << "[ " << us.owner << " , " << us.plates << " ]";
    }
};

#endif // UNIQUESTATE_H
