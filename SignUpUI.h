#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include "SignUp.h"
#include <fstream>
using namespace std;

// Ŭ���� �̸� : SignUpUI
// ��� : ����ڷκ��� ȸ������ ������ �Է¹ް� ����� ����ϴ� UI Ŭ����
class SignUpUI {
private:
    SignUp* signUp;   // ȸ������ ����� �����ϴ� ���� Ŭ���� ������

public:
    SignUpUI(SignUp* signUp);                                                             // ȸ������ ���� Ŭ���� �ʱ�ȭ
    void startInterface(string id, string pw, string phone, ofstream& out);              // ����� �Է��� �޾� ȸ������ ó�� �� ���
};

#endif
