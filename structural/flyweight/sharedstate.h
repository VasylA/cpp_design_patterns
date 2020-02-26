#ifndef SHAREDSTATE_H
#define SHAREDSTATE_H

#include <sstream>

struct SharedState
{
    std::string brand;
    std::string model;
    std::string color;

    SharedState(const std::string &aBrand, const std::string &aModel, const std::string &aColor)
        : brand(aBrand), model(aModel), color(aColor)
    {}

    friend std::ostream &operator<<(std::ostream &os, const SharedState &ss)
    {
        return os << "[ " << ss.brand << " , " << ss.model << " , " << ss.color << " ]";
    }
};

#endif // SHAREDSTATE_H
