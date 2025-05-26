#include "Member.h"


/*
   함수 이름 : Member::Member()
   기능     : 회원 ID, 비밀번호, 전화번호를 초기화함
   전달 인자 : id - 회원 ID, pw - 비밀번호, phone - 전화번호
   반환값    : 없음
*/
Member::Member(string id, string pw, string phone)
    : idMember(id), pwMember(pw), phoneNumber(phone) {}


/*
   함수 이름 : Member::getId()
   기능     : 회원 ID를 반환함
   전달 인자 : 없음
   반환값    : string - 회원 ID
*/
string Member::getId() { return idMember; }


/*
   함수 이름 : Member::getPw()
   기능     : 회원 비밀번호를 반환함
   전달 인자 : 없음
   반환값    : string - 비밀번호
*/
string Member::getPw() { return pwMember; }


/*
   함수 이름 : Member::getPhoneNumber()
   기능     : 회원 전화번호를 반환함
   전달 인자 : 없음
   반환값    : string - 전화번호
*/
string Member::getPhoneNumber() { return phoneNumber; }
