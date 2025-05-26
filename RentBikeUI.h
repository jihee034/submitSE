#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H

#include "RentBike.h"
#include <fstream>
using namespace std;

class RentBikeUI {
private:
    RentBike* rentBike;

public:
    RentBikeUI(RentBike* rentBike);
    void rentBicycle(string idBike, string nameBike, ofstream& out);
};

#endif
