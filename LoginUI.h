#ifndef LOGINUI_H
#define LOGINUI_H

#include "Login.h"
#include <fstream>
using namespace std;

// Ŭ���� �̸� : LoginUI
// ��� : ����ڷκ��� ID�� ��й�ȣ�� �Է¹޾� �α��� ����� ����ϴ� UI Ŭ����
class LoginUI {
private:
    Login* loginControl;  // �α��� ����� �����ϴ� ���� Ŭ���� ������

public:
    LoginUI(Login* loginControl);                             // ���� Ŭ���� �ʱ�ȭ
    void login(string id, string pw, ofstream& out);          // ID/PW�� �Է¹޾� �α��� ��� ���
};

#endif
