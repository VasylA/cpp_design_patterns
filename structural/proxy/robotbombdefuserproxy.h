#ifndef ROBOTBOMBDEFUSERPROXY_H
#define ROBOTBOMBDEFUSERPROXY_H

#include "robotbombdefuser.h"

class RobotBombDefuserProxy : public RobotBombDefuser
{
public:
    explicit RobotBombDefuserProxy(int communicationWaveLength);

    virtual void walkStraightForward(int steps);
    virtual void turnRight();
    virtual void turnLeft();
    virtual void defuseBomb();

private:
    void ensureConnectedWithRobor();

private:
    RobotBombDefuser *_robotBombDefuser;
    int _communicationWaveLength;

    static const int CONNECTION_ATTEMPTS = 3;
};

#endif // ROBOTBOMBDEFUSERPROXY_H
