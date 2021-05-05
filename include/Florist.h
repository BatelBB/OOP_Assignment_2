#ifndef HW2_FLORIST_H
#define HW2_FLORIST_H

#include <iostream>
#include "Wholesaler.h"
#include "Person.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"


class Florist{
public:
    Florist(std::string name);

    Wholesaler *wholesaler;
    FlowerArranger *flowerArranger;
    DeliveryPerson *deliveryPerson;
    void acceptOrder(Person*, std::vector<std::string>);

private:
    std::string Person::name;
};

#endif //HW2_FLORIST_H
