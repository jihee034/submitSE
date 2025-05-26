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
#include "SignUp.h"
#include "Login.h"
#include "Logout.h"
#include "BikeRegister.h"
#include "RentBike.h"
#include "CheckBicycle.h"

using namespace std;


int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    MemberList* memberList = new MemberList();
    BicycleList* bicycleList = new BicycleList();

    // admin ���� ���� ���
    memberList->addMember(new Member("admin", "admin", "01000000000"));

    int menu1, menu2;

    while (inFile >> menu1 >> menu2) {
        switch (menu1) {
        case 1: // ȸ������
            if (menu2 == 1) {
                string id, pw, phone;
                inFile >> id >> pw >> phone;
                SignUp* signUp = new SignUp(memberList);
                SignUpUI* signUpUI = new SignUpUI(signUp);
                signUpUI->startInterface(id, pw, phone, outFile);
            }
            break;

        case 2: // �α��� / �α׾ƿ�
            if (menu2 == 1) {
                string id, pw;
                inFile >> id >> pw;
                Login* login = new Login(memberList);
                LoginUI* loginUI = new LoginUI(login);
                loginUI->login(id, pw, outFile);
            }
            else if (menu2 == 2) {
                Logout* logout = new Logout(memberList);
                LogoutUI* logoutUI = new LogoutUI(logout);
                logoutUI->logoutService(outFile);
            }
            break;

        case 3: // ������ ���
            if (menu2 == 1) {
                string idBike, model;
                inFile >> idBike >> model;
                BikeRegister* bikeRegister = new BikeRegister(bicycleList);
                BikeRegisterUI* bikeRegisterUI = new BikeRegisterUI(bikeRegister);
                bikeRegisterUI->inputBikeInfo(idBike, model, outFile);
            }
            break;

        case 4: // ������ �뿩
            if (menu2 == 1) {
                string idBike, model;
                inFile >> idBike;

                if (inFile.peek() == '\n' || inFile.eof()) model = "";
                else inFile >> model;

                RentBike* rentBike = new RentBike(memberList, bicycleList);
                RentBikeUI* rentBikeUI = new RentBikeUI(rentBike);
                rentBikeUI->rentBicycle(idBike, model, outFile);
            }
            break;

        case 5: // �뿩 ������ ��ȸ
            if (menu2 == 1) {
                CheckBicycle* checkBicycle = new CheckBicycle(memberList, bicycleList);
                CheckBicycleUI* checkBicycleUI = new CheckBicycleUI(checkBicycle);
                checkBicycleUI->checkBike(outFile);
            }
            break;

        case 6: // ����
            if (menu2 == 1) {
                outFile << "6.1. ����";
                break;
            }
        }
    }

    inFile.close();
    outFile.close();
    return 0;
}
