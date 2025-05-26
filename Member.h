#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;

// 클래스 이름 : Member
// 기능 : 회원의 ID, 비밀번호, 전화번호 정보를 저장하고 관리하는 클래스
class Member {
private:
    string idMember;       // 회원 ID
    string pwMember;       // 회원 비밀번호
    string phoneNumber;    // 회원 전화번호

public:
    Member(string id, string pw, string phone);     // 회원 객체 생성자
    string getId();                                 // 회원 ID 반환
    string getPw();                                 // 회원 비밀번호 반환
    string getPhoneNumber();                        // 회원 전화번호 반환
};

#endif
