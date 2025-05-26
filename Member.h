#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;

// Ŭ���� �̸� : Member
// ��� : ȸ���� ID, ��й�ȣ, ��ȭ��ȣ ������ �����ϰ� �����ϴ� Ŭ����
class Member {
private:
    string idMember;       // ȸ�� ID
    string pwMember;       // ȸ�� ��й�ȣ
    string phoneNumber;    // ȸ�� ��ȭ��ȣ

public:
    Member(string id, string pw, string phone);     // ȸ�� ��ü ������
    string getId();                                 // ȸ�� ID ��ȯ
    string getPw();                                 // ȸ�� ��й�ȣ ��ȯ
    string getPhoneNumber();                        // ȸ�� ��ȭ��ȣ ��ȯ
};

#endif
