#ifndef LOGIN_H
#define LOGIN_H

#include "MemberList.h"
#include <string>
using namespace std;

// 클래스 이름 : Login
// 기능 : 입력받은 ID와 비밀번호를 통해 로그인 처리 기능을 수행하는 클래스
class Login {
private:
    MemberList* memberList;  // 전체 회원 리스트 포인터

public:
    Login(MemberList* memberList);              // 회원 리스트를 초기화
    bool login(string id, string pw);           // ID와 비밀번호를 비교해 로그인 성공 여부 반환
};

#endif
