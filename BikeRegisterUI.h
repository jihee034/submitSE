#ifndef BIKEREGISTERUI_H
#define BIKEREGISTERUI_H

#include "BikeRegister.h"
#include <fstream>
using namespace std;

// 클래스 이름 : BikeRegisterUI
// 기능 : 사용자로부터 자전거 정보를 입력받고 자전거 등록 결과를 출력하는 UI 클래스
class BikeRegisterUI {
private:
    BikeRegister* bikeRegister;  // 자전거 등록 기능을 수행하는 제어 클래스 포인터

public:
    BikeRegisterUI(BikeRegister* bikeRegister);                               // 자전거 등록 제어 클래스 초기화
    void inputBikeInfo(string idBike, string nameBike, ofstream& out);        // 자전거 정보를 입력받아 등록 처리 및 출력
};

#endif
