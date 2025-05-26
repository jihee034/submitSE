#ifndef LOGINUI_H
#define LOGINUI_H

#include "Login.h"
#include <fstream>
using namespace std;

class LoginUI {
private:
    Login* loginControl;

public:
    LoginUI(Login* loginControl);
    void login(string id, string pw, ofstream& out);
};

#endif
