// Name: Joshua Christensen
// Project: Published/Month
// File: main.cpp
// Purposes: Make a Month from a given date
// Date: 2/25/20

#include <iostream>
#include <iomanip>
#include <cmath>
//#include "Justifier.h"
#include "Month.h"
#include "Date.h"

using namespace std;



int main() {
    cout << endl;
    auto myCal = new Month(2, 2020);
    for (int i = 0; i < 31; i++) {
        cout << myCal->cellTemplate[0] << endl
             << myCal->cellTemplate[1] << setw(16) << myCal->dates[i]->getBubbleNumber() << myCal->cellTemplate[2]
    }

    return 0;
}