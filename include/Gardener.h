
#ifndef HW2_GARDENER_H
#define HW2_GARDENER_H

#include "FlowersBouquet.h"

class Gardener{
public:
    FlowersBouquet* prepareBouquet(std::vector<std::string>);

    FlowersBouquet *prepareOrder(std::vector<std::string>);
};

#endif //HW2_GARDENER_H
