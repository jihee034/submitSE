#include "Logout.h"


/*
   �Լ� �̸� : Logout::Logout()
   ���     : ȸ�� ����Ʈ �����͸� �ʱ�ȭ��
   ���� ���� : memberList - ȸ�� ����Ʈ ������
   ��ȯ��    : ����
*/
Logout::Logout(MemberList* memberList) {
    this->memberList = memberList;
}


/*
   �Լ� �̸� : Logout::systemEnd()
   ���     : ���� �α����� ȸ�� ��ü�� ��ȯ��
   ���� ���� : ����
   ��ȯ��    : Member* - ���� �α��ε� ȸ�� ��ü ������
*/
Member* Logout::systemEnd() {
    return memberList->getNewMember();
}
