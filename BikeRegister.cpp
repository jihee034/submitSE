#include "BikeRegister.h"
#include "Bicycle.h"


/*
   함수 이름 : BikeRegister::BikeRegister()
   기능     : 자전거 리스트 포인터를 초기화함
   전달 인자 : bikeList - 자전거 리스트 포인터
   반환값    : 없음
*/
BikeRegister::BikeRegister(BicycleList* bikeList) {
    this->bikeList = bikeList;
}


/*
   함수 이름 : BikeRegister::addBike()
   기능     : 전달받은 자전거 정보를 기반으로 Bicycle 객체를 생성하고 리스트에 추가함
   전달 인자 : idBike - 자전거 ID, nameBike - 자전거 모델명
   반환값    : 없음
*/
void BikeRegister::addBike(string idBike, string nameBike) {
    Bicycle* bike = new Bicycle(idBike, nameBike);
    bikeList->addBike(bike);
}
