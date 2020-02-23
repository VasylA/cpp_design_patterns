#ifndef ROBOTBOMBDEFUSER_H
#define ROBOTBOMBDEFUSER_H


class RobotBombDefuser
{
public:
    RobotBombDefuser();

    void connectWireless(int communicationWaveLength);
    bool isConnected();

    virtual void walkStraightForward(int steps);
    virtual void turnRight();
    virtual void turnLeft();
    virtual void defuseBomb();

private:
    bool isConnectedImmitatingConnectivitiyIssues() const;

private:
    int _robotConfiguredWavelength;
    bool _isConnected;
};

#endif // ROBOTBOMBDEFUSER_H
