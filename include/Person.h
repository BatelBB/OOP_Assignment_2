#ifndef HW2_PERSON_H
#define HW2_PERSON_H

#include <vector>
#include <iostream>

class Florist;
class FlowersBouquet;

class Person{
public:
    Person(std::string name);

    virtual std::string getName();
    void orderFlowers(Florist*, Person*, std::vector<std::string>);
    void acceptFlowers(FlowersBouquet*);
protected:
    std::string name;
    std::string orderToString(std::vector<std::string> order);
};

#endif //HW2_PERSON_H
