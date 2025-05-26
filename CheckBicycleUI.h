#ifndef CHECKBICYCLEUI_H
#define CHECKBICYCLEUI_H

#include "CheckBicycle.h"
#include <fstream>
using namespace std;

// Ŭ���� �̸� : CheckBicycleUI
// ��� : �α��ε� ȸ���� �뿩 ������ ����� ��ȸ�ϰ� ����ϴ� UI Ŭ����
class CheckBicycleUI {
private:
    CheckBicycle* checkBicycle;  // ������ ��ȸ ����� �����ϴ� ���� Ŭ���� ������

public:
    CheckBicycleUI(CheckBicycle* checkBicycle);        // ���� Ŭ���� �ʱ�ȭ
    void checkBike(ofstream& out);                     // �뿩 ������ ����� ��� ��Ʈ���� ���
};

#endif
