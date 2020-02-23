#include "skiresortfacade.h"

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    SkiResortFacade *skiResortFacade = new SkiResortFacade;
    int restPrice = skiResortFacade->organizeRestWithOwnSkies(5);

    cout << "Price for rest with own skies is " << restPrice << endl;

    delete skiResortFacade;

    return 0;
}
