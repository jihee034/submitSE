#ifndef LOGOUT_H
#define LOGOUT_H

#include "MemberList.h"

// Ŭ���� �̸� : Logout
// ��� : ���� �α��ε� ȸ���� �α׾ƿ� ó���ϴ� ����� �����ϴ� Ŭ����
class Logout {
private:
    MemberList* memberList;  // ��ü ȸ�� ����Ʈ ������

public:
    Logout(MemberList* memberList);        // ȸ�� ����Ʈ �ʱ�ȭ
    Member* systemEnd();                   // ���� �α��ε� ȸ�� ��ȯ
};

#endif
