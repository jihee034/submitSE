#ifndef LOGIN_H
#define LOGIN_H

#include "MemberList.h"
#include <string>
using namespace std;

class Login {
private:
    MemberList* memberList;

public:
    Login(MemberList* memberList);
    bool login(string id, string pw);
};

#endif
