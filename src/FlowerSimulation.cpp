#include <iostream>
#include "../include/Person.h"
#include "../include/Florist.h"
int main(){
    Florist* fred = new Florist("Fred");
    Person* chris = new Person("Chris");
    Person* robin = new Person("Robin");
    std::vector<std::string> order = { "Roses", "Violets", "Gladiolus" };
    Gardener* gardener = new Gardener("Garett");
    Grower* grower = new Grower("Gary", gardener);
    Wholesaler* watson = new Wholesaler("Watson", grower);
    FlowerArranger* flora = new FlowerArranger("Flora", order);
    DeliveryPerson* dylan = new DeliveryPerson("Dylan", robin);
    chris->orderFlowers(fred, robin, order);

    delete fred;
    delete chris;
    delete robin;
    delete gardener;
    delete grower;
    delete watson;
    delete flora;
    delete dylan;

}