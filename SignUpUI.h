#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include "SignUp.h"
#include <fstream>
using namespace std;

class SignUpUI {
private:
    SignUp* signUp;

public:
    SignUpUI(SignUp* signUp);
    void startInterface(string id, string pw, string phone, ofstream& out);
};

#endif
