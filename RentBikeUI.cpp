#include "RentBikeUI.h"

RentBikeUI::RentBikeUI(RentBike* rentBike) {
    this->rentBike = rentBike;
}

void RentBikeUI::rentBicycle(string idBike, string nameBike, ofstream& out) {
    rentBike->possBikeList(idBike, nameBike);
    out << "4.1. 자전거 대여\n";
    out << "> " << idBike << " " << nameBike << "\n";
}
