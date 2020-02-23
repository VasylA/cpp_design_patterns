#include "badconnectionexception.h"

BadConnectionException::BadConnectionException()
    : _message("Unexpected situation: connection problem.")
{
}

BadConnectionException::BadConnectionException(const std::string &message)
    : _message(message)
{
}

string BadConnectionException::message() const
{
    return _message;
}
