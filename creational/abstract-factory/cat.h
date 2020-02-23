#ifndef CAT_H
#define CAT_H

#include "animaltoy.h"

class Cat : public AnimalToy
{
protected:
    Cat(const std::string &name) : AnimalToy(name) {}
};

class WoodenCat : public Cat
{
public:
    WoodenCat() : Cat("Wooden cat") {}
};

class TeddyCat : public Cat
{
public:
    TeddyCat() : Cat("Teddy cat") {}
};

#endif // CAT_H
