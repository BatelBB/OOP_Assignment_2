
#include "../include/Florist.h"

Florist::Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson) : Person(name), wholesaler(wholesaler), deliveryPerson(deliveryPerson), flowerArranger(flowerArranger) {}

void Florist::acceptOrder(Person* person, std::vector <std::string> order) {
    std::cout << getName() << " forwards request to " << wholesaler->getName() << "." << std::endl;
    wholesaler->acceptOrder(order);

}

std::string Florist::getName() {
    return "Florist " +Person::getName();
}
