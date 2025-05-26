#include "LoginUI.h"


/*
   함수 이름 : LoginUI::LoginUI()
   기능     : 로그인 기능을 담당하는 Control 클래스 포인터를 초기화함
   전달 인자 : loginControl - 로그인 제어 클래스 포인터
   반환값    : 없음
*/
LoginUI::LoginUI(Login* loginControl) {
    this->loginControl = loginControl;
}


/*
   함수 이름 : LoginUI::login()
   기능     : 사용자 ID, 비밀번호를 입력받아 로그인 처리 결과를 출력함
   전달 인자 : id - 사용자 ID, pw - 비밀번호, out - 출력 스트림
   반환값    : 없음
*/
void LoginUI::login(string id, string pw, ofstream& out) {
    bool success = loginControl->login(id, pw);
    out << "2.1. 로그인\n";
    if (success)
        out << "> " << id << " " << pw << "\n";
    else
        out << "> 로그인 실패\n";
    out << "\n";
}
