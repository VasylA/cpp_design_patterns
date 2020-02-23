#ifndef AMANDA_H
#define AMANDA_H

#include "wierdcafevisitor.h"

class Food;

class Amanda : public WierdCafeVisitor
{
public:
    explicit Amanda(WierdCafeVisitor *cafeVisitor = nullptr);

    void handleFood(Food *food);
};

#endif // AMANDA_H
