#include "wierdcafevisitor.h"


WierdCafeVisitor::WierdCafeVisitor(WierdCafeVisitor *cafeVisitor)
    : _nextCafeVisitor(cafeVisitor),
      _isHungry(true)
{}

WierdCafeVisitor::~WierdCafeVisitor() {}

void WierdCafeVisitor::handleFood(Food *food)
{
    if (_nextCafeVisitor)
        _nextCafeVisitor->handleFood(food);
}

WierdCafeVisitor *WierdCafeVisitor::nextCafeVisitor() const
{
    return _nextCafeVisitor;
}

void WierdCafeVisitor::setNextCafeVisitor(WierdCafeVisitor *nextCafeVisitor)
{
    _nextCafeVisitor = nextCafeVisitor;
}

bool WierdCafeVisitor::isHungry() const
{
    return _isHungry;
}
