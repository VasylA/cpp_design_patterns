#ifndef ANIMALTOY_H
#define ANIMALTOY_H

#include <string>

using std::string;

class AnimalToy
{
public:
    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

protected:
    AnimalToy(const std::string &name) : _name(name) {}

private:
    std::string _name;
};

#endif // ANIMALTOY_H
