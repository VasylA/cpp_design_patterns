#include "flyweightfactory.h"

void AddCarToPoliceDatabase(FlyweightFactory &factory,
                            const std::string &plates,
                            const std::string &owner,
                            const std::string &brand,
                            const std::string &model,
                            const std::string &color)
{
    std::cout << "\nClient: Adding a car to database.\n";
    const Flyweight &flyweight = factory.getFlyweight({brand, model, color});

    flyweight.operation({plates, owner});
}


int main()
{
    FlyweightFactory *factory = new FlyweightFactory(
    {
            {"Chevrolet", "Camaro2018", "pink"},
            {"Mercedes Benz", "C300", "black"},
            {"Mercedes Benz", "C500", "red"},
            {"BMW", "M5", "red"},
            {"BMW", "X6", "white"}
    });

    factory->listFlyweights();

    AddCarToPoliceDatabase(*factory,
                            "CL234IR",
                            "James Doe",
                            "BMW",
                            "M5",
                            "red");

    AddCarToPoliceDatabase(*factory,
                            "CL234IR",
                            "James Doe",
                            "BMW",
                            "X1",
                            "red");
    factory->listFlyweights();
    delete factory;

    return 0;
}
