#include "LogoutUI.h"


/*
   함수 이름 : LogoutUI::LogoutUI()
   기능     : 로그아웃 기능을 담당하는 Control 클래스 포인터를 초기화함
   전달 인자 : logout - 로그아웃 제어 클래스 포인터
   반환값    : 없음
*/
LogoutUI::LogoutUI(Logout* logout) {
    this->logout = logout;
}


/*
   함수 이름 : LogoutUI::logoutService()
   기능     : 현재 로그인된 회원을 로그아웃하고 결과를 출력함
   전달 인자 : out - 출력 스트림
   반환값    : 없음
*/
void LogoutUI::logoutService(ofstream& out) {
    Member* member = logout->systemEnd();
    out << "2.2. 로그아웃\n";
    if (member != nullptr)
        out << "> " << member->getId() << "\n";
    else
        out << "> 로그아웃 실패 (로그인 안 됨)\n";
    out << "\n";
}
