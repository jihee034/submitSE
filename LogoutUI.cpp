#include "LogoutUI.h"

LogoutUI::LogoutUI(Logout* logout) {
    this->logout = logout;
}

void LogoutUI::logoutService(ofstream& out) {
    Member* member = logout->systemEnd();
    out << "2.2. 로그아웃\n";
    if (member != nullptr)
        out << "> " << member->getId() << "\n";
    else
        out << "> 로그아웃 실패 (로그인 안 됨)\n";
}
