#include "RentBike.h"

RentBike::RentBike(MemberList* memberList, BicycleList* bicycleList) {
    this->memberList = memberList;
    this->bicycleList = bicycleList;
}

void RentBike::possBikeList(string idBike, string nameBike) {
    for (Bicycle* bike : bicycleList->getPossBikeList()) {
        if (bike->getIdBike() == idBike && bike->getModelName() == nameBike) {
            bike->setIsRentOrNot("YES");
            break;
        }
    }
}
