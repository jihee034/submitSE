#include "LoginUI.h"

LoginUI::LoginUI(Login* loginControl) {
    this->loginControl = loginControl;
}

void LoginUI::login(string id, string pw, ofstream& out) {
    bool success = loginControl->login(id, pw);
    out << "2.1. 로그인\n";
    if (success)
        out << "> " << id << " " << pw << "\n";
    else
        out << "> 로그인 실패\n";
}
