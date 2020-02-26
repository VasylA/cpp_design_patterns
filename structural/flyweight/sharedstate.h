#ifndef SHAREDSTATE_H
#define SHAREDSTATE_H

#include <sstream>
#include <array>

struct Image
{
    std::array<std::uint8_t, 10000> data;

    Image()
    {
        std::fill(data.begin(), data.end(), 1);
    }
};

struct SharedState
{
    std::string brand;
    std::string model;
    std::string color;
    Image       logo;      // Heavy data here

    friend std::ostream &operator<<(std::ostream &os, const SharedState &ss)
    {
        return os << "[ " << ss.brand << " , " << ss.model << " , " << ss.color << " ]";
    }
};

#endif // SHAREDSTATE_H
