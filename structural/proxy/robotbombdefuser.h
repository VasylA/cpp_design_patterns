#ifndef ROBOTBOMBDEFUSER_H
#define ROBOTBOMBDEFUSER_H


class RobotBombDefuser
{
public:
    virtual ~RobotBombDefuser() = default;

    void connectWireless(int communicationWaveLength);
    bool isConnected();

    virtual void walkStraightForward(int steps);
    virtual void turnRight();
    virtual void turnLeft();
    virtual void defuseBomb();

private:
    bool isConnectedImmitatingConnectivitiyIssues() const;

private:
    int m_robotConfiguredWavelength;
    bool m_isConnected;
};

#endif // ROBOTBOMBDEFUSER_H
