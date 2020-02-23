#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <list>

using std::list;

class ICommand;

class Customer
{
public:
    Customer();

    void addCommand(ICommand *command);
    list<ICommand *> commands() const;
    void setCommands(const list<ICommand *> &commands);

    void signContractWithBoss();

private:
    list<ICommand*> _commands;
};

#endif // CUSTOMER_H
