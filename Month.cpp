//
// Created by Josh Christensen on 2/27/20.
//

#include "Calendar.h"

#ifndef CALENDAR_CALENDAR
#define CALENDAR_CALENDAR

using namespace std;

Calendar::Calendar(short month, int year) {
    short days = 0;
    if(month > 7) {
        month -=7;
    }
    if (month % 2 == 1) {
        days = 32;
    }

    for(int day = 1; day<32; day++) {
        dates[day] = new Date(month,day,year);
    }
}

string Calendar::getTopTemplate() {
    return this->cellTemplate[0];
}

#endif //CALENDAR_CALENDAR