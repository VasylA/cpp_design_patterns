#include "customer.h"
#include "projectmanagercommand.h"
#include "herodevelopercommand.h"
#include "herodeveloper.h"
#include "team.h"

#include <list>
#include <string>

using std::list;
using std::string;


int main()
{
    Customer *customer = new Customer;

    Team *team = new Team("Z");

    list<string> requirements = { "Cool web site",
                                  "Ability to book beer on site",
                                  "Some other cool feature"
                                };

    ICommand *commandX = new ProjectManagerCommand(team, requirements);
    customer->addCommand(commandX);

    auto *heroDeveloper = new HeroDeveloper;

    ICommand *commandA = new HeroDeveloperCommand(heroDeveloper, "Super application");
    customer->addCommand(commandA);

    customer->signContractWithBoss();

//    delete commandX;
//    delete commandA;

//    delete team;
//    delete heroDeveloper;

//    delete customer;

    return 0;
}

