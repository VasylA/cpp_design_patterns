#ifndef WIERDCAFEVISITOR_H
#define WIERDCAFEVISITOR_H

#include <list>
#include <string>

using std::list;
using std::string;

class Food;

class WierdCafeVisitor
{
public:
    explicit WierdCafeVisitor(WierdCafeVisitor *cafeVisitor = nullptr);
    virtual ~WierdCafeVisitor();

    virtual void handleFood(Food *food);

    WierdCafeVisitor *nextCafeVisitor() const;
    void setNextCafeVisitor(WierdCafeVisitor *nextCafeVisitor);

    bool isHungry() const;

protected:
    WierdCafeVisitor *_nextCafeVisitor;
    list<string> _foodPreferences;
    bool _isHungry;
};

#endif // WIERDCAFEVISITOR_H






