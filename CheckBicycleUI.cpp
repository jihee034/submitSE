#include "CheckBicycleUI.h"


/*
   함수 이름 : CheckBicycleUI::CheckBicycleUI()
   기능     : 자전거 조회 기능을 담당하는 Control 클래스 포인터를 초기화함
   전달 인자 : checkBicycle - 자전거 조회 제어 클래스 포인터
   반환값    : 없음
*/
CheckBicycleUI::CheckBicycleUI(CheckBicycle* checkBicycle) {
    this->checkBicycle = checkBicycle;
}


/*
   함수 이름 : CheckBicycleUI::checkBike()
   기능     : 현재 로그인한 사용자가 대여한 자전거 리스트를 출력함
   전달 인자 : out - 출력 스트림
   반환값    : 없음
*/
void CheckBicycleUI::checkBike(ofstream& out) {
    out << "5.1. 자전거 대여 리스트\n";
    Member* member = checkBicycle->getMemberList()->getNewMember();
    if (member != nullptr) {
        checkBicycle->BikeList(member->getId(), out);
    }
    else {
        out << "> 조회 실패: 로그인 필요\n";
    }
    out << "\n";
}
