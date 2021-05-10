#include "../include/FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::string name, Person* person) : Person(name) {}

void FlowersBouquet::arrange() {
    is_arranged = true;
}

std::string FlowersBouquet::getName() {
    return "Flowers Bouquet " + Person::getName();
}

