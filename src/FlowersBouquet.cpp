#include "../include/FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> bouquet) : bouquet(bouquet) {}
FlowersBouquet::~FlowersBouquet() {

}
void FlowersBouquet::arrange() {
    is_arranged = true;
}

std::string FlowersBouquet::getName() {
    std::string s = "flowers: ";

    for(std::string flower: bouquet){
        s += flower + ", ";
    }

    return s.substr(0, s.length()-2);
}




