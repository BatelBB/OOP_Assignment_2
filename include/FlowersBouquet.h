#ifndef HW2_FLOWERSBOUQUET_H
#define HW2_FLOWERSBOUQUET_H


#include <iostream>
#include <vector>

class FlowersBouquet{
public:
    FlowersBouquet(std::vector<std::string>);

//destructor
~FlowersBouquet();

    void arrange();

private:
    std::vector<std::string> bouquet;
    bool is_arranged;
};

#endif //HW2_FLOWERSBOUQUET_H
