#ifndef HW2_FLORIST_H
#define HW2_FLORIST_H

#include <iostream>
#include "Wholesaler.h"

#include "FlowerArranger.h"
#include "DeliveryPerson.h"


class Florist: public Person{
public:
    Florist(std::string name);
    std::string getName();
    void acceptOrder(Person*, std::vector<std::string>);

private:
    Wholesaler *wholesaler;
    FlowerArranger *flowerArranger;
    DeliveryPerson *deliveryPerson;
};

#endif //HW2_FLORIST_H
