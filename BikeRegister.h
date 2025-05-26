#ifndef BIKEREGISTER_H
#define BIKEREGISTER_H

#include "BicycleList.h"
#include <string>
using namespace std;

// 클래스 이름 : BikeRegister
// 기능 : 자전거 정보를 BicycleList에 등록하는 기능을 제공하는 클래스
class BikeRegister {
private:
    BicycleList* bikeList;  // 자전거 리스트 객체 포인터

public:
    BikeRegister(BicycleList* bikeList);                  // 자전거 리스트를 초기화
    void addBike(string idBike, string nameBike);         // 자전거 ID와 모델명을 기반으로 자전거를 등록
};

#endif
