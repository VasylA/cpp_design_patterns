#ifndef PROJECTMANAGERCOMMAND_H
#define PROJECTMANAGERCOMMAND_H

#include "icommand.h"

#include <list>
#include <string>

using std::list;
using std::string;

class Team;

class ProjectManagerCommand : public ICommand
{
public:
    ProjectManagerCommand(Team *team, const list<std::string> &requiremants);

    Team *team() const;
    void setTeam(Team *team);

    list<string> requiremants() const;
    void setRequiremants(const list<string> &requiremants);

    void execute();

protected:
    Team *_team;
    list<string> _requiremants;
};

#endif // PROJECTMANAGERCOMMAND_H
