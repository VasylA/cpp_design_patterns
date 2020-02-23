#ifndef WOODENTOYFACTORY_H
#define WOODENTOYFACTORY_H

#include <itoyfactory.h>
#include <bear.h>
#include <cat.h>

class WoodenToyFactory : public IToyFactory
{
public:
    Cat* getCat() { return new WoodenCat(); }
    Bear* getBear() { return new WoodenBear(); }
};

#endif // WOODENTOYFACTORY_H
