#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;

class Member {
private:
    string idMember;
    string pwMember;
    string phoneNumber;

public:
    Member(string id, string pw, string phone);
    string getId();
    string getPw();
    string getPhoneNumber();
};

#endif
