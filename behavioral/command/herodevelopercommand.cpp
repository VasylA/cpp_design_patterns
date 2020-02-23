#include "herodevelopercommand.h"
#include "herodeveloper.h"

HeroDeveloperCommand::HeroDeveloperCommand(HeroDeveloper *heroDeveloper,
                                           const std::string &projectName)
    : _heroDeveloper(heroDeveloper),
      _projectName(projectName)
{

}

HeroDeveloper *HeroDeveloperCommand::heroDeveloper() const
{
    return _heroDeveloper;
}

void HeroDeveloperCommand::setHeroDeveloper(HeroDeveloper *heroDeveloper)
{
    _heroDeveloper = heroDeveloper;
}

string HeroDeveloperCommand::projectName() const
{
    return _projectName;
}

void HeroDeveloperCommand::setProjectName(const string &projectName)
{
    _projectName = projectName;
}

void HeroDeveloperCommand::execute()
{
    _heroDeveloper->doAllHardWork(_projectName);
}
