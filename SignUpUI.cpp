#include "SignUpUI.h"

SignUpUI::SignUpUI(SignUp* signUp) {
    this->signUp = signUp;
}

void SignUpUI::startInterface(string id, string pw, string phone, ofstream& out) {
    signUp->addMember(id, pw, phone);
    out << "1.1. 회원가입\n";
    out << "> " << id << " " << pw << " " << phone << "\n";
}
