#include "Login.h"


/*
   �Լ� �̸� : Login::Login()
   ���     : ȸ�� ����Ʈ �����͸� �ʱ�ȭ��
   ���� ���� : memberList - ȸ�� ����Ʈ ������
   ��ȯ��    : ����
*/
Login::Login(MemberList* memberList) {
    this->memberList = memberList;
}


/*
   �Լ� �̸� : Login::login()
   ���     : �Էµ� ID�� ��й�ȣ�� ��ġ�ϴ� ȸ���� ã�� �α��� ó����
   ���� ���� : id - ����� ID, pw - ��й�ȣ
   ��ȯ��    : bool - �α��� ���� ���� (true: ����, false: ����)
*/
bool Login::login(string id, string pw) {
    for (Member* member : memberList->getMemberList()) {
        if (member->getId() == id && member->getPw() == pw) {
            memberList->setNewMember(member);
            return true;
        }
    }
    return false;
}
