#ifndef CHECKBICYCLE_H
#define CHECKBICYCLE_H

#include "MemberList.h"
#include "BicycleList.h"
#include <string>
#include <fstream>
using namespace std;

// 클래스 이름 : CheckBicycle
// 기능 : 현재 로그인한 회원이 대여한 자전거 리스트를 조회하는 기능을 제공하는 클래스
class CheckBicycle {
private:
    MemberList* memberList;      // 전체 회원 리스트
    BicycleList* bicycleList;    // 전체 자전거 리스트

public:
    CheckBicycle(MemberList* memberList, BicycleList* bicycleList);         // 회원 및 자전거 리스트 초기화
    void BikeList(string idMember, ofstream& out);                          // 회원 ID를 기준으로 대여한 자전거 리스트 출력
    MemberList* getMemberList();                                            // 전체 회원 리스트 포인터 반환
};

#endif
