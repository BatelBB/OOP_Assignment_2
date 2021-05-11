#include "../include/Person.h"
#include "../include/Florist.h"
Person::Person(std::string name):name(name) {

}


void Person::orderFlowers(Florist * florist, Person * person, std::vector<std::string> order) {
    std::cout << getName() << " orders flowers to " << person->getName() << " from " << florist->getName() << ": Roses, Violets, Gladiolus." << std::endl;
    florist->acceptOrder(person, order);
}

void Person::acceptFlowers(FlowersBouquet * flowersBouquet) {

}


std::string Person::getName() {
    return name;
}


