#ifndef MEMBERLIST_H
#define MEMBERLIST_H

#include "Member.h"
#include <vector>
using namespace std;

class MemberList {
private:
    vector<Member*> members;
    Member* newMember;

public:
    void addMember(Member* member);
    vector<Member*> getMemberList();
    void setNewMember(Member* member);
    Member* getNewMember();
};

#endif
