#ifndef ORDERSTATE_H
#define ORDERSTATE_H

#include <string>

using std::string;

class Order;

class OrderState
{
public:
    OrderState(Order *order);

    virtual string name() = 0;

    virtual void addProduct();
    virtual void registerProduct();
    virtual void grantProduct();
    virtual void shipProduct();
    virtual void invoiceProduct();
    virtual void cancelProduct();

private:
    void printNotAllowedOperation(string operationName);

private:
    Order *_order;
};

#endif // ORDERSTATE_H
