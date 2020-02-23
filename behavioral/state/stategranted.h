#ifndef STATEGRANTED_H
#define STATEGRANTED_H

#include "orderstate.h"

class Order;

class StateGranted : public OrderState
{
public:
    StateGranted(Order *order);

    void addProduct() override;

    void cancelProduct() override;
};

#endif // STATEGRANTED_H
