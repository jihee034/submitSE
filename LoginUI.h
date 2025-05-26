#ifndef LOGINUI_H
#define LOGINUI_H

#include "Login.h"
#include <fstream>
using namespace std;

// 클래스 이름 : LoginUI
// 기능 : 사용자로부터 ID와 비밀번호를 입력받아 로그인 결과를 출력하는 UI 클래스
class LoginUI {
private:
    Login* loginControl;  // 로그인 기능을 수행하는 제어 클래스 포인터

public:
    LoginUI(Login* loginControl);                             // 제어 클래스 초기화
    void login(string id, string pw, ofstream& out);          // ID/PW를 입력받아 로그인 결과 출력
};

#endif
