#ifndef CHECKBICYCLEUI_H
#define CHECKBICYCLEUI_H

#include "CheckBicycle.h"
#include <fstream>
using namespace std;

// 클래스 이름 : CheckBicycleUI
// 기능 : 로그인된 회원의 대여 자전거 목록을 조회하고 출력하는 UI 클래스
class CheckBicycleUI {
private:
    CheckBicycle* checkBicycle;  // 자전거 조회 기능을 수행하는 제어 클래스 포인터

public:
    CheckBicycleUI(CheckBicycle* checkBicycle);        // 제어 클래스 초기화
    void checkBike(ofstream& out);                     // 대여 자전거 목록을 출력 스트림에 기록
};

#endif
