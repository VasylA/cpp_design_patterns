#include "robotbombdefuserproxy.h"
#include "badconnectionexception.h"

#include <assert.h>

RobotBombDefuserProxy::RobotBombDefuserProxy(int communicationWaveLength)
    : _robotBombDefuser(new RobotBombDefuser),
      _communicationWaveLength(communicationWaveLength)
{
}

void RobotBombDefuserProxy::walkStraightForward(int steps)
{
    ensureConnectedWithRobor();
    _robotBombDefuser->walkStraightForward(steps);
}

void RobotBombDefuserProxy::turnRight()
{
    ensureConnectedWithRobor();
    _robotBombDefuser->turnRight();
}

void RobotBombDefuserProxy::turnLeft()
{
    ensureConnectedWithRobor();
    _robotBombDefuser->turnLeft();
}

void RobotBombDefuserProxy::defuseBomb()
{
    ensureConnectedWithRobor();
    _robotBombDefuser->defuseBomb();
}

void RobotBombDefuserProxy::ensureConnectedWithRobor()
{
    if (!_robotBombDefuser)
    {
        _robotBombDefuser = new RobotBombDefuser;
        _robotBombDefuser->connectWireless(_communicationWaveLength);
    }

    for (int i = 0; i < CONNECTION_ATTEMPTS; i++)
    {
        if (_robotBombDefuser->isConnected())
            break;

        _robotBombDefuser->connectWireless(_communicationWaveLength);
    }
//    assert(_robotBombDefuser->isConnected());
    if (!_robotBombDefuser->isConnected())
    {
        throw new BadConnectionException("No connection with remote bomb diffeser roobot"
                                         "could be made after few attempts.");
    }
}
