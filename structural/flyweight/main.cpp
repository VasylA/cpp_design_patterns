#include "flyweightfactory.h"

#include <memory>

void AddCarToPoliceDatabase(FlyweightFactory &factory,
                            const std::string &plate,
                            const std::string &owner,
                            const std::string &brand,
                            const std::string &model,
                            const std::string &color,
                            const Image       &logo)
{
    std::cout << "\nClient: Adding a car to database.\n";
    const Flyweight &flyweight = factory.getFlyweight({brand, model, color, logo});

    flyweight.operation({plate, owner});
}


int main()
{
    Image bmwLogo;
    Image mercedesLogo;
    Image chevroletLogo;
    auto factory = std::make_unique<FlyweightFactory>(std::initializer_list<SharedState>(
    {
        {"Chevrolet", "Camaro2018", "pink", chevroletLogo},
        {"Mercedes Benz", "C300", "black", mercedesLogo},
        {"Mercedes Benz", "C500", "red", mercedesLogo},
        {"BMW", "M5", "red", bmwLogo},
        {"BMW", "X6", "white", bmwLogo}
    }));

    factory->listFlyweights();

    AddCarToPoliceDatabase(*factory,
                           "CL234IR",
                           "James Doe",
                           "BMW",
                           "M5",
                           "red",
                           bmwLogo);

    AddCarToPoliceDatabase(*factory,
                           "CL234IR",
                           "James Doe",
                           "BMW",
                           "X1",
                           "red",
                           bmwLogo);

    factory->listFlyweights();

    return 0;
}
