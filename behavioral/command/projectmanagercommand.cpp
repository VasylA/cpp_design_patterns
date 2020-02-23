#include "projectmanagercommand.h"
#include "team.h"

ProjectManagerCommand::ProjectManagerCommand(Team *team,
                                             const list<string> &requiremants)
    : _team(team),
      _requiremants(requiremants)
{
}

Team *ProjectManagerCommand::team() const
{
    return _team;
}

void ProjectManagerCommand::setTeam(Team *team)
{
    _team = team;
}

list<string> ProjectManagerCommand::requiremants() const
{
    return _requiremants;
}

void ProjectManagerCommand::setRequiremants(const list<string> &requiremants)
{
    _requiremants = requiremants;
}

void ProjectManagerCommand::execute()
{
    _team->completeProject(_requiremants);
}

