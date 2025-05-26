#ifndef BICYCLELIST_H
#define BICYCLELIST_H

#include "Bicycle.h"
#include <vector>
using namespace std;

// 클래스 이름 : BicycleList
// 기능 : 자전거 객체들을 저장하고 관리하는 리스트 클래스
class BicycleList {
private:
    vector<Bicycle*> possBikeList;  // 등록된 자전거 리스트

public:
    void addBike(Bicycle* bike);                      // 자전거를 리스트에 추가
    vector<Bicycle*> getPossBikeList();               // 등록된 자전거 리스트 반환
};

#endif
