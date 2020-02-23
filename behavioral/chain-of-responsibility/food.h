#ifndef FOOD_H
#define FOOD_H

#include <string>
#include <list>

using std::string;
using std::list;

class Food
{
public:
    explicit Food(string name, list<string> ingredients)
        : _name(name),
          _ingredients(ingredients)
    {}

    string name() const
    {
        return _name;
    }

    list<string> ingredients() const
    {
        return _ingredients;
    }

private:
    string _name;
    list<string> _ingredients;
};

#endif // FOOD_H




