
#ifndef HW2_GARDENER_H
#define HW2_GARDENER_H


#include "FlowersBouquet.h"
#include "Person.h"

class Gardener: public Person{
public:
    Gardener(std::string name);

    FlowersBouquet* prepareBouquet(std::vector<std::string>);

    std::string getName();
};

#endif //HW2_GARDENER_H
