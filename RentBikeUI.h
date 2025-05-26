#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H

#include "RentBike.h"
#include <fstream>
using namespace std;

// Ŭ���� �̸� : RentBikeUI
// ��� : ����ڷκ��� �뿩�� ������ ������ �Է¹ް� �뿩 ����� ����ϴ� UI Ŭ����
class RentBikeUI {
private:
    RentBike* rentBike;   // ������ �뿩 ����� �����ϴ� ���� Ŭ���� ������

public:
    RentBikeUI(RentBike* rentBike);                                             // �뿩 ���� Ŭ���� �ʱ�ȭ
    void rentBicycle(string idBike, string nameBike, ofstream& out);           // ������ �뿩 ��û�� ó���ϰ� ��� ���
};

#endif
