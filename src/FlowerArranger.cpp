
#include "../include/FlowerArranger.h"
FlowerArranger::FlowerArranger(std::string name, std::vector<std::string> order) : Person(name) {}

void FlowerArranger::arrangeFlowers(FlowersBouquet *) {

}

std::string FlowerArranger::getName() {
    return "FlowerArranger" + Person::getName();
}
