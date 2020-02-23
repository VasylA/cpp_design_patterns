#include "teddytoyfactory.h"
#include "woodentoyfactory.h"

#include <iostream>

int main()
{
    IToyFactory *toyFactory = new WoodenToyFactory();
    Bear *bear = toyFactory->getBear();
    Cat *cat = toyFactory->getCat();
    std::cout << "I`ve got " << cat->name()
              << " and " << bear->name() << std::endl;

    delete toyFactory;
    delete bear;
    delete cat;

    toyFactory = new TeddyToyFactory();
    bear = toyFactory->getBear();
    cat = toyFactory->getCat();
    std::cout << "I`ve got " << cat->name()
              << " and " << bear->name() << std::endl;

    delete toyFactory;
    delete bear;
    delete cat;

    return 0;
}
