#include "skiresortfacade.h"

#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<SkiResortFacade> skiResortFacade = std::make_unique<SkiResortFacade>();
    auto restPrice = skiResortFacade->organizeRestWithOwnSkies(4);

    std::cout << "Price for rest with own skies is " << restPrice << std::endl;

    restPrice = skiResortFacade->organizeAllInclusiveRest(175, 65, 40, 5, 5);

    std::cout << "Price for all inclusive rest is " << restPrice << std::endl;

    return 0;
}
