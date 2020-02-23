#ifndef ORDER_H
#define ORDER_H

#include <list>

using std::list;

class OrderState;
class Product;

class Order
{
public:
    Order();
    ~Order();

    void setOrderState(OrderState *state);

    void writeOrderState();

private:
    OrderState *_state;
    list<Product*> _products;
};

#endif // ORDER_H
