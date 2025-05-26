#include "BikeRegisterUI.h"


/*
   함수 이름 : BikeRegisterUI::BikeRegisterUI()
   기능     : 자전거 등록 기능을 담당하는 Control 클래스 포인터를 초기화함
   전달 인자 : bikeRegister - 자전거 등록 제어 클래스 포인터
   반환값    : 없음
*/
BikeRegisterUI::BikeRegisterUI(BikeRegister* bikeRegister) {
    this->bikeRegister = bikeRegister;
}


/*
   함수 이름 : BikeRegisterUI::inputBikeInfo()
   기능     : 사용자로부터 입력받은 자전거 정보를 등록하고 결과를 출력함
   전달 인자 : idBike - 자전거 ID, nameBike - 자전거 모델명, out - 출력 스트림
   반환값    : 없음
*/
void BikeRegisterUI::inputBikeInfo(string idBike, string nameBike, ofstream& out) {
    bikeRegister->addBike(idBike, nameBike);
    out << "3.1. 자전거 등록\n";
    out << "> " << idBike << " " << nameBike << "\n\n";
}
