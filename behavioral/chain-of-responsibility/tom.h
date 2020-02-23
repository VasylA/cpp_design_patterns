#ifndef TOM_H
#define TOM_H

#include "wierdcafevisitor.h"

class Food;

class Tom : public WierdCafeVisitor
{
public:
    explicit Tom(WierdCafeVisitor *cafeVisitor = nullptr);

    void handleFood(Food *food);
};

#endif // TOM_H
