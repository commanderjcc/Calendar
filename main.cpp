// Name: Joshua Christensen
// Project: Published/Month
// File: main.cpp
// Purposes: Make a Month from a given date
// Date: 2/25/20

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Justifier.h"
#include "Month.h"
#include "Date.h"

using namespace std;



int main() {
    cout << endl;
//    auto myCal = new Month(2, 2020);
//    for (int i = 0; i < 31; i++) {
//        cout << myCal->cellTemplate[0] << endl
//             << myCal->cellTemplate[1] << setw(16) << myCal->dates[i]->getBubbleNumber() << myCal->cellTemplate[2]
//    }
    auto myJustifier = new Justifier();

    string test = u8"12345㊱890";
    char char_array[] = test;
    strcpy(char_array, test.c_str());

    cout << "1234567890" << endl;
    cout << test << endl;
//    cout << static_cast<unsigned>(a) << std::endl;
    cout << static_cast<unsigned>(myJustifier->length(char_array)) << endl;

    return 0;
}