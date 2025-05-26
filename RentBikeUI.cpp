#include "RentBikeUI.h"


/*
   �Լ� �̸� : RentBikeUI::RentBikeUI()
   ���     : ������ �뿩 ����� ����ϴ� Control Ŭ���� �����͸� �ʱ�ȭ��
   ���� ���� : rentBike - ������ �뿩 ���� Ŭ���� ������
   ��ȯ��    : ����
*/
RentBikeUI::RentBikeUI(RentBike* rentBike) {
    this->rentBike = rentBike;
}


/*
   �Լ� �̸� : RentBikeUI::rentBicycle()
   ���     : �Է¹��� ������ ID �� �𵨸��� ������� �뿩 ó���ϰ� ����� �����
   ���� ���� : idBike - ������ ID, nameBike - ������ �𵨸�, out - ��� ��Ʈ��
   ��ȯ��    : ����
*/
void RentBikeUI::rentBicycle(string idBike, string nameBike, ofstream& out) {
    rentBike->possBikeList(idBike, nameBike);

    out << "4.1. ������ �뿩\n";

    for (Bicycle* bike : rentBike->getBicycleList()->getPossBikeList()) {
        if (bike->getIdBike() == idBike) {
            out << "> " << bike->getIdBike() << " " << bike->getModelName() << "\n\n";
            return;
        }
    }

    // fallback
    out << "> " << idBike << "\n\n";
}
