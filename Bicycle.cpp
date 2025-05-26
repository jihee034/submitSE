#include "Bicycle.h"


/*
   �Լ� �̸� : Bicycle::Bicycle()
   ���     : ������ ID, �𵨸��� �ʱ�ȭ�ϰ� �뿩 ���¸� "NO"�� ������
   ���� ���� : id - ������ ID, model - ������ �𵨸�
   ��ȯ��    : ����
*/
Bicycle::Bicycle(string id, string model)
    : idBike(id), modelName(model), isRentOrNot("NO") {}


/*
   �Լ� �̸� : Bicycle::getIdBike()
   ���     : ������ ID�� ��ȯ��
   ���� ���� : ����
   ��ȯ��    : string - ������ ID
*/
string Bicycle::getIdBike() {
    return idBike;
}


/*
   �Լ� �̸� : Bicycle::getModelName()
   ���     : ������ �𵨸��� ��ȯ��
   ���� ���� : ����
   ��ȯ��    : string - ������ �𵨸�
*/
string Bicycle::getModelName() {
    return modelName;
}


/*
   �Լ� �̸� : Bicycle::getIsRentOrNot()
   ���     : ������ �뿩 ���θ� ��ȯ��
   ���� ���� : ����
   ��ȯ��    : string - �뿩 ���� ("YES" �Ǵ� "NO")
*/
string Bicycle::getIsRentOrNot() {
    return isRentOrNot;
}


/*
   �Լ� �̸� : Bicycle::setIsRentOrNot()
   ���     : ������ �뿩 ���θ� ������
   ���� ���� : status - "YES" �Ǵ� "NO"
   ��ȯ��    : ����
*/
void Bicycle::setIsRentOrNot(string status) {
    isRentOrNot = status;
}
