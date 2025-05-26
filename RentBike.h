#ifndef RENTBIKE_H
#define RENTBIKE_H

#include "MemberList.h"
#include "BicycleList.h"
#include <string>
using namespace std;

class RentBike {
private:
    MemberList* memberList;
    BicycleList* bicycleList;

public:
    RentBike(MemberList* memberList, BicycleList* bicycleList);
    void possBikeList(string idBike, string nameBike);
};

#endif
