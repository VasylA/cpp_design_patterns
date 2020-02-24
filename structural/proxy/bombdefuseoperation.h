#ifndef BOMBDEFUSEOPERATION_H
#define BOMBDEFUSEOPERATION_H


class BombDefuseOperation
{
public:
    void execute();

private:
    void runMainPlan();
    void runPlanB(int nextOperationNum);
};

#endif // BOMBDEFUSEOPERATION_H
