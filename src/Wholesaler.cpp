#include "../include/Wholesaler.h"


Wholesaler::Wholesaler(std::string name, Grower* grower):Person(name) {};

FlowersBouquet *Wholesaler::acceptOrder(std::vector<std::string>) {
    return nullptr;
}

std::string Wholesaler::getName() {
    return "Wholesaler " + Person::getName();
}

