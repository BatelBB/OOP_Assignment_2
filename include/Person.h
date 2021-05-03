#ifndef HW2_PERSON_H
#define HW2_PERSON_H

#include <vector>
#include <iostream>

#include "Florist.h"
#include "FlowersBouquet.h"

class Person{
public:
    std::string name;
    void orderFlowers(Florist*, Person*, std::vector<std::string>);
    void acceptFlowers(FlowersBouquet*);
};

#endif //HW2_PERSON_H