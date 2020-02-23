#ifndef HERODEVELOPER
#define HERODEVELOPER

#include <iostream>
//#include <string>

//using std::string;
using std::cout;
using std::endl;

//class string;

class HeroDeveloper
{
public:
    HeroDeveloper() {}

    void doAllHardWork(const string &projectName)
    {
        cout << "Hero developer completed project (" << projectName
             << ") without requirements in manner of couple hours!" << endl;
    }
};

#endif // HERODEVELOPER

