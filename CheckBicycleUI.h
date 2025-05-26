#ifndef CHECKBICYCLEUI_H
#define CHECKBICYCLEUI_H

#include "CheckBicycle.h"
#include <fstream>
using namespace std;

class CheckBicycleUI {
private:
    CheckBicycle* checkBicycle;

public:
    CheckBicycleUI(CheckBicycle* checkBicycle);
    void checkBike(ofstream& out);
};

#endif
