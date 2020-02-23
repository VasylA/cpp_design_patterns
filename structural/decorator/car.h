#ifndef CAR
#define CAR

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Car
{
public:
    virtual ~Car() {}

    string getBarndName() const
    {
        return _brandName;
    }
    void setBarndName(const string &value)
    {
        _brandName = value;
    }

    virtual void go()
    {
        cout << "I'm " << _brandName << " and I'm on my way..." << endl;
    }

protected:
    string _brandName;
};

#endif // CAR




