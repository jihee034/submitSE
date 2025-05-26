#ifndef BIKEREGISTER_H
#define BIKEREGISTER_H

#include "BicycleList.h"
#include <string>
using namespace std;

// Ŭ���� �̸� : BikeRegister
// ��� : ������ ������ BicycleList�� ����ϴ� ����� �����ϴ� Ŭ����
class BikeRegister {
private:
    BicycleList* bikeList;  // ������ ����Ʈ ��ü ������

public:
    BikeRegister(BicycleList* bikeList);                  // ������ ����Ʈ�� �ʱ�ȭ
    void addBike(string idBike, string nameBike);         // ������ ID�� �𵨸��� ������� �����Ÿ� ���
};

#endif
