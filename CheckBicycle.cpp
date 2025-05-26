#include "CheckBicycle.h"


/*
   �Լ� �̸� : CheckBicycle::CheckBicycle()
   ���     : ȸ�� ����Ʈ�� ������ ����Ʈ �����͸� �ʱ�ȭ��
   ���� ���� : memberList - ȸ�� ����Ʈ ������, bicycleList - ������ ����Ʈ ������
   ��ȯ��    : ����
*/
CheckBicycle::CheckBicycle(MemberList* memberList, BicycleList* bicycleList) {
    this->memberList = memberList;
    this->bicycleList = bicycleList;
}


/*
   �Լ� �̸� : CheckBicycle::BikeList()
   ���     : �뿩 ���°� "YES"�� �����ŵ��� ������ �����
   ���� ���� : idMember - ���� �α����� ȸ�� ID, out - ��� ��Ʈ��
   ��ȯ��    : ����
*/
void CheckBicycle::BikeList(string idMember, ofstream& out) {
    for (Bicycle* bike : bicycleList->getPossBikeList()) {
        if (bike->getIsRentOrNot() == "YES") {
            out << "> " << bike->getIdBike() << " " << bike->getModelName() << "\n";
        }
    }
}


/*
   �Լ� �̸� : CheckBicycle::getMemberList()
   ���     : ��� ����Ʈ �����͸� ��ȯ��
   ���� ���� : ����
   ��ȯ��    : MemberList* - ��� ����Ʈ ������
*/
MemberList* CheckBicycle::getMemberList() {
    return memberList;
}
