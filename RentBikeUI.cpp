#include "RentBikeUI.h"


/*
   함수 이름 : RentBikeUI::RentBikeUI()
   기능     : 자전거 대여 기능을 담당하는 Control 클래스 포인터를 초기화함
   전달 인자 : rentBike - 자전거 대여 제어 클래스 포인터
   반환값    : 없음
*/
RentBikeUI::RentBikeUI(RentBike* rentBike) {
    this->rentBike = rentBike;
}


/*
   함수 이름 : RentBikeUI::rentBicycle()
   기능     : 입력받은 자전거 ID 및 모델명을 기반으로 대여 처리하고 결과를 출력함
   전달 인자 : idBike - 자전거 ID, nameBike - 자전거 모델명, out - 출력 스트림
   반환값    : 없음
*/
void RentBikeUI::rentBicycle(string idBike, string nameBike, ofstream& out) {
    rentBike->possBikeList(idBike, nameBike);

    out << "4.1. 자전거 대여\n";

    for (Bicycle* bike : rentBike->getBicycleList()->getPossBikeList()) {
        if (bike->getIdBike() == idBike) {
            out << "> " << bike->getIdBike() << " " << bike->getModelName() << "\n\n";
            return;
        }
    }

    // fallback
    out << "> " << idBike << "\n\n";
}
