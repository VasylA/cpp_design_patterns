#include "flyweightfactory.h"

#include <iostream>

FlyweightFactory::FlyweightFactory(std::initializer_list<SharedState> sharedStates)
{
    for (const SharedState &ss : sharedStates)
    {
        auto sharedPtr = std::make_shared<SharedState>(ss);
        m_flyweights.insert(std::make_pair<std::string, Flyweight>(getKey(ss), Flyweight(sharedPtr)));
    }
}

Flyweight FlyweightFactory::getFlyweight(const SharedState &sharedState)
{
    std::string key = getKey(sharedState);

    if (auto flyweightIter = m_flyweights.find(key); flyweightIter != m_flyweights.end())
    {
        std::cout << "FlyweightFactory: Reusing existing flyweight.\n";
        return flyweightIter->second;
    }

    std::cout << "FlyweightFactory: Can't find a flyweight, creating new one.\n";
    auto sharedPtr = std::make_shared<SharedState>(sharedState);
    m_flyweights.insert(std::make_pair(key, Flyweight(sharedPtr)));
    return m_flyweights.at(key);
}

void FlyweightFactory::listFlyweights() const
{
    std::cout << "\nFlyweightFactory: I have " << m_flyweights.size() << " flyweights:\n";
    for (const auto &pair : m_flyweights)
        std::cout << pair.first << std::endl;
}

std::string FlyweightFactory::getKey(const SharedState &ss) const
{
    return ss.brand + "_" + ss.model + "_" + ss.color;
}
