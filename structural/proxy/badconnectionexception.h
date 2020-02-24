#ifndef BADCONNECTIONEXCEPTION
#define BADCONNECTIONEXCEPTION

#include <stdexcept>

class BadConnectionException : public std::runtime_error
{
public:
    explicit BadConnectionException(const std::string &message)
        : std::runtime_error(message) {}
};

#endif // BADCONNECTIONEXCEPTION

