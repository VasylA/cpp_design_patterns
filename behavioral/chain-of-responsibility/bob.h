#ifndef BOB_H
#define BOB_H

#include "wierdcafevisitor.h"

class Food;

class Bob : public WierdCafeVisitor
{
public:
    explicit Bob(WierdCafeVisitor *cafeVisitor = nullptr);

    void handleFood(Food *food);
};

#endif // BOB_H
