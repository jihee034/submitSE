#include "BicycleList.h"


/*
   함수 이름 : BicycleList::addBike()
   기능     : 자전거 리스트에 자전거 객체를 추가함
   전달 인자 : bike - 추가할 자전거 객체 포인터
   반환값    : 없음
*/
void BicycleList::addBike(Bicycle* bike) {
    possBikeList.push_back(bike);
}


/*
   함수 이름 : BicycleList::getPossBikeList()
   기능     : 등록된 자전거 리스트를 반환함
   전달 인자 : 없음
   반환값    : vector<Bicycle*> - 자전거 포인터 리스트
*/
vector<Bicycle*> BicycleList::getPossBikeList() {
    return possBikeList;
}
