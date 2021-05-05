#ifndef HW2_GROWER_H
#define HW2_GROWER_H

#include <vector>
#include <iostream>

#include "Gardener.h"
#include "FlowersBouquet.h"

class Grower{
public:
    Grower(std::string name);

    Gardener* gardener;
    FlowersBouquet* prepareOrder(std::vector<std::string>);
private:
    std::string Person::name;
};

#endif //HW2_GROWER_H
