#include "LogoutUI.h"


/*
   �Լ� �̸� : LogoutUI::LogoutUI()
   ���     : �α׾ƿ� ����� ����ϴ� Control Ŭ���� �����͸� �ʱ�ȭ��
   ���� ���� : logout - �α׾ƿ� ���� Ŭ���� ������
   ��ȯ��    : ����
*/
LogoutUI::LogoutUI(Logout* logout) {
    this->logout = logout;
}


/*
   �Լ� �̸� : LogoutUI::logoutService()
   ���     : ���� �α��ε� ȸ���� �α׾ƿ��ϰ� ����� �����
   ���� ���� : out - ��� ��Ʈ��
   ��ȯ��    : ����
*/
void LogoutUI::logoutService(ofstream& out) {
    Member* member = logout->systemEnd();
    out << "2.2. �α׾ƿ�\n";
    if (member != nullptr)
        out << "> " << member->getId() << "\n";
    else
        out << "> �α׾ƿ� ���� (�α��� �� ��)\n";
    out << "\n";
}
