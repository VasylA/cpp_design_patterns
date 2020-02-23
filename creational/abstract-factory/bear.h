#ifndef BEAR_H
#define BEAR_H

#include "animaltoy.h"

class Bear : public AnimalToy
{
protected:
    Bear(const std::string &name) : AnimalToy(name) {}
};

class WoodenBear : public Bear
{
public:
    WoodenBear() : Bear("Wooden Bear") {}
};

class TeddyBear : public Bear
{
public:
    TeddyBear() : Bear("Teddy Bear") {}
};

#endif // BEAR_H
