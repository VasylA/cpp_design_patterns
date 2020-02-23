#include "customer.h"
#include "icommand.h"

Customer::Customer()
{}

void Customer::addCommand(ICommand *command)
{
    _commands.push_back(command);
}

list<ICommand *> Customer::commands() const
{
    return _commands;
}

void Customer::setCommands(const list<ICommand *> &commands)
{
    _commands = commands;
}

void Customer::signContractWithBoss()
{
    for (ICommand *command : _commands)
        command->execute();
}

