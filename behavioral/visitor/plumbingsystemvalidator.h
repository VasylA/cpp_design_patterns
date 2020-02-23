#ifndef PLUMBINGSYSTEMVALIDATOR_H
#define PLUMBINGSYSTEMVALIDATOR_H

#include "visitor.h"

class PlumbingSystemValidator : public IVisitor
{
public:
    PlumbingSystemValidator();

    void visit(Building *building) override;
    void visit(Floor *floor) override;
    void visit(Room *room) override;
};

#endif // PLUMBINGSYSTEMVALIDATOR_H
