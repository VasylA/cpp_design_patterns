#ifndef ITERATOR_H
#define ITERATOR_H

template <class Item>
class  Iterator
{
public:
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool last() = 0;
    virtual Item currentItem() = 0;
    virtual int pos()=0;
};

#endif // ITERATOR_H
