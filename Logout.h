#ifndef LOGOUT_H
#define LOGOUT_H

#include "MemberList.h"

class Logout {
private:
    MemberList* memberList;

public:
    Logout(MemberList* memberList);
    Member* systemEnd();
};

#endif
