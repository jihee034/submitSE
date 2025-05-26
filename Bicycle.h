#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>
using namespace std;

class Bicycle {
private:
    string idBike;        // 자전거 ID (예: b1, b2 등)
    string modelName;     // 자전거 모델명 (예: bikeMaker, bikeProducer 등)
    string isRentOrNot;   // 대여 여부 상태 ("YES" 또는 "NO")

public:
    Bicycle(string id, string model);       // 자전거 객체 생성자, ID와 모델명을 초기화함
    string getIdBike();                     // 자전거 ID를 반환
    string getModelName();                  // 자전거 모델명을 반환
    string getIsRentOrNot();                // 대여 여부("YES"/"NO")를 반환
    void setIsRentOrNot(string status);     // 대여 여부를 설정 ("YES" 또는 "NO")
};

#endif
