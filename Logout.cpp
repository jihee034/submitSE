#include "Logout.h"


/*
   함수 이름 : Logout::Logout()
   기능     : 회원 리스트 포인터를 초기화함
   전달 인자 : memberList - 회원 리스트 포인터
   반환값    : 없음
*/
Logout::Logout(MemberList* memberList) {
    this->memberList = memberList;
}


/*
   함수 이름 : Logout::systemEnd()
   기능     : 현재 로그인한 회원 객체를 반환함
   전달 인자 : 없음
   반환값    : Member* - 현재 로그인된 회원 객체 포인터
*/
Member* Logout::systemEnd() {
    return memberList->getNewMember();
}
