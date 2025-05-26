#ifndef BIKEREGISTER_H
#define BIKEREGISTER_H

#include "BicycleList.h"
#include <string>
using namespace std;

class BikeRegister {
private:
    BicycleList* bikeList;

public:
    BikeRegister(BicycleList* bikeList);
    void addBike(string idBike, string nameBike);
};

#endif
