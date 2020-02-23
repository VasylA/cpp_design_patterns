#include "orderstate.h"

#include <iostream>

using std::cerr;
using std::endl;

OrderState::OrderState(Order *order)
    : _order(order)
{
}

void OrderState::addProduct()
{
    printNotAllowedOperation("Add product");
}

void OrderState::registerProduct()
{
    printNotAllowedOperation("Register product");
}

void OrderState::grantProduct()
{
    printNotAllowedOperation("Grant product");
}

void OrderState::shipProduct()
{
    printNotAllowedOperation("Ship product");
}

void OrderState::invoiceProduct()
{
    printNotAllowedOperation("Invoice");
}

void OrderState::cancelProduct()
{
    printNotAllowedOperation("Cancel");
}

void OrderState::printNotAllowedOperation(std::string operationName)
{
    cerr << "Operation '" << operationName << "' is not allowed "
         << "for order`s state " << name() << endl;
}
