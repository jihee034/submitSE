#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include "Logout.h"
#include <fstream>
using namespace std;

// Ŭ���� �̸� : LogoutUI
// ��� : �α׾ƿ� ����� �����ϰ� ����� ����ϴ� UI Ŭ����
class LogoutUI {
private:
    Logout* logout;  // �α׾ƿ� ���� Ŭ���� ������

public:
    LogoutUI(Logout* logout);                      // �α׾ƿ� ���� Ŭ���� �ʱ�ȭ
    void logoutService(ofstream& out);             // �α׾ƿ� ó�� �� ��� ���
};

#endif
