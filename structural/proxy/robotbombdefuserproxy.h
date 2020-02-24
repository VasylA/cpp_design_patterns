#ifndef ROBOTBOMBDEFUSERPROXY_H
#define ROBOTBOMBDEFUSERPROXY_H

#include "robotbombdefuser.h"

#include <memory>

class RobotBombDefuserProxy : public RobotBombDefuser
{
public:
    explicit RobotBombDefuserProxy(int communicationWaveLength);

    void walkStraightForward(int steps) override;
    void turnRight() override;
    void turnLeft() override;
    void defuseBomb() override;

private:
    void ensureConnectedWithRobot();

private:
    std::unique_ptr<RobotBombDefuser> m_robotBombDefuser;
    int m_communicationWaveLength;

    static const int s_connectionAttempts = 3;
};

#endif // ROBOTBOMBDEFUSERPROXY_H
