#include "stategranted.h"
#include "order.h"

StateGranted::StateGranted(Order *order)
    : OrderState(order)
{
}

void StateGranted::addProduct()
{
    //    _order->
}

void StateGranted::cancelProduct()
{
//    _order->setOrderState(new Cancelled(_order));
}
