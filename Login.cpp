#include "Login.h"


/*
   함수 이름 : Login::Login()
   기능     : 회원 리스트 포인터를 초기화함
   전달 인자 : memberList - 회원 리스트 포인터
   반환값    : 없음
*/
Login::Login(MemberList* memberList) {
    this->memberList = memberList;
}


/*
   함수 이름 : Login::login()
   기능     : 입력된 ID와 비밀번호가 일치하는 회원을 찾아 로그인 처리함
   전달 인자 : id - 사용자 ID, pw - 비밀번호
   반환값    : bool - 로그인 성공 여부 (true: 성공, false: 실패)
*/
bool Login::login(string id, string pw) {
    for (Member* member : memberList->getMemberList()) {
        if (member->getId() == id && member->getPw() == pw) {
            memberList->setNewMember(member);
            return true;
        }
    }
    return false;
}
