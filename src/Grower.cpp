
#include "../include/Grower.h"

Grower::Grower(std::string name, Gardener* gardener):Person(name) {}

std::string Grower::getName() {
    return "Grower " + Person::getName();
}

FlowersBouquet *Grower::prepareOrder(std::vector<std::string> order) {
    return nullptr;
};


