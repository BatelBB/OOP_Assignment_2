#ifndef HW2_GROWER_H
#define HW2_GROWER_H

#include <vector>
#include <iostream>

#include "Gardener.h"
#include "FlowersBouquet.h"

class Grower{
public:
    Gardener* gardener;
    FlowersBouquet* prepareOrder(std::vector<std::string>);
};

#endif //HW2_GROWER_H
