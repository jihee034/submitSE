#include "SignUpUI.h"


/*
   함수 이름 : SignUpUI::SignUpUI()
   기능     : 회원가입 기능을 담당하는 Control 클래스 포인터를 초기화함
   전달 인자 : signUp - 회원가입 제어 클래스 포인터
   반환값    : 없음
*/
SignUpUI::SignUpUI(SignUp* signUp) {
    this->signUp = signUp;
}


/*
   함수 이름 : SignUpUI::startInterface()
   기능     : 사용자로부터 ID, 비밀번호, 전화번호를 입력받아 회원가입을 수행하고 결과를 출력함
   전달 인자 : id - 회원 ID, pw - 비밀번호, phone - 전화번호, out - 출력 스트림
   반환값    : 없음
*/
void SignUpUI::startInterface(string id, string pw, string phone, ofstream& out) {
    signUp->addMember(id, pw, phone);
    out << "1.1. 회원가입\n";
    out << "> " << id << " " << pw << " " << phone << "\n\n";
}
