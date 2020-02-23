#ifndef ITOYFACTORY_H
#define ITOYFACTORY_H

class Cat;
class Bear;

class IToyFactory
{
public:
    virtual Cat* getCat() = 0;
    virtual Bear* getBear() = 0;
};

#endif // ITOYFACTORY_H
