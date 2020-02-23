#include "tom.h"
#include "food.h"

#include <list>
#include <iostream>
#include <algorithm>

using std::list;
using std::cout;
using std::endl;

Tom::Tom(WierdCafeVisitor *cafeVisitor)
    : WierdCafeVisitor(cafeVisitor)
{
    _foodPreferences.push_back("Meat");
    _foodPreferences.push_back("Coffee");
}

void Tom::handleFood(Food *food)
{
    _isHungry = (_foodPreferences.size() > 0);

    if (!_isHungry)
    {
        WierdCafeVisitor::handleFood(food);
        return;
    }

    list<string> components = food->ingredients();

    if (std::find(_foodPreferences.begin(), _foodPreferences.end(), "Meat")
            != _foodPreferences.end())
    {
        if (std::find(components.begin(), components.end(), "Meat")
                != components.end())
        {
            cout << "Tom: I just ate " << food->name() << ". It was tasty!" << endl;
            _foodPreferences.remove("Meat");
            delete food;
            return;
        }
    }

    if (std::find(_foodPreferences.begin(), _foodPreferences.end(), "Coffee")
            != _foodPreferences.end())
    {
        if (std::find(components.begin(), components.end(), "Coffee")
                != components.end())
        {
            cout << "Tom: I have to take something with coffee. " << food->name()
                 << " looks fine!" << endl;
            _foodPreferences.remove("Coffee");
            delete food;
            return;
        }
    }

    WierdCafeVisitor::handleFood(food);
}
