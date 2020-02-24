#ifndef CAR
#define CAR

#include <iostream>
#include <string>

class Car
{
public:
    virtual ~Car() = default;

    virtual void go() const
    {
        std::cout << "\n I'm " << m_brandName << " and I'm on my way...\n";
    }

protected:
    std::string m_brandName;
};

#endif // CAR




