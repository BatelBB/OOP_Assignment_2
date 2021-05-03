cmake_minimum_required(VERSION 3.17)
project(hw2)

set(CMAKE_CXX_STANDARD 11)

add_executable(hw2 include/Person.h include/Florist.h include/Wholesaler.h include/Grower.h include/Gardener.h "include/FlowerArranger.h" "include/DeliveryPerson.h" include/FlowersBouquet.h src/Person.cpp src/Florist.cpp src/Wholesaler.cpp src/Grower.cpp src/Gardener.cpp "src/FlowerArranger.cpp" "src/DeliveryPerson.cpp" src/FlowersBouquet.cpp)