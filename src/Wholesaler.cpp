#include "../include/Wholesaler.h"


Wholesaler::Wholesaler(std::string name, Grower* grower):Person(name), grower(grower) {};

FlowersBouquet *Wholesaler::acceptOrder(std::vector<std::string> order) {
    std::cout << getName() << " forwards the request to " << grower->getName() << "." << std::endl;
    return grower->prepareOrder(order);
}

std::string Wholesaler::getName() {
    return "Wholesaler " + Person::getName();
}

