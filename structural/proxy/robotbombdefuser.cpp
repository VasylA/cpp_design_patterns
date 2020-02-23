#include "robotbombdefuser.h"

#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

RobotBombDefuser::RobotBombDefuser()
{

}

void RobotBombDefuser::connectWireless(int communicationWaveLength)
{
    if (communicationWaveLength == _robotConfiguredWavelength)
        _isConnected = isConnectedImmitatingConnectivitiyIssues();
}

bool RobotBombDefuser::isConnected()
{
    _isConnected = isConnectedImmitatingConnectivitiyIssues();
    return _isConnected;
}

void RobotBombDefuser::walkStraightForward(int steps)
{
    cout << "Did " << steps << " steps forward..." << endl;
}

void RobotBombDefuser::turnRight()
{
    cout << "Turned right..." << endl;
}

void RobotBombDefuser::turnLeft()
{
    cout << "Turned left..." << endl;
}

void RobotBombDefuser::defuseBomb()
{
    cout << "Cut red or green or blue wire..." << endl;
}

bool RobotBombDefuser::isConnectedImmitatingConnectivitiyIssues() const
{
    std::srand(std::time(0)); // use current time as seed for random generator
    int randomVar = std::rand() % 10;
    return (randomVar < 5);
}

