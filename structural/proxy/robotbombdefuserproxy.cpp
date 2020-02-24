#include "robotbombdefuserproxy.h"
#include "badconnectionexception.h"

RobotBombDefuserProxy::RobotBombDefuserProxy(int communicationWaveLength)
    : m_communicationWaveLength(communicationWaveLength) {}

void RobotBombDefuserProxy::walkStraightForward(int steps)
{
    ensureConnectedWithRobot();
    m_robotBombDefuser->walkStraightForward(steps);
}

void RobotBombDefuserProxy::turnRight()
{
    ensureConnectedWithRobot();
    m_robotBombDefuser->turnRight();
}

void RobotBombDefuserProxy::turnLeft()
{
    ensureConnectedWithRobot();
    m_robotBombDefuser->turnLeft();
}

void RobotBombDefuserProxy::defuseBomb()
{
    ensureConnectedWithRobot();
    m_robotBombDefuser->defuseBomb();
}

void RobotBombDefuserProxy::ensureConnectedWithRobot()
{
    if (!m_robotBombDefuser)
    {
        m_robotBombDefuser = std::make_unique<RobotBombDefuser>();
        m_robotBombDefuser->connectWireless(m_communicationWaveLength);
    }

    for (int i = 0; i < s_connectionAttempts; i++)
    {
        if (m_robotBombDefuser->isConnected())
            break;

        m_robotBombDefuser->connectWireless(m_communicationWaveLength);
    }

    if (!m_robotBombDefuser->isConnected())
    {
        throw BadConnectionException("No connection with remote bomb deffuser robot "
                                     "could be made after few attempts.");
    }
}
