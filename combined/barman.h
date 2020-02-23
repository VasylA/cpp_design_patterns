#ifndef BARMAN_H
#define BARMAN_H

#include "craftsman.h"

#include <iostream>

using std::cout;
using std::endl;

class Barman : public Craftsman
{
public:
    void work(int hour)
    {
        switch (hour)
        {
        case 16:
            cout << "Barman cooked a beer" << endl;
            break;
        case 17:
            cout << "Barman opened the pub" << endl;
            break;
        case 23:
            cout << "Barman closed the pub" << endl;
            break;
        }
    }
};

#endif // BARMAN_H
