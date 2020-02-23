#ifndef ELEMENT_H
#define ELEMENT_H

class IVisitor;

class IElement
{
    virtual void accept(IVisitor*) = 0;
};

#endif // ELEMENT_H
