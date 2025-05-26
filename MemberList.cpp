#include "MemberList.h"


/*
   �Լ� �̸� : MemberList::addMember()
   ���     : ȸ�� ����Ʈ�� ���ο� ȸ���� �߰��ϰ�, �ֱ� �α��� ȸ������ ������
   ���� ���� : member - �߰��� ȸ�� ��ü ������
   ��ȯ��    : ����
*/
void MemberList::addMember(Member* member) {
    members.push_back(member);
    newMember = member;
}


/*
   �Լ� �̸� : MemberList::getMemberList()
   ���     : ��ü ȸ�� ����Ʈ�� ��ȯ��
   ���� ���� : ����
   ��ȯ��    : vector<Member*> - ȸ�� ��ü ������ ����Ʈ
*/
vector<Member*> MemberList::getMemberList() {
    return members;
}


/*
   �Լ� �̸� : MemberList::setNewMember()
   ���     : �ֱ� �α����� ȸ���� ������
   ���� ���� : member - �α��ε� ȸ�� ��ü ������
   ��ȯ��    : ����
*/
void MemberList::setNewMember(Member* member) {
    newMember = member;
}


/*
   �Լ� �̸� : MemberList::getNewMember()
   ���     : �ֱ� �α����� ȸ���� ��ȯ��
   ���� ���� : ����
   ��ȯ��    : Member* - �α��ε� ȸ�� ��ü ������
*/
Member* MemberList::getNewMember() {
    return newMember;
}
