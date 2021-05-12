
#include "../include/FlowerArranger.h"
FlowerArranger::FlowerArranger(std::string name, std::vector<std::string> order) : Person(name) {}

void FlowerArranger::arrangeFlowers(FlowersBouquet* flowersBouquet) {
    flowersBouquet->arrange();
    std::cout << getName() << " arranges flowers." << std::endl;
}

std::string FlowerArranger::getName() {
    return "Flower Arranger " + Person::getName();
}
