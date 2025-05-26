#ifndef CHECKBICYCLE_H
#define CHECKBICYCLE_H

#include "MemberList.h"
#include "BicycleList.h"
#include <string>
#include <fstream>
using namespace std;

// Ŭ���� �̸� : CheckBicycle
// ��� : ���� �α����� ȸ���� �뿩�� ������ ����Ʈ�� ��ȸ�ϴ� ����� �����ϴ� Ŭ����
class CheckBicycle {
private:
    MemberList* memberList;      // ��ü ȸ�� ����Ʈ
    BicycleList* bicycleList;    // ��ü ������ ����Ʈ

public:
    CheckBicycle(MemberList* memberList, BicycleList* bicycleList);         // ȸ�� �� ������ ����Ʈ �ʱ�ȭ
    void BikeList(string idMember, ofstream& out);                          // ȸ�� ID�� �������� �뿩�� ������ ����Ʈ ���
    MemberList* getMemberList();                                            // ��ü ȸ�� ����Ʈ ������ ��ȯ
};

#endif
