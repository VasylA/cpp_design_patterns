#ifndef BAKER_H
#define BAKER_H

#include "craftsman.h"

#include <iostream>

using std::cout;
using std::endl;

class Baker : public Craftsman
{
public:
    void work(int hour)
    {
        switch (hour)
        {
        case 4:
            cout << "Baker open his eyes" << endl;
            break;
        case 5:
            cout << "Baker mixed a dough" << endl;
            break;
        case 6:
            cout << "Baker roasted dough" << endl;
            break;
        case 7:
            cout << "Baker took the dough" << endl;
            break;
        case 8:
            cout << "Baker opened the shop" << endl;
            break;
        case 16:
            cout << "Baker closed the shop" << endl;
            break;
        }
    }
};

#endif // BAKER_H
