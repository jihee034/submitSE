#include "CheckBicycleUI.h"


/*
   �Լ� �̸� : CheckBicycleUI::CheckBicycleUI()
   ���     : ������ ��ȸ ����� ����ϴ� Control Ŭ���� �����͸� �ʱ�ȭ��
   ���� ���� : checkBicycle - ������ ��ȸ ���� Ŭ���� ������
   ��ȯ��    : ����
*/
CheckBicycleUI::CheckBicycleUI(CheckBicycle* checkBicycle) {
    this->checkBicycle = checkBicycle;
}


/*
   �Լ� �̸� : CheckBicycleUI::checkBike()
   ���     : ���� �α����� ����ڰ� �뿩�� ������ ����Ʈ�� �����
   ���� ���� : out - ��� ��Ʈ��
   ��ȯ��    : ����
*/
void CheckBicycleUI::checkBike(ofstream& out) {
    out << "5.1. ������ �뿩 ����Ʈ\n";
    Member* member = checkBicycle->getMemberList()->getNewMember();
    if (member != nullptr) {
        checkBicycle->BikeList(member->getId(), out);
    }
    else {
        out << "> ��ȸ ����: �α��� �ʿ�\n";
    }
    out << "\n";
}
