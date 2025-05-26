#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>
using namespace std;

class Bicycle {
private:
    string idBike;
    string modelName;
    string isRentOrNot;

public:
    Bicycle(string id, string model);
    string getIdBike();
    string getModelName();
    string getIsRentOrNot();
    void setIsRentOrNot(string status);
};

#endif
