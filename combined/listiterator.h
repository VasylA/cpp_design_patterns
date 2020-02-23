#ifndef LISTITERATOR_H
#define LISTITERATOR_H

#include "iterator.h"
#include <vector>

using std::vector;

template <class Item>
class ListIterator : public Iterator<Item>
{
public:
    ListIterator(vector<Item> vect)
        : _vector(vect),
          _index(0)
    {
    }

    void first()
    {
        _index = 0;
    }
    void next()
    {
        _index++;
    }
    bool last()
    {
        return (_index == _vector.size() );
    }

    Item currentItem()
    {
        return _vector.at(_index);
    }
    int pos()
    {
        return _index;
    }

private:
    vector<Item> _vector;
    long _index;
};

#endif // LISTITERATOR_H
