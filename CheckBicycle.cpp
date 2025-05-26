#include "CheckBicycle.h"

CheckBicycle::CheckBicycle(MemberList* memberList, BicycleList* bicycleList) {
    this->memberList = memberList;
    this->bicycleList = bicycleList;
}

void CheckBicycle::BikeList(string idMember, ofstream& out) {
    for (Bicycle* bike : bicycleList->getPossBikeList()) {
        if (bike->getIsRentOrNot() == "YES") {
            out << "> " << bike->getIdBike() << " " << bike->getModelName() << "\n";
        }
    }
}

MemberList* CheckBicycle::getMemberList() {
    return memberList;
}
