#ifndef TEAM
#define TEAM

#include <list>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::list;
using std::string;

class Team
{
public:
    explicit Team(const string &name)
        : _name(name)
    {}

    string name() const
    {
        return _name;
    }

    void completeProject(list<string> requiremants)
    {
        doDesign();
        performDevelopment();

        for (auto task : requiremants)
        {
            cout << "User story (" << task
                 << ") has been completed." << endl;
        }
        requiremants.clear();

        performTesting();
        performDeployment();
        makeRelease();
    }


private:
    void doDesign() {}
    void performDevelopment() {}
    void performTesting() {}
    void performDeployment() {}
    void makeRelease() {}

private:
    string _name;
};

#endif // TEAM
