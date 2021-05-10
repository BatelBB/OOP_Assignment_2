#include "../include/DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(std::string name, Person* person):Person(name){}

void DeliveryPerson::deliver(Person* person, FlowersBouquet* flowersBouquet){

}

std::string DeliveryPerson::getName() {
    return "DeliveryPerson " + Person::getName();
}
