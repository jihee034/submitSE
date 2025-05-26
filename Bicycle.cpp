#include "Bicycle.h"


/*
   함수 이름 : Bicycle::Bicycle()
   기능     : 자전거 ID, 모델명을 초기화하고 대여 상태를 "NO"로 설정함
   전달 인자 : id - 자전거 ID, model - 자전거 모델명
   반환값    : 없음
*/
Bicycle::Bicycle(string id, string model)
    : idBike(id), modelName(model), isRentOrNot("NO") {}


/*
   함수 이름 : Bicycle::getIdBike()
   기능     : 자전거 ID를 반환함
   전달 인자 : 없음
   반환값    : string - 자전거 ID
*/
string Bicycle::getIdBike() {
    return idBike;
}


/*
   함수 이름 : Bicycle::getModelName()
   기능     : 자전거 모델명을 반환함
   전달 인자 : 없음
   반환값    : string - 자전거 모델명
*/
string Bicycle::getModelName() {
    return modelName;
}


/*
   함수 이름 : Bicycle::getIsRentOrNot()
   기능     : 자전거 대여 여부를 반환함
   전달 인자 : 없음
   반환값    : string - 대여 여부 ("YES" 또는 "NO")
*/
string Bicycle::getIsRentOrNot() {
    return isRentOrNot;
}


/*
   함수 이름 : Bicycle::setIsRentOrNot()
   기능     : 자전거 대여 여부를 설정함
   전달 인자 : status - "YES" 또는 "NO"
   반환값    : 없음
*/
void Bicycle::setIsRentOrNot(string status) {
    isRentOrNot = status;
}
