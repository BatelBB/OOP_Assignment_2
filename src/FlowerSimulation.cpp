#include <iostream>
#include "../include/Person.h"
#include "../include/Florist.h"
int main(){

    Person* chris = new Person("Chris");
    Person* robin = new Person("Robin");
    std::vector<std::string> order = { "Roses", "Violets", "Gladiolus" };
    Gardener* gardener = new Gardener("Garett");
    Grower* grower = new Grower("Gary", gardener);
    Wholesaler* wholesaler = new Wholesaler("Watson", grower);
    FlowerArranger* flowerArranger = new FlowerArranger("Flora", order);
    DeliveryPerson* deliveryPerson = new DeliveryPerson("Dylan", robin);
    Florist* fred = new Florist("Fred", wholesaler, flowerArranger, deliveryPerson);
    chris->orderFlowers(fred, robin, order);

    delete fred;
    delete chris;
    delete robin;
    delete gardener;
    delete grower;
    delete wholesaler;
    delete flowerArranger;
    delete deliveryPerson;

}