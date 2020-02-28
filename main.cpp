// Name: Joshua Christensen
// Project: Published/Calendar
// File: main.cpp
// Purposes: Make a Calendar from a given date
// Date: 2/25/20

#include <iostream>
#include <iomanip>
#include <cmath>
//#include "Justifier.h"
#include "Calendar.h"
#include "Date.h"

using namespace std;



int main() {
    int lol = 1;
//    cout << "hey" << lol;

    auto myCal = new Calendar();
    cout << endl << myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0];
    cout << endl << myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1];
    cout << endl << myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2];
    cout << endl << myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3];
    cout << endl << myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4];
    cout << endl << myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5];

    cout << endl << myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0];
    cout << endl << myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1];
    cout << endl << myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2];
    cout << endl << myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3];
    cout << endl << myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4];
    cout << endl << myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5];

    cout << endl << myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0];
    cout << endl << myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1];
    cout << endl << myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2];
    cout << endl << myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3];
    cout << endl << myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4];
    cout << endl << myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5];

    cout << endl << myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0];
    cout << endl << myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1];
    cout << endl << myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2];
    cout << endl << myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3];
    cout << endl << myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4];
    cout << endl << myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5];

    cout << endl << myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0];
    cout << endl << myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1];
    cout << endl << myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2];
    cout << endl << myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3];
    cout << endl << myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4];
    cout << endl << myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5];

    cout << endl << myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0]<< myCal->cellTemplate[0];
    cout << endl << myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1]<< myCal->cellTemplate[1];
    cout << endl << myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2]<< myCal->cellTemplate[2];
    cout << endl << myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3]<< myCal->cellTemplate[3];
    cout << endl << myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4]<< myCal->cellTemplate[4];
    cout << endl << myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5]<< myCal->cellTemplate[5];

    auto myDate = new Date(7,7,2001);
    cout << endl << myDate->getBubbleNumber();

    return 0;
}

//#include <iostream>
//#include <string>
//using namespace std;
//
//#include <io.h>    // for _setmode()
//#include <fcntl.h> // for _O_U16TEXT
//
//int main ()
//{
//    _setmode(_fileno(stdout), _O_U16TEXT);
//
//    // Box edges and corners (all double thick line)
//    // T for top, B for bottom, L for left, R for right
//    const wchar_t TB = L'\x2550';
//    const wchar_t LR = L'\x2551';
//    const wchar_t TL = L'\x2554';
//    const wchar_t TR = L'\x2557';
//    const wchar_t BL = L'\x255A';
//    const wchar_t BR = L'\x255D';
//
//    wstring hello  = L"Hello World!";
//    wstring margin = L"  ";
//    wstring line(hello.length() + 2 * margin.length(), TB);
//
//    wcout << TL << line << TR << endl;
//    wcout << LR << margin << hello << margin << LR << endl;
//    wcout << BL << line << BR << endl;
//    wcout << endl;
//
//    return 0;
//}