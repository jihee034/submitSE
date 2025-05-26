#include "BikeRegister.h"
#include "Bicycle.h"

BikeRegister::BikeRegister(BicycleList* bikeList) {
    this->bikeList = bikeList;
}

void BikeRegister::addBike(string idBike, string nameBike) {
    Bicycle* bike = new Bicycle(idBike, nameBike);
    bikeList->addBike(bike);
}
