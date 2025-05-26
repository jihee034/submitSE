#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>
using namespace std;

class Bicycle {
private:
    string idBike;        // ������ ID (��: b1, b2 ��)
    string modelName;     // ������ �𵨸� (��: bikeMaker, bikeProducer ��)
    string isRentOrNot;   // �뿩 ���� ���� ("YES" �Ǵ� "NO")

public:
    Bicycle(string id, string model);       // ������ ��ü ������, ID�� �𵨸��� �ʱ�ȭ��
    string getIdBike();                     // ������ ID�� ��ȯ
    string getModelName();                  // ������ �𵨸��� ��ȯ
    string getIsRentOrNot();                // �뿩 ����("YES"/"NO")�� ��ȯ
    void setIsRentOrNot(string status);     // �뿩 ���θ� ���� ("YES" �Ǵ� "NO")
};

#endif
