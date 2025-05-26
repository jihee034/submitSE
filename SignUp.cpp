#include "SignUp.h"
#include "Member.h"

SignUp::SignUp(MemberList* memberList) {
    this->memberList = memberList;
}

void SignUp::addMember(string id, string pw, string phone) {
    Member* member = new Member(id, pw, phone);
    memberList->addMember(member);
}
