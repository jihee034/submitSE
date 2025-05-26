#include "SignUp.h"
#include "Member.h"


/*
   함수 이름 : SignUp::SignUp()
   기능     : 회원 리스트 포인터를 초기화함
   전달 인자 : memberList - 회원 리스트 포인터
   반환값    : 없음
*/
SignUp::SignUp(MemberList* memberList) {
    this->memberList = memberList;
}


/*
   함수 이름 : SignUp::addMember()
   기능     : 새로운 회원 객체를 생성하고 회원 리스트에 추가함
   전달 인자 : id - 회원 ID, pw - 비밀번호, phone - 전화번호
   반환값    : 없음
*/
void SignUp::addMember(string id, string pw, string phone) {
    Member* member = new Member(id, pw, phone);
    memberList->addMember(member);
}
