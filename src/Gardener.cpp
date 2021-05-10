
#include "../include/Gardener.h"

Gardener::Gardener(std::string name) : Person(name) {};

FlowersBouquet *Gardener::prepareBouquet(std::vector<std::string>) {
    return nullptr;
}

std::string Gardener::getName() {
    return "Gardener "+Person::getName();
}

