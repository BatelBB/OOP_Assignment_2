#ifndef HW2_WHOLESALER_H
#define HW2_WHOLESALER_H

#include <vector>
#include <iostream>

#include "Grower.h"
#include "FlowersBouquet.h"

class Wholesaler{
public:
    Grower* grower;
    FlowersBouquet* acceptOrder(std::vector<std::string>);
};

#endif //HW2_WHOLESALER_H
