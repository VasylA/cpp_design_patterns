#ifndef BOOTER_H
#define BOOTER_H

#include "craftsman.h"

#include <iostream>

using std::cout;
using std::endl;

class Booter : public Craftsman
{
public:
    void work(int hour)
    {
        switch (hour)
        {
        case 10:
            cout << "Booter opened workspace" << endl;
            break;
        case 11:
            cout << "Booter drink a beer" << endl;
            break;
        case 15:
            cout << "Booter sing a song" << endl;
            break;
        case 18:
            cout << "Booter closed the workspace" << endl;
            break;
        }
    }
};

#endif // BOOTER_H
