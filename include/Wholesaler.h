#ifndef HW2_WHOLESALER_H
#define HW2_WHOLESALER_H

#include <vector>
#include <iostream>

#include "Grower.h"
#include "FlowersBouquet.h"

class Wholesaler{
public:
    Wholesaler(std::string name);

    Grower* grower;
    FlowersBouquet* acceptOrder(std::vector<std::string>);
private:
    std::string Person::name;
};

#endif //HW2_WHOLESALER_H
