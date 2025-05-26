#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include "Logout.h"
#include <fstream>
using namespace std;

// 클래스 이름 : LogoutUI
// 기능 : 로그아웃 기능을 수행하고 결과를 출력하는 UI 클래스
class LogoutUI {
private:
    Logout* logout;  // 로그아웃 제어 클래스 포인터

public:
    LogoutUI(Logout* logout);                      // 로그아웃 제어 클래스 초기화
    void logoutService(ofstream& out);             // 로그아웃 처리 및 결과 출력
};

#endif
