#include "../include/Person.h"

Person::Person(std::string name):name(name) {

}


void Person::orderFlowers(Florist *, Person *, std::vector<std::string>) {

}

void Person::acceptFlowers(FlowersBouquet *) {

}

Person::~Person() {
    delete this; //not sure about this
}


