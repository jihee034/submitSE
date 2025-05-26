#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include "SignUp.h"
#include <fstream>
using namespace std;

// 클래스 이름 : SignUpUI
// 기능 : 사용자로부터 회원가입 정보를 입력받고 결과를 출력하는 UI 클래스
class SignUpUI {
private:
    SignUp* signUp;   // 회원가입 기능을 수행하는 제어 클래스 포인터

public:
    SignUpUI(SignUp* signUp);                                                             // 회원가입 제어 클래스 초기화
    void startInterface(string id, string pw, string phone, ofstream& out);              // 사용자 입력을 받아 회원가입 처리 및 출력
};

#endif
