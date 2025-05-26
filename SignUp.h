#ifndef SIGNUP_H
#define SIGNUP_H

#include "MemberList.h"
#include <string>
using namespace std;

// 클래스 이름 : SignUp
// 기능 : 사용자로부터 회원 정보를 입력받아 회원 리스트에 추가하는 기능을 수행하는 클래스
class SignUp {
private:
    MemberList* memberList;  // 전체 회원 리스트 포인터

public:
    SignUp(MemberList* memberList);                                 // 회원 리스트 초기화
    void addMember(string id, string pw, string phone);             // 입력된 정보를 통해 회원을 등록
};

#endif
