#ifndef BICYCLELIST_H
#define BICYCLELIST_H

#include "Bicycle.h"
#include <vector>
using namespace std;

// Ŭ���� �̸� : BicycleList
// ��� : ������ ��ü���� �����ϰ� �����ϴ� ����Ʈ Ŭ����
class BicycleList {
private:
    vector<Bicycle*> possBikeList;  // ��ϵ� ������ ����Ʈ

public:
    void addBike(Bicycle* bike);                      // �����Ÿ� ����Ʈ�� �߰�
    vector<Bicycle*> getPossBikeList();               // ��ϵ� ������ ����Ʈ ��ȯ
};

#endif
