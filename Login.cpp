#include "Login.h"

Login::Login(MemberList* memberList) {
    this->memberList = memberList;
}

bool Login::login(string id, string pw) {
    for (Member* member : memberList->getMemberList()) {
        if (member->getId() == id && member->getPw() == pw) {
            memberList->setNewMember(member);
            return true;
        }
    }
    return false;
}
