#ifndef BIKEREGISTERUI_H
#define BIKEREGISTERUI_H

#include "BikeRegister.h"
#include <fstream>
using namespace std;

class BikeRegisterUI {
private:
    BikeRegister* bikeRegister;

public:
    BikeRegisterUI(BikeRegister* bikeRegister);
    void inputBikeInfo(string idBike, string nameBike, ofstream& out);
};

#endif
