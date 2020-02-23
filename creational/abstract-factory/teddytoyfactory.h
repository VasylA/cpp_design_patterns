#ifndef TEDDYTOYFACTORY_H
#define TEDDYTOYFACTORY_H

#include <itoyfactory.h>
#include <bear.h>
#include <cat.h>

class TeddyToyFactory : public IToyFactory
{
public:
    Cat* getCat() { return new TeddyCat(); }
    Bear* getBear() { return new TeddyBear(); }
};

#endif // TEDDYTOYFACTORY_H
