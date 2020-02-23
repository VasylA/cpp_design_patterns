#ifndef LAPTOP_H
#define LAPTOP_H

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

class Laptop
{
public:
    Laptop() {}

    std::string description();

    void setMonitorResolution(const std::string &monitorResolution);
    void setProcessor(const std::string &processor);
    void setMemory(const std::string &memory);
    void setHdd(const std::string &hdd);
    void setBattery(const std::string &battery);

private:
    std::string _monitorResolution;
    std::string _processor;
    std::string _memory;
    std::string _hdd;
    std::string _battery;
};

std::string Laptop::description()
{
    stringstream descriptionStream;
    descriptionStream << "\tLaptop: "
                      << _monitorResolution << ", "
                      << _processor << ", "
                      << _memory << ", "
                      << _hdd << ", "
                      << _battery << std::endl;

    return descriptionStream.str();
}


void Laptop::setMonitorResolution(const std::string &monitorResolution)
{
    _monitorResolution = monitorResolution;
}

void Laptop::setProcessor(const std::string &processor)
{
    _processor = processor;
}

void Laptop::setMemory(const std::string &memory)
{
    _memory = memory;
}

void Laptop::setHdd(const std::string &hdd)
{
    _hdd = hdd;
}

void Laptop::setBattery(const std::string &battery)
{
    _battery = battery;
}

#endif // LAPTOP_H
