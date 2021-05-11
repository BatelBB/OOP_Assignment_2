
#include "../include/Gardener.h"

Gardener::Gardener(std::string name) : Person(name) {};

FlowersBouquet *Gardener::prepareBouquet(std::vector<std::string> order) {
    std::cout << getName() << " prepares flowers.\n" << getName() << " returns flowers to Grower Gary." << std::endl;
    return new FlowersBouquet(order);
}

std::string Gardener::getName() {
    return "Gardener "+Person::getName();
}


