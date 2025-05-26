#ifndef RENTBIKE_H
#define RENTBIKE_H

#include "MemberList.h"
#include "BicycleList.h"
#include <string>
using namespace std;

// Ŭ���� �̸� : RentBike
// ��� : �α����� ȸ���� �����Ÿ� �뿩�� �� �ֵ��� ó���ϴ� ����� �����ϴ� Ŭ����
class RentBike {
private:
    MemberList* memberList;     // ��ü ȸ�� ����Ʈ
    BicycleList* bicycleList;   // ��ü ������ ����Ʈ

public:
    RentBike(MemberList* memberList, BicycleList* bicycleList);   // ȸ�� �� ������ ����Ʈ �ʱ�ȭ
    void possBikeList(string idBike, string nameBike);            // ������ ID�� �𵨸��� ������� �뿩 ó��
    BicycleList* getBicycleList();                                // ������ ����Ʈ ������ ��ȯ
};

#endif
