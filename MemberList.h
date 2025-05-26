#ifndef MEMBERLIST_H
#define MEMBERLIST_H

#include "Member.h"
#include <vector>
using namespace std;

// 클래스 이름 : MemberList
// 기능 : 전체 회원 정보를 저장하고, 현재 로그인된 회원 정보를 관리하는 클래스
class MemberList {
private:
    vector<Member*> members;    // 등록된 전체 회원 리스트
    Member* newMember;          // 현재 로그인한 회원

public:
    void addMember(Member* member);                 // 새로운 회원을 리스트에 추가하고 로그인 상태로 설정
    vector<Member*> getMemberList();                // 전체 회원 리스트 반환
    void setNewMember(Member* member);              // 현재 로그인된 회원 설정
    Member* getNewMember();                         // 현재 로그인된 회원 반환
};

#endif
