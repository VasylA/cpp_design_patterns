#include "order.h"
#include "orderstate.h"
#include "product.h"

#include <iostream>

using std::cout;
using std::endl;

Order::Order()
    : _state()
{
}

Order::~Order()
{
    delete _state;
}

void Order::setOrderState(OrderState *state)
{
    _state = state;
}

void Order::writeOrderState()
{
    cout << "Current Order's state: " << endl;
}
