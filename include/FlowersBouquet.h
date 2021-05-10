#ifndef HW2_FLOWERSBOUQUET_H
#define HW2_FLOWERSBOUQUET_H


#include <iostream>
#include "Person.h"

class FlowersBouquet: public Person{
public:
    FlowersBouquet(std::string name, Person*);

    std::string getName();

    void arrange();

private:
    std::vector<std::string> bouquet;
    bool is_arranged;
};

#endif //HW2_FLOWERSBOUQUET_H
