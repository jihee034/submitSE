#include "BikeRegisterUI.h"

BikeRegisterUI::BikeRegisterUI(BikeRegister* bikeRegister) {
    this->bikeRegister = bikeRegister;
}

void BikeRegisterUI::inputBikeInfo(string idBike, string nameBike, ofstream& out) {
    bikeRegister->addBike(idBike, nameBike);
    out << "3.1. 자전거 정보 등록\n";
    out << "> " << idBike << " " << nameBike << "\n";
}
