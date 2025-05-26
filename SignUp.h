#ifndef SIGNUP_H
#define SIGNUP_H

#include "MemberList.h"
#include <string>
using namespace std;

class SignUp {
private:
    MemberList* memberList;

public:
    SignUp(MemberList* memberList);
    void addMember(string id, string pw, string phone);
};

#endif
