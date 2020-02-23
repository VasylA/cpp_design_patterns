#ifndef BADCONNECTIONEXCEPTION
#define BADCONNECTIONEXCEPTION

#include <iostream>

using std::string;

class BadConnectionException
{

public:
    BadConnectionException();
    BadConnectionException(const string &message);

    string message() const;

private:
    string _message;
};

#endif // BADCONNECTIONEXCEPTION

