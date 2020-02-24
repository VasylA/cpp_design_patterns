#include "bombdefuseoperation.h"
#include "robotbombdefuserproxy.h"
#include "badconnectionexception.h"

#include <iostream>

void BombDefuseOperation::execute()
{
    runMainPlan();
}

void BombDefuseOperation::runMainPlan()
{
    int opNum = 0;
    try
    {
        RobotBombDefuser *proxy = new RobotBombDefuserProxy(41);
        proxy->walkStraightForward(100);
        opNum++;

        proxy->turnRight();
        opNum++;

        proxy->walkStraightForward(5);
        opNum++;

        proxy->defuseBomb();
        opNum++;
    }
    catch (const BadConnectionException &e)
    {
        std::cout << "Exception has been caught with message: "
             << e.what() << std::endl
             << "Decided to have human operate robot there."
             << std::endl << std::endl;
        runPlanB(opNum);
    }
}

void BombDefuseOperation::runPlanB(int nextOperationNum)
{
    RobotBombDefuser *humanOperatingRobotDirectly = new RobotBombDefuser();

    if (nextOperationNum == 0)
    {
        humanOperatingRobotDirectly->walkStraightForward(100);
        nextOperationNum++;
    }
    if (nextOperationNum == 1)
    {
        humanOperatingRobotDirectly->turnRight();
        nextOperationNum++;
    }
    if (nextOperationNum == 2)
    {
        humanOperatingRobotDirectly->walkStraightForward(5);
        nextOperationNum++;
    }
    if (nextOperationNum == 3)
    {
        humanOperatingRobotDirectly->defuseBomb();
    }
}
