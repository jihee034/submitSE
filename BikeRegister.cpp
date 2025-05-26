#include "BikeRegister.h"
#include "Bicycle.h"


/*
   �Լ� �̸� : BikeRegister::BikeRegister()
   ���     : ������ ����Ʈ �����͸� �ʱ�ȭ��
   ���� ���� : bikeList - ������ ����Ʈ ������
   ��ȯ��    : ����
*/
BikeRegister::BikeRegister(BicycleList* bikeList) {
    this->bikeList = bikeList;
}


/*
   �Լ� �̸� : BikeRegister::addBike()
   ���     : ���޹��� ������ ������ ������� Bicycle ��ü�� �����ϰ� ����Ʈ�� �߰���
   ���� ���� : idBike - ������ ID, nameBike - ������ �𵨸�
   ��ȯ��    : ����
*/
void BikeRegister::addBike(string idBike, string nameBike) {
    Bicycle* bike = new Bicycle(idBike, nameBike);
    bikeList->addBike(bike);
}
