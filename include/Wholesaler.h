#ifndef HW2_WHOLESALER_H
#define HW2_WHOLESALER_H

#include <vector>
#include <iostream>

#include "Grower.h"
#include "FlowersBouquet.h"

class Wholesaler: public Person{
public:
    Wholesaler(std::string name, Grower*);

    std::string getName();
    FlowersBouquet* acceptOrder(std::vector<std::string>);
private:
    Grower* grower;
};

#endif //HW2_WHOLESALER_H
