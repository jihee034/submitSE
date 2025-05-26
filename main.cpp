#include <iostream>
#include <fstream>
#include <string>
#include "MemberList.h"
#include "BicycleList.h"
#include "SignUpUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "BikeRegisterUI.h"
#include "RentBikeUI.h"
#include "CheckBicycleUI.h"

using namespace std;

int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    MemberList* memberList = new MemberList();
    BicycleList* bicycleList = new BicycleList();

    while (!inFile.eof()) {
        int menuLevel1, menuLevel2;
        inFile >> menuLevel1 >> menuLevel2;

        if (menuLevel1 == 1 && menuLevel2 == 1) {
            // 회원가입
            string id, pw, phone;
            inFile >> id >> pw >> phone;

            SignUp* signUp = new SignUp(memberList);
            SignUpUI* signUpUI = new SignUpUI(signUp);
            signUpUI->startInterface(id, pw, phone, outFile);
        }
        else if (menuLevel1 == 2 && menuLevel2 == 1) {
            // 로그인
            string id, pw;
            inFile >> id >> pw;

            Login* login = new Login(memberList);
            LoginUI* loginUI = new LoginUI(login);
            loginUI->login(id, pw, outFile);
        }
        else if (menuLevel1 == 3 && menuLevel2 == 1) {
            // 자전거 등록
            string idBike, nameBike;
            inFile >> idBike >> nameBike;

            BikeRegister* bikeRegister = new BikeRegister(bicycleList);
            BikeRegisterUI* bikeRegisterUI = new BikeRegisterUI(bikeRegister);
            bikeRegisterUI->inputBikeInfo(idBike, nameBike, outFile);
        }
        else if (menuLevel1 == 4 && menuLevel2 == 1) {
            // 자전거 대여
            string idBike, nameBike;
            inFile >> idBike >> nameBike;

            RentBike* rentBike = new RentBike(memberList, bicycleList);
            RentBikeUI* rentBikeUI = new RentBikeUI(rentBike);
            rentBikeUI->rentBicycle(idBike, nameBike, outFile);
        }
        else if (menuLevel1 == 5 && menuLevel2 == 1) {
            // 대여 자전거 조회
            CheckBicycle* checkBicycle = new CheckBicycle(memberList, bicycleList);
            CheckBicycleUI* checkBicycleUI = new CheckBicycleUI(checkBicycle);
            checkBicycleUI->checkBike(outFile);
        }
        else if (menuLevel1 == 2 && menuLevel2 == 2) {
            // 로그아웃
            Logout* logout = new Logout(memberList);
            LogoutUI* logoutUI = new LogoutUI(logout);
            logoutUI->logoutService(outFile);
        }
        else if (menuLevel1 == 6 && menuLevel2 == 1) {
            // 종료
            outFile << "6.1. 종료\n";
            break;
        }
    }

    inFile.close();
    outFile.close();

    return 0;
}
