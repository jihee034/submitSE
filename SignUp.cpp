#include "SignUp.h"
#include "Member.h"


/*
   �Լ� �̸� : SignUp::SignUp()
   ���     : ȸ�� ����Ʈ �����͸� �ʱ�ȭ��
   ���� ���� : memberList - ȸ�� ����Ʈ ������
   ��ȯ��    : ����
*/
SignUp::SignUp(MemberList* memberList) {
    this->memberList = memberList;
}


/*
   �Լ� �̸� : SignUp::addMember()
   ���     : ���ο� ȸ�� ��ü�� �����ϰ� ȸ�� ����Ʈ�� �߰���
   ���� ���� : id - ȸ�� ID, pw - ��й�ȣ, phone - ��ȭ��ȣ
   ��ȯ��    : ����
*/
void SignUp::addMember(string id, string pw, string phone) {
    Member* member = new Member(id, pw, phone);
    memberList->addMember(member);
}
