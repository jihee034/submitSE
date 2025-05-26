#include "BicycleList.h"

void BicycleList::addBike(Bicycle* bike) {
    possBikeList.push_back(bike);
}

vector<Bicycle*> BicycleList::getPossBikeList() {
    return possBikeList;
}
