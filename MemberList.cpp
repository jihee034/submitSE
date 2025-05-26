#include "MemberList.h"

void MemberList::addMember(Member* member) {
    members.push_back(member);
    newMember = member;
}

vector<Member*> MemberList::getMemberList() {
    return members;
}

void MemberList::setNewMember(Member* member) {
    newMember = member;
}

Member* MemberList::getNewMember() {
    return newMember;
}
