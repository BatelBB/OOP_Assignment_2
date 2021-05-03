#ifndef HW2_FLORIST_H
#define HW2_FLORIST_H

#include <iostream>

#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "Person.h"

class Florist{
public:
    Wholesaler *wholesaler;
    FlowerArranger *flowerArranger;
    DeliveryPerson *deliveryPerson;
    void acceptOrder(Person*, std::vector<std::string>);
};

#endif //HW2_FLORIST_H
