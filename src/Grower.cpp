
#include "../include/Grower.h"

Grower::Grower(std::string name, Gardener* gardener):Person(name), gardener(gardener){}

std::string Grower::getName() {
    return "Grower " + Person::getName();
}

FlowersBouquet *Grower::prepareOrder(std::vector<std::string> order) {
    std::cout << getName() << " forwards the request to " << gardener->getName() << "." << std::endl;
    FlowersBouquet* flowersBouquet =  gardener->prepareBouquet(order);
    std::cout << gardener->getName() << " returns flowers to " << getName() << "." << std::endl;
    return flowersBouquet;

};


