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

void run() {
    char rawDay[3];
    char rawMonth[3];
    char rawYear[5];

    cout << "[Enter a date in the format mm/dd/yyyy]:";
    cin.get(rawMonth,3, '/');
    cin.ignore(1);
    cin.get(rawDay,3, '/');
    cin.ignore(1);
    cin.get(rawYear,5, '\n');
    cin.ignore(1);

    auto myCalendar = new Calendar(stoi(rawDay),stoi(rawMonth),stoi(rawYear));

    string test = myCalendar->drawCalendar();
    cout << test;
}

int main() {
    int ans = 0;

    do {
        run();

        cout << "Choose an option\n"
             << "1 - Run Calendar\n"
             << "0 - Exit\n"
             << "[Enter a number]: ";
        cin >> ans;
        cin.ignore(1,'\n');
    } while (ans != 0);

    return 0;
}