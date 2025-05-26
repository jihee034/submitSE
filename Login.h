#ifndef LOGIN_H
#define LOGIN_H

#include "MemberList.h"
#include <string>
using namespace std;

// Ŭ���� �̸� : Login
// ��� : �Է¹��� ID�� ��й�ȣ�� ���� �α��� ó�� ����� �����ϴ� Ŭ����
class Login {
private:
    MemberList* memberList;  // ��ü ȸ�� ����Ʈ ������

public:
    Login(MemberList* memberList);              // ȸ�� ����Ʈ�� �ʱ�ȭ
    bool login(string id, string pw);           // ID�� ��й�ȣ�� ���� �α��� ���� ���� ��ȯ
};

#endif
