#include "RentBike.h"
#include "Bicycle.h"


/*
   함수 이름 : RentBike::RentBike()
   기능     : 회원 리스트와 자전거 리스트 포인터를 초기화함
   전달 인자 : memberList - 회원 리스트 포인터, bicycleList - 자전거 리스트 포인터
   반환값    : 없음
*/
RentBike::RentBike(MemberList* memberList, BicycleList* bicycleList) {
    this->memberList = memberList;
    this->bicycleList = bicycleList;
}


/*
   함수 이름 : RentBike::possBikeList()
   기능     : 자전거 ID와 모델명을 기반으로 해당 자전거를 대여 처리함
   전달 인자 : idBike - 자전거 ID, nameBike - 자전거 모델명 (또는 생략 가능)
   반환값    : 없음
*/
void RentBike::possBikeList(string idBike, string nameBike) {
    for (Bicycle* bike : bicycleList->getPossBikeList()) {
        if (bike->getIdBike() == idBike &&
            (nameBike.empty() || bike->getModelName() == nameBike)) {
            bike->setIsRentOrNot("YES");
            return;
        }
    }
}


/*
   함수 이름 : RentBike::getBicycleList()
   기능     : 자전거 리스트 포인터를 반환함
   전달 인자 : 없음
   반환값    : BicycleList* - 자전거 리스트 포인터
*/
BicycleList* RentBike::getBicycleList() {
    return bicycleList;
}
