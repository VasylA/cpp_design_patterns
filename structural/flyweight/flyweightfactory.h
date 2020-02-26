#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H

#include "flyweight.h"

#include <iostream>
#include <unordered_map>

class FlyweightFactory
{
public:
    FlyweightFactory(std::initializer_list<SharedState> share_states)
    {
        for (const SharedState &ss : share_states)
          m_flyweights.insert(std::make_pair<std::string, Flyweight>(this->getKey(ss), Flyweight(&ss)));
    }

    Flyweight getFlyweight(const SharedState &shared_state)
    {
        std::string key = getKey(shared_state);
        if (m_flyweights.find(key) == m_flyweights.end())
        {
            std::cout << "FlyweightFactory: Can't find a flyweight, creating new one.\n";
            m_flyweights.insert(std::make_pair(key, Flyweight(&shared_state)));
        }
        else
        {
            std::cout << "FlyweightFactory: Reusing existing flyweight.\n";
        }
        return m_flyweights.at(key);
    }
    void listFlyweights() const
    {
        std::cout << "\nFlyweightFactory: I have " << m_flyweights.size() << " flyweights:\n";
        for (std::pair<std::string, Flyweight> pair : m_flyweights)
          std::cout << pair.first << std::endl;
    }

private:
    std::string getKey(const SharedState &ss) const
    {
        return ss.brand + "_" + ss.model + "_" + ss.color;
    }

    std::unordered_map<std::string, Flyweight> m_flyweights;
};
#endif // FLYWEIGHTFACTORY_H
