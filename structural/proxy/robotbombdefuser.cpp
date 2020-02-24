#include "robotbombdefuser.h"

#include <iostream>
#include <chrono>
#include <random>

void RobotBombDefuser::connectWireless(int communicationWaveLength)
{
    if (communicationWaveLength == m_robotConfiguredWavelength)
        m_isConnected = isConnectedImmitatingConnectivitiyIssues();
}

bool RobotBombDefuser::isConnected()
{
    m_isConnected = isConnectedImmitatingConnectivitiyIssues();
    return m_isConnected;
}

void RobotBombDefuser::walkStraightForward(int steps)
{
    std::cout << "Did " << steps << " steps forward...\n";
}

void RobotBombDefuser::turnRight()
{
    std::cout << "Turned right...\n";
}

void RobotBombDefuser::turnLeft()
{
    std::cout << "Turned left...\n";
}

void RobotBombDefuser::defuseBomb()
{
    std::cout << "Cut red or green or blue wire...\n";
}

bool RobotBombDefuser::isConnectedImmitatingConnectivitiyIssues() const
{
    auto seed = std::chrono::steady_clock::now().time_since_epoch().count();
    std::default_random_engine randEngine(seed);
    std::uniform_int_distribution<int> distribution(0, 99);
    auto randNum = static_cast<int>(distribution(randEngine));
    return (randNum % 2);
}

