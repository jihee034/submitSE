#include "Logout.h"

Logout::Logout(MemberList* memberList) {
    this->memberList = memberList;
}

Member* Logout::systemEnd() {
    return memberList->getNewMember();
}
