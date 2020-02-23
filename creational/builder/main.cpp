#include "master.h"
#include "laptop.h"
#include "triplaptopbuilder.h"
#include "gamelaptopbuilder.h"

#include <iostream>

//class Super1
//{
//public:
//    virtual void count()
//    {
//        std::cout << 1 << std::endl;
//    }
//};

//class Super2
//{
//public:
//    virtual void count()
//    {
//        std::cout << 2 << std::endl;
//    }
//};

//class Child : public Super1, public Super2
//{
//public:
//    void count()
//    {
//        std::cout << 3 << std::endl;
//    }
//};

int main()
{
    auto *tripBuilder = new TripLaptopBuilder();
    auto *shop = new Master;

    shop->setLaptopBuilder(tripBuilder);
    shop->constructLaptop();

    auto *laptop = shop->getLaptop();

    std::cout << "I`ve got a new laptop!" << std::endl
              << laptop->description() << std::endl;

    delete tripBuilder;
    delete laptop;

    auto *gamingBuilder = new GameLaptopBuilder();

    shop->setLaptopBuilder(gamingBuilder);
    shop->constructLaptop();

    laptop = shop->getLaptop();

    std::cout << "I`ve got a new laptop!" << std::endl
              << laptop->description() << std::endl;

    delete gamingBuilder;
    delete laptop;

    delete shop;

//    Super1 *obj = new Child;
//    obj->count();

    return 0;
}
