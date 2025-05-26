#include "Member.h"

Member::Member(string id, string pw, string phone)
    : idMember(id), pwMember(pw), phoneNumber(phone) {}

string Member::getId() { return idMember; }
string Member::getPw() { return pwMember; }
string Member::getPhoneNumber() { return phoneNumber; }
