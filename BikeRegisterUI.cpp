#include "BikeRegisterUI.h"


/*
   �Լ� �̸� : BikeRegisterUI::BikeRegisterUI()
   ���     : ������ ��� ����� ����ϴ� Control Ŭ���� �����͸� �ʱ�ȭ��
   ���� ���� : bikeRegister - ������ ��� ���� Ŭ���� ������
   ��ȯ��    : ����
*/
BikeRegisterUI::BikeRegisterUI(BikeRegister* bikeRegister) {
    this->bikeRegister = bikeRegister;
}


/*
   �Լ� �̸� : BikeRegisterUI::inputBikeInfo()
   ���     : ����ڷκ��� �Է¹��� ������ ������ ����ϰ� ����� �����
   ���� ���� : idBike - ������ ID, nameBike - ������ �𵨸�, out - ��� ��Ʈ��
   ��ȯ��    : ����
*/
void BikeRegisterUI::inputBikeInfo(string idBike, string nameBike, ofstream& out) {
    bikeRegister->addBike(idBike, nameBike);
    out << "3.1. ������ ���\n";
    out << "> " << idBike << " " << nameBike << "\n\n";
}
