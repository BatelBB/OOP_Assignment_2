#ifndef HW2_FLOWERSBOUQUET_H
#define HW2_FLOWERSBOUQUET_H

#include <vector>
#include <iostream>
#include "Person.h"

class FlowersBouquet{
public:
    FlowersBouquet(std::string name);

    std::vector<std::string> bouquet;
    bool is_arranged;
    void arrange();

private:
    std::string Person::name;
};

#endif //HW2_FLOWERSBOUQUET_H
