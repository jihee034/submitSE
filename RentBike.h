#ifndef RENTBIKE_H
#define RENTBIKE_H

#include "MemberList.h"
#include "BicycleList.h"
#include <string>
using namespace std;

// 클래스 이름 : RentBike
// 기능 : 로그인한 회원이 자전거를 대여할 수 있도록 처리하는 기능을 제공하는 클래스
class RentBike {
private:
    MemberList* memberList;     // 전체 회원 리스트
    BicycleList* bicycleList;   // 전체 자전거 리스트

public:
    RentBike(MemberList* memberList, BicycleList* bicycleList);   // 회원 및 자전거 리스트 초기화
    void possBikeList(string idBike, string nameBike);            // 자전거 ID와 모델명을 기반으로 대여 처리
    BicycleList* getBicycleList();                                // 자전거 리스트 포인터 반환
};

#endif
