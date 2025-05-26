#ifndef MEMBERLIST_H
#define MEMBERLIST_H

#include "Member.h"
#include <vector>
using namespace std;

// Ŭ���� �̸� : MemberList
// ��� : ��ü ȸ�� ������ �����ϰ�, ���� �α��ε� ȸ�� ������ �����ϴ� Ŭ����
class MemberList {
private:
    vector<Member*> members;    // ��ϵ� ��ü ȸ�� ����Ʈ
    Member* newMember;          // ���� �α����� ȸ��

public:
    void addMember(Member* member);                 // ���ο� ȸ���� ����Ʈ�� �߰��ϰ� �α��� ���·� ����
    vector<Member*> getMemberList();                // ��ü ȸ�� ����Ʈ ��ȯ
    void setNewMember(Member* member);              // ���� �α��ε� ȸ�� ����
    Member* getNewMember();                         // ���� �α��ε� ȸ�� ��ȯ
};

#endif
