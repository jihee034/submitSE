#include "CheckBicycleUI.h"

CheckBicycleUI::CheckBicycleUI(CheckBicycle* checkBicycle) {
    this->checkBicycle = checkBicycle;
}

void CheckBicycleUI::checkBike(ofstream& out) {
    out << "5.1. 대여 자전거 조회\n";
    Member* member = checkBicycle->getMemberList()->getNewMember();
    if (member != nullptr) {
        checkBicycle->BikeList(member->getId(), out);
    } else {
        out << "> 조회 실패: 로그인 필요\n";
    }
}
