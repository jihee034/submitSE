#ifndef BICYCLELIST_H
#define BICYCLELIST_H

#include "Bicycle.h"
#include <vector>
using namespace std;

class BicycleList {
private:
    vector<Bicycle*> possBikeList;

public:
    void addBike(Bicycle* bike);
    vector<Bicycle*> getPossBikeList();
};

#endif
