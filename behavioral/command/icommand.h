#ifndef ICOMMAND
#define ICOMMAND

class ICommand
{
public:
    ICommand() {}
    virtual ~ICommand() {}

    virtual void execute() = 0;
};

#endif // ICOMMAND

