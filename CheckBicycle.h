#ifndef CHECKBICYCLE_H
#define CHECKBICYCLE_H

#include "MemberList.h"
#include "BicycleList.h"
#include <string>
#include <fstream>
using namespace std;

class CheckBicycle {
private:
    MemberList* memberList;
    BicycleList* bicycleList;

public:
    CheckBicycle(MemberList* memberList, BicycleList* bicycleList);
    void BikeList(string idMember, ofstream& out);

    MemberList* getMemberList();
};

#endif
