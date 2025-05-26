#ifndef LOGOUT_H
#define LOGOUT_H

#include "MemberList.h"

// 클래스 이름 : Logout
// 기능 : 현재 로그인된 회원을 로그아웃 처리하는 기능을 제공하는 클래스
class Logout {
private:
    MemberList* memberList;  // 전체 회원 리스트 포인터

public:
    Logout(MemberList* memberList);        // 회원 리스트 초기화
    Member* systemEnd();                   // 현재 로그인된 회원 반환
};

#endif
