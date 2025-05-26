#include "MemberList.h"


/*
   함수 이름 : MemberList::addMember()
   기능     : 회원 리스트에 새로운 회원을 추가하고, 최근 로그인 회원으로 설정함
   전달 인자 : member - 추가할 회원 객체 포인터
   반환값    : 없음
*/
void MemberList::addMember(Member* member) {
    members.push_back(member);
    newMember = member;
}


/*
   함수 이름 : MemberList::getMemberList()
   기능     : 전체 회원 리스트를 반환함
   전달 인자 : 없음
   반환값    : vector<Member*> - 회원 객체 포인터 리스트
*/
vector<Member*> MemberList::getMemberList() {
    return members;
}


/*
   함수 이름 : MemberList::setNewMember()
   기능     : 최근 로그인한 회원을 설정함
   전달 인자 : member - 로그인된 회원 객체 포인터
   반환값    : 없음
*/
void MemberList::setNewMember(Member* member) {
    newMember = member;
}


/*
   함수 이름 : MemberList::getNewMember()
   기능     : 최근 로그인한 회원을 반환함
   전달 인자 : 없음
   반환값    : Member* - 로그인된 회원 객체 포인터
*/
Member* MemberList::getNewMember() {
    return newMember;
}
