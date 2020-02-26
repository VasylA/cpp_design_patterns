#ifndef SHAREDSTATE_H
#define SHAREDSTATE_H

#include <sstream>
#include <array>

struct Logo
{
    std::array<std::uint8_t, 10000> data;

    Logo() {
        std::fill(data.begin(), data.end(), 1);
    }
};

struct SharedState
{
    std::string brand;
    std::string model;
    std::string color;
    Logo        logo;

    SharedState(const std::string &aBrand, const std::string &aModel, const std::string &aColor, const Logo &aLogo)
        : brand(aBrand), model(aModel), color(aColor), logo(aLogo)
    {}

    friend std::ostream &operator<<(std::ostream &os, const SharedState &ss)
    {
        return os << "[ " << ss.brand << " , " << ss.model << " , " << ss.color << " ]";
    }
};

#endif // SHAREDSTATE_H
