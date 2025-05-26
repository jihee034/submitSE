#ifndef BIKEREGISTERUI_H
#define BIKEREGISTERUI_H

#include "BikeRegister.h"
#include <fstream>
using namespace std;

// Ŭ���� �̸� : BikeRegisterUI
// ��� : ����ڷκ��� ������ ������ �Է¹ް� ������ ��� ����� ����ϴ� UI Ŭ����
class BikeRegisterUI {
private:
    BikeRegister* bikeRegister;  // ������ ��� ����� �����ϴ� ���� Ŭ���� ������

public:
    BikeRegisterUI(BikeRegister* bikeRegister);                               // ������ ��� ���� Ŭ���� �ʱ�ȭ
    void inputBikeInfo(string idBike, string nameBike, ofstream& out);        // ������ ������ �Է¹޾� ��� ó�� �� ���
};

#endif
