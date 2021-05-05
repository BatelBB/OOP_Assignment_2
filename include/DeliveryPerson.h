#ifndef HW2_DELIVERYPERSON_H
#define HW2_DELIVERYPERSON_H

#include <iostream>

#include "FlowersBouquet.h"

class DeliveryPerson{
public:
    DeliveryPerson(std::string name);

    void deliver(Person*, FlowersBouquet*);
private:
    std::string Person::name;
};

#endif //HW2_DELIVERYPERSON_H
