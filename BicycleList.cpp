#include "BicycleList.h"


/*
   �Լ� �̸� : BicycleList::addBike()
   ���     : ������ ����Ʈ�� ������ ��ü�� �߰���
   ���� ���� : bike - �߰��� ������ ��ü ������
   ��ȯ��    : ����
*/
void BicycleList::addBike(Bicycle* bike) {
    possBikeList.push_back(bike);
}


/*
   �Լ� �̸� : BicycleList::getPossBikeList()
   ���     : ��ϵ� ������ ����Ʈ�� ��ȯ��
   ���� ���� : ����
   ��ȯ��    : vector<Bicycle*> - ������ ������ ����Ʈ
*/
vector<Bicycle*> BicycleList::getPossBikeList() {
    return possBikeList;
}
