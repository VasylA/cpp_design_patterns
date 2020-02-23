#include "bob.h"
#include "food.h"

#include <list>
#include <iostream>
#include <algorithm>

using std::list;
using std::cout;
using std::endl;

Bob::Bob(WierdCafeVisitor *cafeVisitor)
    : WierdCafeVisitor(cafeVisitor)
{
}

void Bob::handleFood(Food *food)
{
    if (!_isHungry)
    {
        WierdCafeVisitor::handleFood(food);
        return;
    }

    if (food->name().find("Soup") != std::string::npos)
    {
        cout << "Bob: I like soup. It went well." << endl;
        delete food;
        _isHungry = false;
        return;
    }

    WierdCafeVisitor::handleFood(food);
}
