// Name: Joshua Christensen
// Project: Published/Month
// File: main.cpp
// Purposes: Make a Month from a given date
// Date: 2/25/20

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Justifier.h"
#include "Calendar.h"
#include "Month.h"
#include "Date.h"

using namespace std;



int main() {
    char rawDay[3];
    char rawMonth[3];
    char rawYear[5];

    cout << "[Enter a date in the format mm/dd/yyyy]:";
//    cin.ignore(80,'\n');
    cin.get(rawMonth,3, '/');
    cin.ignore(1);
    cin.get(rawDay,3, '/');
    cin.ignore(1);
    cin.get(rawYear,5, '\n');
    cin.ignore(1);

    auto myCalendar = new Calendar(stoi(rawDay),stoi(rawMonth),stoi(rawYear));
//    for (int i = 2000; i < 2050; i++) {
//        myCalendar->targetYear = i;
//        cout << i << endl;
//        cout << myCalendar->drawCalendar();
//    }
    string test = myCalendar->drawCalendar();
    cout << test;
//    for (int i = 1; i < myMonth->length; i++) {
//        cout << myCalendar->gT(0)
//             << myCalendar->gT(1) << endl << setw(16) << myMonth->dates[i]->getBubbleNumber() << myCalendar->gT(2) << endl;
//    }
//    cout << myCalendar->cellTemplate[0];
//    cout << endl << "done!" << endl;
//    cout << "yeet";


//    char chars[5];
//    int number = 0x3250;
//    Date::GetUnicodeChar(number + 1,chars);
//    string test = "㉑";
//            cout << test << endl;
//            cout << chars;
    return 0;
}