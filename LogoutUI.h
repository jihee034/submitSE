#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include "Logout.h"
#include <fstream>
using namespace std;

class LogoutUI {
private:
    Logout* logout;

public:
    LogoutUI(Logout* logout);
    void logoutService(ofstream& out);
};

#endif
