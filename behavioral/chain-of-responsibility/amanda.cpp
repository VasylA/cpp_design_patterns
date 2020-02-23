#include "amanda.h"
#include "food.h"

#include <list>
#include <iostream>
#include <algorithm>

using std::list;
using std::cout;
using std::endl;

Amanda::Amanda(WierdCafeVisitor *cafeVisitor)
    : WierdCafeVisitor(cafeVisitor)
{
}

void Amanda::handleFood(Food *food)
{
    if (!_isHungry)
    {
        WierdCafeVisitor::handleFood(food);
        return;
    }

    if (food->name() == "Cappuccino")
    {
        cout << "Amanda: My lovely cappuccino!!!" << endl;
        delete food;
        _isHungry = false;
        return;
    }

    WierdCafeVisitor::handleFood(food);
}
