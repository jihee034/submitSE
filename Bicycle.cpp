#include "Bicycle.h"

Bicycle::Bicycle(string id, string model)
    : idBike(id), modelName(model), isRentOrNot("NO") {}

string Bicycle::getIdBike() {
    return idBike;
}

string Bicycle::getModelName() {
    return modelName;
}

string Bicycle::getIsRentOrNot() {
    return isRentOrNot;
}

void Bicycle::setIsRentOrNot(string status) {
    isRentOrNot = status;
}
