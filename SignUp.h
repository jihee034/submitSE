#ifndef SIGNUP_H
#define SIGNUP_H

#include "MemberList.h"
#include <string>
using namespace std;

// Ŭ���� �̸� : SignUp
// ��� : ����ڷκ��� ȸ�� ������ �Է¹޾� ȸ�� ����Ʈ�� �߰��ϴ� ����� �����ϴ� Ŭ����
class SignUp {
private:
    MemberList* memberList;  // ��ü ȸ�� ����Ʈ ������

public:
    SignUp(MemberList* memberList);                                 // ȸ�� ����Ʈ �ʱ�ȭ
    void addMember(string id, string pw, string phone);             // �Էµ� ������ ���� ȸ���� ���
};

#endif
