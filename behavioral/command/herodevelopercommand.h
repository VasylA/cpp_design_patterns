#ifndef HERODEVELOPERCOMMAND_H
#define HERODEVELOPERCOMMAND_H

#include "icommand.h"

#include <string>

using std::string;

class HeroDeveloper;

class HeroDeveloperCommand : public ICommand
{
public:
    HeroDeveloperCommand(HeroDeveloper *heroDeveloper, const string &projectName);

    HeroDeveloper *heroDeveloper() const;
    void setHeroDeveloper(HeroDeveloper *heroDeveloper);

    string projectName() const;
    void setProjectName(const string &projectName);

    void execute();

private:
    HeroDeveloper *_heroDeveloper;
    string _projectName;
};

#endif // HERODEVELOPERCOMMAND_H
