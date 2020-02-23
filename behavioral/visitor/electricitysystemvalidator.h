#ifndef ELECTRICITYSYSTEMVALIDATOR_H
#define ELECTRICITYSYSTEMVALIDATOR_H

#include "visitor.h"

class ElectricitySystemValidator : public IVisitor
{
public:
    ElectricitySystemValidator();

    void visit(Building *building) override;
    void visit(Floor *floor) override;
    void visit(Room *room) override;
};

#endif // ELECTRICITYSYSTEMVALIDATOR_H
