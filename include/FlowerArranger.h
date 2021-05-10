
#ifndef HW2_FLOWERARRANGER_H
#define HW2_FLOWERARRANGER_H


#include <iostream>
#include "FlowersBouquet.h"

class FlowerArranger: public Person {
public:
    FlowerArranger(std::string name, std::vector<std::string>);
    std::string getName();
    void arrangeFlowers(FlowersBouquet*);
private:
};



#endif //HW2_FLOWERARRANGER_H
