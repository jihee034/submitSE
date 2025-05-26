#include "SignUpUI.h"


/*
   �Լ� �̸� : SignUpUI::SignUpUI()
   ���     : ȸ������ ����� ����ϴ� Control Ŭ���� �����͸� �ʱ�ȭ��
   ���� ���� : signUp - ȸ������ ���� Ŭ���� ������
   ��ȯ��    : ����
*/
SignUpUI::SignUpUI(SignUp* signUp) {
    this->signUp = signUp;
}


/*
   �Լ� �̸� : SignUpUI::startInterface()
   ���     : ����ڷκ��� ID, ��й�ȣ, ��ȭ��ȣ�� �Է¹޾� ȸ�������� �����ϰ� ����� �����
   ���� ���� : id - ȸ�� ID, pw - ��й�ȣ, phone - ��ȭ��ȣ, out - ��� ��Ʈ��
   ��ȯ��    : ����
*/
void SignUpUI::startInterface(string id, string pw, string phone, ofstream& out) {
    signUp->addMember(id, pw, phone);
    out << "1.1. ȸ������\n";
    out << "> " << id << " " << pw << " " << phone << "\n\n";
}
