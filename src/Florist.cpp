
#include "../include/Florist.h"

Florist::Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson) : Person(name), wholesaler(wholesaler), deliveryPerson(deliveryPerson), flowerArranger(flowerArranger) {}

void Florist::acceptOrder(Person* person, std::vector <std::string> order) {
    std::cout << getName() << " forwards request to " << wholesaler->getName() << "." << std::endl;
    FlowersBouquet* flowersBouquet = wholesaler->acceptOrder(order);
    std::cout << wholesaler->getName() << " returns flowers to " << getName() << "." << std::endl;

    std::cout << getName() << " request flowers arrangement from " << flowerArranger->getName() << "." << std::endl;
    flowerArranger->arrangeFlowers(flowersBouquet);
    std::cout << flowerArranger->getName() << " returns arranged flowers to " << getName() << "." << std::endl;

    std::cout << getName() << " forwards flowers to " << deliveryPerson->getName() << "." << std::endl;
    deliveryPerson->deliver(person, flowersBouquet);

}

std::string Florist::getName() {
    return "Florist " +Person::getName();
}
