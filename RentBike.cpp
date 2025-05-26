#include "RentBike.h"
#include "Bicycle.h"


/*
   �Լ� �̸� : RentBike::RentBike()
   ���     : ȸ�� ����Ʈ�� ������ ����Ʈ �����͸� �ʱ�ȭ��
   ���� ���� : memberList - ȸ�� ����Ʈ ������, bicycleList - ������ ����Ʈ ������
   ��ȯ��    : ����
*/
RentBike::RentBike(MemberList* memberList, BicycleList* bicycleList) {
    this->memberList = memberList;
    this->bicycleList = bicycleList;
}


/*
   �Լ� �̸� : RentBike::possBikeList()
   ���     : ������ ID�� �𵨸��� ������� �ش� �����Ÿ� �뿩 ó����
   ���� ���� : idBike - ������ ID, nameBike - ������ �𵨸� (�Ǵ� ���� ����)
   ��ȯ��    : ����
*/
void RentBike::possBikeList(string idBike, string nameBike) {
    for (Bicycle* bike : bicycleList->getPossBikeList()) {
        if (bike->getIdBike() == idBike &&
            (nameBike.empty() || bike->getModelName() == nameBike)) {
            bike->setIsRentOrNot("YES");
            return;
        }
    }
}


/*
   �Լ� �̸� : RentBike::getBicycleList()
   ���     : ������ ����Ʈ �����͸� ��ȯ��
   ���� ���� : ����
   ��ȯ��    : BicycleList* - ������ ����Ʈ ������
*/
BicycleList* RentBike::getBicycleList() {
    return bicycleList;
}
