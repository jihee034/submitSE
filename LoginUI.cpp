#include "LoginUI.h"


/*
   �Լ� �̸� : LoginUI::LoginUI()
   ���     : �α��� ����� ����ϴ� Control Ŭ���� �����͸� �ʱ�ȭ��
   ���� ���� : loginControl - �α��� ���� Ŭ���� ������
   ��ȯ��    : ����
*/
LoginUI::LoginUI(Login* loginControl) {
    this->loginControl = loginControl;
}


/*
   �Լ� �̸� : LoginUI::login()
   ���     : ����� ID, ��й�ȣ�� �Է¹޾� �α��� ó�� ����� �����
   ���� ���� : id - ����� ID, pw - ��й�ȣ, out - ��� ��Ʈ��
   ��ȯ��    : ����
*/
void LoginUI::login(string id, string pw, ofstream& out) {
    bool success = loginControl->login(id, pw);
    out << "2.1. �α���\n";
    if (success)
        out << "> " << id << " " << pw << "\n";
    else
        out << "> �α��� ����\n";
    out << "\n";
}
