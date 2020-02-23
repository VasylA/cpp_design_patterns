#include "bombdefuseoperation.h"
#include "robotbombdefuserproxy.h"
#include "badconnectionexception.h"

#include <iostream>

using std::cout;
using std::endl;

BombDefuseOperation::BombDefuseOperation()
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

        cout << endl;
    }
    catch (BadConnectionException *e)
    {
        cout << "Exception has been caught with message: ("
             << e->message()
             << "Decided to have human operate robot there."
             << endl;
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
