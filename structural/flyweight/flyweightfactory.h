#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H

#include "flyweight.h"

#include <unordered_map>

class FlyweightFactory
{
public:
    FlyweightFactory() = default;
    FlyweightFactory(std::initializer_list<SharedState> sharedStates);

    Flyweight getFlyweight(const SharedState &sharedState);
    void listFlyweights() const;

private:
    std::string getKey(const SharedState &ss) const;

    std::unordered_map<std::string, Flyweight> m_flyweights;
};

#endif // FLYWEIGHTFACTORY_H
