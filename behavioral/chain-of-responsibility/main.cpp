#include "tom.h"
#include "bob.h"
#include "amanda.h"
#include "food.h"

#include <list>

using std::list;
using std::string;

int main()
{
    auto amanda = new Amanda;
    auto bob = new Bob(amanda);
    auto tom = new Tom(bob);

    auto cappuccino1 = new Food("Cappuccino", {"Coffee", "Milk", "Sugar"});
    auto cappuccino2 = new Food("Cappuccino", {"Coffee", "Milk"});

    auto soup1 = new Food("Soup with meat", {"Meat", "Water", "Potato"});
    auto soup2 = new Food("Soup with potato", {"Water", "Potato"});

    auto meat = new Food("Chicken", {"Meat"});

    tom->handleFood(cappuccino1);
    tom->handleFood(cappuccino2);
    tom->handleFood(soup1);
    tom->handleFood(soup2);
    tom->handleFood(meat);

    delete tom;
    delete bob;
    delete amanda;

    return 0;
}
