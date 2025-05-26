#include "CheckBicycle.h"


/*
   함수 이름 : CheckBicycle::CheckBicycle()
   기능     : 회원 리스트와 자전거 리스트 포인터를 초기화함
   전달 인자 : memberList - 회원 리스트 포인터, bicycleList - 자전거 리스트 포인터
   반환값    : 없음
*/
CheckBicycle::CheckBicycle(MemberList* memberList, BicycleList* bicycleList) {
    this->memberList = memberList;
    this->bicycleList = bicycleList;
}


/*
   함수 이름 : CheckBicycle::BikeList()
   기능     : 대여 상태가 "YES"인 자전거들의 정보를 출력함
   전달 인자 : idMember - 현재 로그인한 회원 ID, out - 출력 스트림
   반환값    : 없음
*/
void CheckBicycle::BikeList(string idMember, ofstream& out) {
    for (Bicycle* bike : bicycleList->getPossBikeList()) {
        if (bike->getIsRentOrNot() == "YES") {
            out << "> " << bike->getIdBike() << " " << bike->getModelName() << "\n";
        }
    }
}


/*
   함수 이름 : CheckBicycle::getMemberList()
   기능     : 멤버 리스트 포인터를 반환함
   전달 인자 : 없음
   반환값    : MemberList* - 멤버 리스트 포인터
*/
MemberList* CheckBicycle::getMemberList() {
    return memberList;
}
