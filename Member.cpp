#include "Member.h"


/*
   �Լ� �̸� : Member::Member()
   ���     : ȸ�� ID, ��й�ȣ, ��ȭ��ȣ�� �ʱ�ȭ��
   ���� ���� : id - ȸ�� ID, pw - ��й�ȣ, phone - ��ȭ��ȣ
   ��ȯ��    : ����
*/
Member::Member(string id, string pw, string phone)
    : idMember(id), pwMember(pw), phoneNumber(phone) {}


/*
   �Լ� �̸� : Member::getId()
   ���     : ȸ�� ID�� ��ȯ��
   ���� ���� : ����
   ��ȯ��    : string - ȸ�� ID
*/
string Member::getId() { return idMember; }


/*
   �Լ� �̸� : Member::getPw()
   ���     : ȸ�� ��й�ȣ�� ��ȯ��
   ���� ���� : ����
   ��ȯ��    : string - ��й�ȣ
*/
string Member::getPw() { return pwMember; }


/*
   �Լ� �̸� : Member::getPhoneNumber()
   ���     : ȸ�� ��ȭ��ȣ�� ��ȯ��
   ���� ���� : ����
   ��ȯ��    : string - ��ȭ��ȣ
*/
string Member::getPhoneNumber() { return phoneNumber; }
