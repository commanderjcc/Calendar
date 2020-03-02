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
    cout << endl;
    auto myCalendar = new Calendar();
    auto myMonth = new Month(2, 2020);
//    for (int i = 1; i < myMonth->length; i++) {
//        cout << myCalendar->gT(0) << endl
//             << myCalendar->gT(1) << setw(16) << myMonth->dates[i]->getBubbleNumber() << myCalendar->gT(2);
//    }
    cout << myCalendar->cellTemplate[0];
    cout << endl << "done!" << endl;
    cout << "yeet";
    return 0;
}