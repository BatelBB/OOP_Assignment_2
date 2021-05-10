#ifndef HW2_GROWER_H
#define HW2_GROWER_H

#include <vector>
#include <iostream>

#include "Gardener.h"
#include "FlowersBouquet.h"

class Grower: public Person{
public:
    Grower(std::string name, Gardner*);

    std::string getName();
    FlowersBouquet* prepareOrder(std::vector<std::string>);
private:
    Gardener* gardener;
};

#endif //HW2_GROWER_H
