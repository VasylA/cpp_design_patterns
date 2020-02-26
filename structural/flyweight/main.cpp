#include "flyweightfactory.h"

#include <memory>

void AddCarToPoliceDatabase(FlyweightFactory &factory,
                            const std::string &plates,
                            const std::string &owner,
                            const std::string &brand,
                            const std::string &model,
                            const std::string &color,
                            const Logo        &logo)
{
    std::cout << "\nClient: Adding a car to database.\n";
    const Flyweight &flyweight = factory.getFlyweight({brand, model, color, logo});

    flyweight.operation({plates, owner});
}


int main()
{
    Logo bmwLogo;
    Logo mercedesLogo;
    Logo chevroletLogo;
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
