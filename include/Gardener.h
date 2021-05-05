
#ifndef HW2_GARDENER_H
#define HW2_GARDENER_H


#include "FlowersBouquet.h"

class Gardener{
public:
    Gardener(std::string name);

    FlowersBouquet* prepareBouquet(std::vector<std::string>);

    FlowersBouquet *prepareOrder(std::vector<std::string>);

private:
    std::string Person::name;
};

#endif //HW2_GARDENER_H
