#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H

#include "RentBike.h"
#include <fstream>
using namespace std;

// 클래스 이름 : RentBikeUI
// 기능 : 사용자로부터 대여할 자전거 정보를 입력받고 대여 결과를 출력하는 UI 클래스
class RentBikeUI {
private:
    RentBike* rentBike;   // 자전거 대여 기능을 수행하는 제어 클래스 포인터

public:
    RentBikeUI(RentBike* rentBike);                                             // 대여 제어 클래스 초기화
    void rentBicycle(string idBike, string nameBike, ofstream& out);           // 자전거 대여 요청을 처리하고 결과 출력
};

#endif
